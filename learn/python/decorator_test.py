def repeat(n):
    def repeat(func):
        def wrapper(*args, **kwargs):
            for i in range(n):
                result = func(*args, **kwargs)
            return result
        return wrapper


    return repeat


@repeat(3)
def greet(name):
    print(f"hi {name}")
    return name

greet("zyan")