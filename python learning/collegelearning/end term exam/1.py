def func1(i):
    return i/1
def func2():
    raise Exception("Raising Exception")
def func3():
    try:
        func1(5)
    except Exception as e:
        print(e)
    #raise
    try:
        func2()
    except Exception as e:
        print(e)
    func3()