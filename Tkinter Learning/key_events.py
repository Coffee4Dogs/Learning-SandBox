from tkinter import *



def doSomething(event):
    print("You pressed: " + event.keysym)
    label.config(text = event.keysym)

window = Tk()
#window.bind(event, function)
window.bind("<Key>", doSomething)

label = Label(window,font=("Ubuntu", 30),
              width=20,
              bg="red"
              )
label.pack()



window.mainloop()