text = "Yooooo\n This is some text\n Have a good one."

#   Write in the file
# with open("test.txt", "w") as file:
#     file.write(text)

#   Append in the file
with open("test.txt", "a") as file:
    file.write(text)