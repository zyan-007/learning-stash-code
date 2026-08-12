"""
gd_plots.py
Plotting utilities for the linear regression / gradient descent labs.

All functions expect YOUR implementations with these signatures:
    compute_cost(x, y, w, b)      -> scalar
    compute_gradient(x, y, w, b)  -> (dj_dw, dj_db)

Nothing here touches the ML logic. This is matplotlib plumbing only.
"""

import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D  # noqa: F401  (needed for 3d projection)

# ----------------------------------------------------------------------
# colours
# ----------------------------------------------------------------------
DK_BLUE = '#0096ff'
ORANGE = '#FF9300'
DK_RED = '#C00000'
MAGENTA = '#FF40FF'
PURPLE = '#7030A0'


# ======================================================================
# 1 + 2.  plt_gradients  ->  cost curve with tangent lines  +  quiver plot
# ======================================================================
def plt_gradients(x_train, y_train, compute_cost, compute_gradient,
                  b_fixed=100, w_points=(100, 200, 300)):
    """
    Left panel : cost as a function of w (b held fixed), with tangent
                 lines drawn at each w in w_points. Shows the sign of
                 dj_dw on either side of the minimum.
    Right panel: quiver plot of the gradient over the (w, b) plane.
                 Arrow length = magnitude, direction = uphill.
    """
    fig, ax = plt.subplots(1, 2, figsize=(12, 4))

    # ---------------- left: cost curve + tangents ----------------
    w_array = np.linspace(-100, 500, 200)
    cost_array = np.array([compute_cost(x_train, y_train, w, b_fixed)
                           for w in w_array])

    ax[0].plot(w_array, cost_array, linewidth=2, color=DK_BLUE)
    ax[0].set_title(f"Cost vs w, with gradient; b set to {b_fixed}")
    ax[0].set_ylabel('Cost')
    ax[0].set_xlabel('w')

    for w in w_points:
        dj_dw, _ = compute_gradient(x_train, y_train, w, b_fixed)
        j = compute_cost(x_train, y_train, w, b_fixed)

        # tangent line: j = dj_dw * (w_plot - w) + j
        w_span = 80
        w_line = np.array([w - w_span, w + w_span])
        j_line = dj_dw * (w_line - w) + j

        ax[0].plot(w_line, j_line, color=DK_RED, linewidth=1.5)
        ax[0].scatter(w, j, color=DK_RED, s=40, zorder=10)
        ax[0].annotate(f"$\\frac{{\\partial J}}{{\\partial w}}$ = {dj_dw:.0f}",
                       xy=(w, j), xytext=(w - 10, j + 8000),
                       fontsize=10, color=DK_RED)

    ax[0].grid(True, alpha=0.3)

    # ---------------- right: quiver plot ----------------
    w_grid = np.linspace(-100, 400, 10)
    b_grid = np.linspace(-200, 400, 10)
    W, B = np.meshgrid(w_grid, b_grid)

    U = np.zeros_like(W)
    V = np.zeros_like(B)
    for i in range(W.shape[0]):
        for j in range(W.shape[1]):
            dj_dw, dj_db = compute_gradient(x_train, y_train, W[i, j], B[i, j])
            U[i, j] = dj_dw
            V[i, j] = dj_db

    # normalise arrow lengths a little so the plot stays readable,
    # but keep relative magnitude visible via a sqrt scaling
    mag = np.sqrt(U**2 + V**2)
    scale = np.sqrt(mag / (mag.max() + 1e-12))
    U_s = U / (mag + 1e-12) * scale
    V_s = V / (mag + 1e-12) * scale

    ax[1].quiver(W, B, U_s, V_s, mag, cmap='viridis',
                 width=0.004, scale=12)
    ax[1].set_title("Gradient direction and magnitude\n(arrows point UPHILL)")
    ax[1].set_xlabel('w')
    ax[1].set_ylabel('b')
    ax[1].grid(True, alpha=0.3)

    plt.tight_layout()
    return fig, ax


# ======================================================================
# 3 + 4.  cost vs iteration  (start + end panels)
# ======================================================================
def plt_cost_iterations(J_hist, split=100, tail_start=None):
    """
    Left  : first `split` iterations  (the initial crash)
    Right : from `tail_start` onward  (the slow final descent)

    Two panels because the initial drop is so steep that on a single
    axis everything after ~50 iterations looks like a flat line.
    """
    if tail_start is None:
        tail_start = min(split * 10, max(len(J_hist) // 10, 1))

    fig, (ax1, ax2) = plt.subplots(1, 2, constrained_layout=True,
                                   figsize=(12, 4))

    ax1.plot(J_hist[:split], color=DK_BLUE)
    ax1.set_title("Cost vs. iteration (start)")
    ax1.set_ylabel('Cost')
    ax1.set_xlabel('iteration step')
    ax1.grid(True, alpha=0.3)

    tail = J_hist[tail_start:]
    ax2.plot(tail_start + np.arange(len(tail)), tail, color=DK_BLUE)
    ax2.set_title("Cost vs. iteration (end)")
    ax2.set_ylabel('Cost')
    ax2.set_xlabel('iteration step')
    ax2.grid(True, alpha=0.3)

    return fig, (ax1, ax2)


# ======================================================================
# 5 + 6.  plt_contour_wgrad  ->  contour rings + descent path
# ======================================================================
def plt_contour_wgrad(x_train, y_train, p_hist, compute_cost, ax=None,
                      w_range=(-100, 500, 5), b_range=(-500, 500, 5),
                      contours=(0.1, 50, 1000, 5000, 10000, 25000, 50000),
                      resolution=5, w_final=200, b_final=100,
                      step=10):
    """
    Contour plot of cost over the (w, b) plane, with the gradient
    descent path drawn on top as arrows.

    p_hist : list of [w, b] pairs recorded during training
    step   : draw an arrow every `step` recorded points (keeps it readable)
    """
    if ax is None:
        fig, ax = plt.subplots(1, 1, figsize=(12, 6))
    else:
        fig = ax.get_figure()

    b0, w0 = np.meshgrid(np.arange(*b_range), np.arange(*w_range))
    z = np.zeros_like(b0, dtype=float)
    for i in range(w0.shape[0]):
        for j in range(w0.shape[1]):
            z[i, j] = compute_cost(x_train, y_train, w0[i, j], b0[i, j])

    CS = ax.contour(w0, b0, z, contours, linewidths=1.5,
                    colors=[DK_BLUE, MAGENTA, ORANGE, DK_RED, PURPLE,
                            '#2E8B57', '#8B4513'][:len(contours)])
    ax.clabel(CS, inline=1, fmt='%1.0f', fontsize=9)

    ax.set_xlabel("w")
    ax.set_ylabel("b")
    ax.set_title("Cost contours with gradient descent path")

    # target
    ax.scatter(w_final, b_final, s=100, c=DK_RED, marker='x',
               linewidths=2, zorder=10, label='minimum')

    # path
    path = np.array(p_hist)
    base = path[0]
    for point in path[1::step]:
        edist = np.sqrt((base[0] - point[0])**2 + (base[1] - point[1])**2)
        if edist > resolution or point is path[-1]:
            ax.annotate('', xy=point, xytext=base,
                        arrowprops={'arrowstyle': '->',
                                    'color': 'r',
                                    'lw': 1.5},
                        va='center', ha='center')
            base = point

    ax.legend(loc='upper right')
    ax.grid(True, alpha=0.25)
    return fig, ax


# ======================================================================
# 7.  plt_divergence  ->  what "alpha too large" looks like
# ======================================================================
def plt_divergence(p_hist, J_hist, x_train, y_train, compute_cost,
                   b_fixed=100):
    """
    Left  : w oscillating with growing magnitude, plotted on the cost curve
    Right : 3D surface of cost over (w, b) with the diverging path
    """
    x = np.zeros(len(p_hist))
    y = np.zeros(len(p_hist))
    v = np.zeros(len(p_hist))
    for i in range(len(p_hist)):
        x[i] = p_hist[i][0]
        y[i] = p_hist[i][1]
        v[i] = J_hist[i]

    fig = plt.figure(figsize=(12, 5))
    gs = fig.add_gridspec(1, 5)
    fig.suptitle("Cost escalates when learning rate is too large",
                 fontsize=13)

    # ---------------- left: 2D ----------------
    ax = fig.add_subplot(gs[0, :2])
    ax.set_ylabel('Cost')
    ax.set_xlabel('w')

    tset = range(len(J_hist))
    ax.plot(x, v, c=MAGENTA, marker='o', markersize=4, linewidth=1)
    for i in tset:
        ax.annotate(str(i), (x[i], v[i]), fontsize=8,
                    textcoords="offset points", xytext=(0, 6), ha='center')
    ax.set_title('Cost vs w, path of gradient descent')
    ax.grid(True, alpha=0.3)

    # ---------------- right: 3D ----------------
    ax = fig.add_subplot(gs[0, 2:], projection='3d')

    w_span = max(abs(x).max() * 1.2, 300)
    b_span = max(abs(y).max() * 1.2, 300)
    w_arr = np.linspace(-w_span, w_span, 60)
    b_arr = np.linspace(-b_span, b_span, 60)
    W, B = np.meshgrid(w_arr, b_arr)
    Z = np.zeros_like(W)
    for i in range(W.shape[0]):
        for j in range(W.shape[1]):
            Z[i, j] = compute_cost(x_train, y_train, W[i, j], B[i, j])

    ax.plot_surface(W, B, Z, cmap='Spectral_r', alpha=0.55,
                    linewidth=0, antialiased=True)
    ax.plot_wireframe(W, B, Z, color='k', alpha=0.08)
    ax.scatter(x, y, v, c=DK_RED, s=25, depthshade=False)
    ax.plot(x, y, v, c=DK_RED, linewidth=1.2)

    ax.set_xlabel('w')
    ax.set_ylabel('b')
    ax.set_zlabel('cost', rotation=90)
    ax.set_title('Cost surface with diverging path')
    ax.view_init(elev=20, azim=-65)

    plt.tight_layout()
    return fig


# ======================================================================
# bonus: 3D cost surface on its own (the "soup bowl")
# ======================================================================
def plt_cost_surface(x_train, y_train, compute_cost,
                     w_range=(-100, 500), b_range=(-200, 400), n=60):
    """The bowl. Useful once, for intuition."""
    fig = plt.figure(figsize=(8, 6))
    ax = fig.add_subplot(projection='3d')

    w_arr = np.linspace(*w_range, n)
    b_arr = np.linspace(*b_range, n)
    W, B = np.meshgrid(w_arr, b_arr)
    Z = np.zeros_like(W)
    for i in range(W.shape[0]):
        for j in range(W.shape[1]):
            Z[i, j] = compute_cost(x_train, y_train, W[i, j], B[i, j])

    ax.plot_surface(W, B, Z, cmap='viridis', alpha=0.8, linewidth=0)
    ax.set_xlabel('w')
    ax.set_ylabel('b')
    ax.set_zlabel('cost', rotation=90)
    ax.set_title('Cost surface J(w, b)')
    ax.view_init(elev=25, azim=-60)
    return fig, ax