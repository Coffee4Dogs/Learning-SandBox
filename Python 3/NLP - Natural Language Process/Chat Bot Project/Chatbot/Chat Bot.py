# import random
# import json
# import pickle
# # pickle para guardar modelos de machine learning entrenados, de modo que puedan ser utilizados posteriormente para hacer predicciones sin tener que volver a entrenarlos desde cero cada vez.
# import numpy as np

# # El Natural Language Tool Kit
# import nltk
# from nltk.stem import WordNetLemmatizer #<--Lemmatizer Lo reduce a su Stem (Work = Working, Worked, Works)

# from tensorflow.keras.models import Sequential
# from tensorflow.keras.layers import Dense, Activation, Dropout
# from tensorflow.keras.optimizers import SGD

# lemmatizer = WordNetLemmatizer()

# intents = json.loads(
#                      .read())

# words = []
# classes = []
# documents = []
# ignore_letters = ['?', '!', '.' ',']

# for intent in intents['intents']:
#     for pattern in intent['patterns']:
#         word_list = nltk.word_tokenize(pattern)
#         words.extend(word_list)
#         documents.append((word_list,intent['tag']))
#         if intent['tag'] not in classes:
#             classes.append(intent['tag'])
            
# print(documents)
# words = [lemmatizer.lemmatize(word) for word in words if word not in ignore]




