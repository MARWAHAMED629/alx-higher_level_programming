#!/usr/bin/python3

# Import the 'lookup' function from the '0-lookup' module.
lookup = __import__('0-lookup').lookup

# Define a simple class named MyClass1
class MyClass1(object):
    pass


# Define another class named MyClass2.
class MyClass2(object):
    my_attr1 = 3

    def my_meth(self):
        pass


print(lookup(MyClass1))
print(lookup(MyClass2))
print(lookup(int))
