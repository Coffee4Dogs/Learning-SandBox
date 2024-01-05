from tkinter import *

window = Tk()
window.geometry("400x600")

#Hot image.
hot_image = PhotoImage(file="components\\hot.png")
hot_label = Label(window,
                  image=hot_image)
hot_label.pack()




#Scale
scale = Scale(window, 
              from_=100, 
              to=0,
              length=500,
              orient=VERTICAL, #oriented VERTICAL or HORIZONTAL
              font=("Ubuntu", 20),
              tickinterval=10, #will be in intervals of 10
              #showvalue=0, # hide current value
              resolution = 5,
              troughcolor="#69EAFF", #color of the line
              fg="#ff1c00",
              bg="#111111"
              
              )

scale.set(50)

scale.pack()

#Cold image.
cold_image = PhotoImage(file="components\\cold.png")
cold_label = Label(window,
                  image=cold_image)
cold_label.pack()

#Button Submit
def submit():
    print("The temperature is: "+ str(scale.get()) + " degrees C")

button = Button(window, 
                text="submit",
                command=submit
                )
button.pack()


#main loop
window.mainloop()