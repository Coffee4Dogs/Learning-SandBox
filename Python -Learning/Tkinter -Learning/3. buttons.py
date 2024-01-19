from tkinter import *

window = Tk()

def click():
    print("you clicked the like button!")


photo = PhotoImage(file="src\\like.png")

button = Button(window,
                text="Click me!",
                command=click,
                font=("Verdana",30),
                bg="#0a0a0a",
                fg="#FFFFFF",
                activebackground="#0a0a0a",
                activeforeground="#FFFFFF",
                state=ACTIVE,
                image=photo,
                compound="bottom")

button.pack()


#Mainloop
window.mainloop()