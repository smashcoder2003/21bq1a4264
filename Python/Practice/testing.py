def decorator(func):
    def new_function():
        print("I am the new function")
    return new_function



@decorator
def foo():
    print("I am foo")

foo()
