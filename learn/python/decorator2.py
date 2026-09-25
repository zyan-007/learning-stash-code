def debug(func):
    def wrapper(*args, **kwargs):
        total_args = ", ".join(str(arg) for arg in args)
        total_args = 0 if len(total_args) == 2 else total_args
        total_kwargs = ", ".join(f"{k}: {v}" for k, v in kwargs.items())
        total_kwargs = 0 if len(total_kwargs) == 2 else total_kwargs

        print(f"args: {total_args}")
        print(f"kwargs: {total_kwargs}")
        return func(*args, **kwargs)

    return wrapper
@debug
def student_info(birth_year, name="zyan", grade="10"):
    print(f"My name is {name}, in grade {grade}, my birthyear is {birth_year}")

student_info(1930, name="ashoo")
