import time

def timer(func):
    def wrapper(*args, **kwargs):
        start = time.perf_counter()
        result = func(*args, **kwargs)
        end = time.perf_counter()
        print(f"{func.__name__} ran for {end-start:.4f}sec")
        # return result
    return wrapper

@timer
def print_name():
    print(f"My name is yes")
    # return name+" passed"

print(print_name())
