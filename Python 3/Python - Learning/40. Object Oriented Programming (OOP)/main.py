from car import Car

C1 = Car("Chevy", "Corvette", 2021, "blue")
C2 = Car("Corvete", "Mustang", 2022, "red")

print(C1.make)
print(C1.model)
print(C1.year)
print(C1.color)

C2.drive()
C2.stop()