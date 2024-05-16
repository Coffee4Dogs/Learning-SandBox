from tkinter import *

window = Tk()
window.geometry("700x500")

entry = Entry(window,
              font=("Verdana",20,"bold"),
              show="*")

entry.insert(0,"Hello")

def submit():
    x = entry.get()
    print("Hello "+ x)
    entry.config(state=DISABLED)
submit_button = Button(window,
                       text="Submit",
                       font=("Verdana",15),
                       command=submit
                       )

def delete():
    entry.delete(0,END)
    
delete_button = Button(window,
                       text="Delete",
                       font=("Verdana",15),
                       command=delete
                       )



def backspace():
    entry.delete(len(entry.get())-1, END)

backspace_button = Button(window,
                       text="Backspace",
                       font=("Verdana",15),
                       command=backspace
                       )


#Pack
entry.pack(side="left")
submit_button.pack(side="right")
backspace_button.pack(side="right")
delete_button.pack(side="right")


#Main Loop
window.mainloop()


