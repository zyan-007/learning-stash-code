from functools import wraps

def count_calls(original_function):
    @wraps(original_function)
    def wrapper_function(*args, **kwargs):
        wrapper_function.calls += 1
        result = original_function(*args, **kwargs)
        return result

    wrapper_function.calls = 0

    return wrapper_function

@count_calls
def greet(name):
    return f"hi {name}"

greet("zyan")
greet("swarup")
print(greet.calls)  