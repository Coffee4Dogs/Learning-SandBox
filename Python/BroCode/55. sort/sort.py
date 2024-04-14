#sort() method = used with list
#sort() function = used with iterables

students = ["Squidward" , "Sandy", "Patrick", "Spongebob", "Mr. Krabs"]

#students.sort()
#students.sort(reverse=True)

sorted_students = sorted(students, reverse=True)

for i in sorted_students:
    print(i)
