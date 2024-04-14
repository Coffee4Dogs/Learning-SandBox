from tkinter import *
from PIL import Image, ImageTk

window = Tk()

# Global Variables:
background="#181b24"    # Main Background
color="#f0f0f0"         #Font Color
h2 = ("Ubuntu", 13)   #Font
h3 = ("Ubuntu", 10)   #Font
# Images:
favicon = PhotoImage(file="assets\\icon.png") #Favicon/Logo
bg_login = PhotoImage(file="assets\\bg_login.png") #Background in Login Window
button_login = PhotoImage(file="assets\\button.png")    #Login Button





def Settings():
    window.iconphoto(True, favicon)
    window.title("Doctor Cat")
    window.geometry("420x640")
    window.resizable(False,False)
    window.config(background=background)



background_image = Label(window, image=bg_login, background=background)
background_image.pack()


# Container1
Container1 = Frame(window, background=background)
Container1.place(x=60,y=87)
#Text
UserName_Text = Label(Container1, text="Username", background=background, fg=color, font=h2)
UserName_Text.pack(side="top")
#Entry
UserName_Entry = Entry(Container1, background="#0a0a0a", fg=color, width=28, justify="center", font=h2)
UserName_Entry.pack(side="top", ipady=1.6, pady=8)
#Text
Password_Text = Label(Container1, text="Password", background=background, fg=color, font=h2)
Password_Text.pack(side="top")
#Entry
Password_Entry = Entry(Container1, background="#0a0a0a", fg=color, width=28, justify="center", font=h2)
Password_Entry.pack(side="top", ipady=1.6, pady=8)
# Button
Login_Button = Button(window, text="Log In", font=h3, image=button_login, fg=color, background=background, border=2)
Login_Button.place(x=180,y=240)


Settings()
window.mainloop()