
# Lambda Function = Written in 1 line using lambda keyword.
                # Accepts any number of arguments, but only has one expression.
# Lambda parameters:expression



# ====== Code =======




# def double(x):
#     return x * 2

# FunctionName = lambda parameters : expression
double = lambda x : x*2
print(double(5))

# FunctionName = lambda param1, param2 : expression
Multiply = lambda x,y : x * y
print(Multiply(5,6))

#FunctionName = lambda Param1, Param2, Param3 : Expression
Add = lambda x, y, z : x + y + z
print(Add(5,5,5))

# FunctionName = lambda Param1, Param2 : Expression
Full_Name = lambda First_Name, Last_Name : First_Name + " " + Last_Name
print(Full_Name("Jack", "Code"))

AgeCheck = lambda age : True if age>= 18 else False
print(AgeCheck(18))


