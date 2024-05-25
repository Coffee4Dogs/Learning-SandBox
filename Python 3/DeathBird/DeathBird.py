from tkinter import *
import keyboard

window = Tk()



window.title("Death Bird")
window.iconphoto(True, PhotoImage(file="Assets\\deathbird.png"))
window.geometry("460x600")
window.config(background="#101010")




# def on_key_event(event):
#     if event.name == 'k' and event.event_type == keyboard.KEY_DOWN:
#         keyboard.send('j')

# keyboard.on_press_key('k', on_key_event)

# # Mantén el programa en ejecución
# keyboard.wait('esc')  # Espera hasta que se presione la tecla 'esc'



DefaultTextButton = "Run"

def on_key_event(event):
    if event.name == 'k' and event.event_type == keyboard.KEY_DOWN:
        keyboard.send('j')

def sayHello():
    x = EntryKeyA1.get()
    print(x)


# Entry A
EntryKeyA1 = Entry(window, 
                  font=("Arial", 20),width=4)
EntryKeyA1.pack(side="left")
# Entry B
EntryKeyB1 = Entry(window, 
                  font=("Arial", 20),width=4)
EntryKeyB1.pack(side="left")

# Button

Button1 = Button(window,
                 font=("Arial", 15),width=4, text=DefaultTextButton)
Button1.pack(side="left")

Button2 = Button(window,
                 font=("Arial", 15),width=4, text="SayHelloo! :D",
                 command=sayHello
                 )
Button2.pack(side="right")




#End Code
window.mainloop()

