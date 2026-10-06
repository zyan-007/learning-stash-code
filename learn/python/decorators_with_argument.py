def repeat_times(n):
    def repeat(original_function):
        def wrapper(*args, **kwargs):
            for i in range(n):
                result=original_function(*args, **kwargs)
            return result
        return wrapper
    return repeat


@repeat_times(3)
def greet(name):
    print(f"hi {name}")
    return name

print(greet("zyan"))
print(greet.__name__)