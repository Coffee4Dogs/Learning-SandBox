from tkinter import *
from PIL import Image, ImageTK



window = Tk()

window.title("Planner")
window.geometry("456x684")


# Load Favicon
try:
    favicon = PhotoImage(file="src\\favicon.png")
    window.iconphoto(True, favicon)
except Exception as Error:
    print("Error in the Favicon", Error)






    
img = Image.open("src\\images\\img_1.png")
print(img.width, img.height)
img = img.resize((int(img.width/8) , int(img.height/2)))
print(img.width, img.height)


ImageTk = ImageTk.PhotoImage("")


Background_Image = Label(window, image=img)
Background_Image.pack()





window.mainloop()
