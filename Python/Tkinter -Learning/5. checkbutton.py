from tkinter import *

window = Tk()

window.geometry("800x500")

x = IntVar()#This normaly returns 1 or 0, needs to be declared

def display():
    if(x.get()==1):
        print("You agree")
    else:
        print("You dont agree")

photo = PhotoImage(file="src\\Python_Logo.png")
check_button = Checkbutton(window, 
                           text="I agree the terms...",
                           variable=x,
                           onvalue=1,
                           offvalue=0,
                           command=display,
                           font=("Ubuntu", 20),
                           fg="#00ff00",
                           bg="black",
                           activebackground="black",
                           activeforeground="#00ff00",
                           padx=25,
                           pady=10,
                           image=photo,
                           compound="left"
                           )

check_button.pack()




window.mainloop()