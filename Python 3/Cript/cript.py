from tkinter import *


root = Tk()

#Variable/Objects
favicon = PhotoImage(file="Assets\\lollipop.png")
title = "Lollipop 1.0"
black = ("#000000", "#0a0a0a", "#101010", "#1c1c1c")
size = "800x400"
almost_white = "#e3e3e3"



root.iconphoto(True, favicon)
root.title(title)
root.config(background=black[1])
root.geometry(size)


# container1
container1 = Frame(root, bg=black[1])
container1.pack(padx=24)
container1.pack(pady=24)

# text_input1
text_input1 = Entry(container1, bg=black[3], fg=almost_white, justify="center", width=40, font=("Ubuntu", 18))
text_input1.pack(side="top")

# text_input2
text_input2 = Entry(container1, bg=black[3], fg=almost_white, justify="center", width=40, font=("Ubuntu", 18))
text_input2.pack(side="top", pady=10)




#print
def function1():
    print("Encrypted")
    x = text_input1.get()
    print(x)
    text_input2.insert(0, str(x))
    


# button1
button2 = Button(container1, text="Encrypt", bg=black[2], fg=almost_white, justify="center", width=14, font=("Ubuntu", 14),
                 command=function1)
button2.pack(side="top")




root.mainloop()
