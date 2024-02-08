class Car:
    #Constructor
    def __init__(self, make, model, year, color):
        self.make = make
        self.model = model
        self.year = year
        self.color = color
    
    def drive(self):
        print("This " + self.model + " is driving!")
        
    def stopped(self):
        print("This " + self.model + " is stopped.", end=" ")
        print("It was released in " + str(self.year))    
    
    
