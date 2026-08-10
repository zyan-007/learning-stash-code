import copy

a = [1, 2, 3]
b = copy.deepcopy(a)
b[0] = 5

print(f"a: {a}")
print(f"b: {b}")