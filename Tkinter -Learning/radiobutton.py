from tkinter import *

window = Tk()

food = ["pizza", "hamburger", "hotdog"]

x = IntVar()
pizza_image = PhotoImage(file="pizza.png")
hamburger_image = PhotoImage(file="hamburger.png")
hotdog_image = PhotoImage(file="hotdog.png")
food_images = [pizza_image, hamburger_image, hotdog_image]

def order():
    if(x.get()==0):
        print("You ordered pizza")
    elif(x.get() == 1):
        print("You ordered hamburger")
    elif(x.get()==2):
        print("You ordered hotdog")
    

for index in range(len(food)):
    radiobutton = Radiobutton(window, 
                              text=food[index], #assigns text
                              variable=x, #groups radio into a variable
                              value=index, #this assigns each radio a different value
                              padx= 25, #adds padding on x - axis
                              font=("Impact",50),
                              image=food_images[index],
                              compound="left",  #adds image and text
                              indicatoron=0, #removes the circle
                              width=425, #sets the width of the button
                              command = order #calls the function
                              )
    
    
    radiobutton.pack(anchor=W)


#Mainloop
window.mainloop()