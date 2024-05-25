import nltk
wn = nltk.WordNetLemmatizer()
ps = nltk.PorterStemmer()
print("\n \n ")

words = ["university", "universities", "Universities" , "college"]
result = []


result.extend([words[0], words[1], words[2], words[3]])

# steaming words
for i in result:
    print(ps.stem(i))

# print result
for i in result:
    print(i)

# print(words[2])
# print(words[3])


# for words in words:
#     print(words)








print("\n Hello World \n")