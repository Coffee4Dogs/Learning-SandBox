#Lambda Function = Function written in 1 line using lambda keyword.
#           accepts any number of arguments, but only has one expression.
#           (think of it as a shorcut)
#           (useful if needed for a short period of time, throw-away)
#

# lambda parameters:expression

#def double(x):
#    return x * 2
#print(double(5))

#Lambda:
#double = lambda x: x * 2


#2 parameters : 2 expressions
multiply = lambda x, y: x*y
print(multiply(2,4))

#2 paramaeters: 2 expressions
Full_Name = lambda First_Name, Last_Name : First_Name+" "+Last_Name 
print(Full_Name("Name","Last"))


#If Else Example:
# def age_check(age):
#     if age >= 18:
#         return True
#     else:
#         return False
age_check = lambda age: True if age >= 18 else False
print(age_check(18))















