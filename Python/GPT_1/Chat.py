import torch
import nltk
import random
import json
import tkinter
from tkinter import *
import torch


window = Tk()
st = nltk.PorterStemmer()

Black = ("#1a1a1a", "#121212", "#0a0a0a" , "#000000") #The < lighter. | The  > Blacker.





#------Favicon-------
def Icon(favicon = PhotoImage(file="assets/favicon.png")): #Favicon route
    window.iconphoto(True, favicon)

#------Background & Geometry-------
def window_ConfigStuff(Background = Black[3]):#Set the colors/values/atributes in this line.
    window.title("GPT_1")               #Title
    window.geometry("400x800")          #Geometry
    window.config(background=Black[3])  #Background Color

mycolor = "#ffffff"
myfont=("Roboto",20,"Regular")

entry = Entry(window,fg=mycolor,font=myfont,show="")
entry.pack(side="left")

Icon()
window_ConfigStuff()




    















# print("sentence: "+ str(sentence))



print("Program Ended")
window.mainloop()