from tkinter import *
#Instanciate an instance of a window
window = Tk()

 
#Window Size
window.geometry("820x420")
#Title
window.title("<Title goes here>")
#Set Icon
icon = PhotoImage(file="src\\logo.png")
window.iconphoto(True, icon)
#Set Background Color
window.config(background="#e6e6e6")

#Image / Photo
photo = PhotoImage(file="src\\timage.png", )

#fg = Foreground | bg= background | padx, pady = padding, sepparation between the border
label = Label(window, 
              text="Hello World", 
              font=("Verdana",40,"bold"), 
              fg="#f74c02", bg="#0a0a0a",
              padx=20, pady=20,
              image=photo,
              compound="bottom")
# label.pack()
label.pack(side="bottom")







#-----------------------
#Show Window
window.mainloop() #displays the window. Listen events.