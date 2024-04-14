import random
import json

import nltk
# Steaming
ps = nltk.PorterStemmer()       # Porter Stemmer
wn = nltk.WordNetLemmatizer()   # Word Net Lemmatizer
# Tokenize
nltk.download('punkt')
# tokens = nltk.word_tokenize(sentence)
ignore_letters = ["!","¡", ".", "?","¿" , ",", ";",  ]

Font1 = "Jersey"



from tkinter import *
window = Tk()


Colors = ["#cc0231", "#670eb0", "#670eb0", "#ad052f"]
Grays = ["#070707", "#090909", "#1c1c1c", "#1f1f1f"]

# Randomizer
Random_Colors = random.choice(Colors)
Random_Grays = random.choice(Grays)


# Configuration:
window.title("<Title Goes Here>")
window.geometry("700x400")
window.config(background=Random_Grays, border=10)
Favicon = PhotoImage(file="Assets/favicon.png") #Favicon File
window.iconphoto(True, Favicon)





    

file = open('Assets/PreTraining.json', "r")
print('file found')
data = json.load(file) #Load json file in a single variable
    
    
# list:
greeting_ask = data["greeting_ask"]
greeting_response = data["greeting_response"]


  
greeting_ask_value = random.choice(greeting_ask)
greeting_response_value = random.choice(greeting_response)

file.close()




Text1 = greeting_ask_value
Text1 = Label(window, text=greeting_ask_value, fg="#ffffff")
Text1.pack(side="top")









window.mainloop()
print("\n Hello \n World!")
