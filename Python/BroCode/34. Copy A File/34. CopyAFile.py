#copyfile() copies a file
#copy() copyfile() + permission mode + destination can be a directory
#copy2() = copy() + copies metadata (file's creation and modification times)

import shutil
shutil.copyfile("test.txt","copy.txt") #src, destination dst

# path = "C:\\Users\\jackl\\Desktop"
# shutil.copy("test.txt", path)
