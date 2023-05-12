def new_function(myfunc):
    print("I am the new function")
    return myfunc


@new_function
def foo():
    print("I am foo")


foo()
