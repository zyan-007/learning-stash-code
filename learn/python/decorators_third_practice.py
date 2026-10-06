from functools import wraps

def log_calls(message):
    def log_calls(original_function):
        @wraps(original_function)
        def wrapper_function(*args, **kwargs):
            print("["+ message + "] " + original_function.__name__ + f" called with arguments {args} {kwargs}")
            result = original_function(*args, **kwargs)
            print("["+ message + "] " + original_function.__name__ + f" returned {result}")
            return result
        return wrapper_function
    return log_calls


@log_calls("DEBUG")
def add(a, b):
    return a + b

add(2, 3)
add(b=5, a=1)