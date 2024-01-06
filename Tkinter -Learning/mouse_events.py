from tkinter import *

def Left_Click(event):
    print("Left Click. Mouse coordinates: "+
          str(event.x) + 
          ", " +
          str(event.y)
          )
    
def Scroll_Click(event):
    print("Scroll wheel click. Mouse Coordinates: "+
          str(event.x) + 
          ", " +
          str(event.y)
          )

def Right_Click(event):
    print("Right Click. Mouse Coordinates: "+
          str(event.x) + 
          ", " +
          str(event.y)
          
          )

window = Tk()

window.config(bg="#eb4034")
window.title("Mouse Events")
icon = PhotoImage(file="mouse.png")
window.iconphoto(True, icon)
window.geometry("600x500")


# window.bind(event, doSomething)
#Keyboard: <key>
#window.bind("<Key>", doSomething)

#Mouse:<button-1>
window.bind("<Button-1>", Left_Click)
window.bind("<Button-2>", Scroll_Click)
window.bind("<Button-3>", Right_Click)

















window.mainloop()