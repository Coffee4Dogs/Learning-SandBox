from tkinter import *
window = Tk()



# ---Settings ---
try:
    window_bg_color = "#141414"
    red = "#d91e1e"
    yellow = "#eaed24"
    orange = "#f7911b"
    white = "#ffffff"
    green = "#67e342"
    blue = "#2b8ed9"
    screen_resolution = "800x640"
    font_familly = "Zilla Slab Highlight"
    font_color = "#0a0a0a"
    font_size = 20
    button_font = "VT323"
    button_font_size = 20
    button_foreground = "#ffffff"
    button_background = "#0a0a0a"
    entry_width = 2
    box_background = "#101010"
    
    
except Exception as error:
    print("Error in #Settings", error)


# (Also settings)
try:
    window.title("Proyecto Cubo")
    window.geometry(screen_resolution)
    favicon = PhotoImage(file="Assets/favicon.png")
    window.iconphoto(True, favicon)
    window.config(background=window_bg_color)
    window.resizable(True,True)
except Exception as error:
    print("Error in (Also Settings)", error)
    
# --- Declare Lists ---
C1 =    [0, 11, 12, 13,
            14, 15, 16,
            17, 18, 19]

C2 =    [0, 21, 22, 23,
            24, 25, 26,
            27, 28, 29]

C3 =    [0, 31, 32, 33,
            34, 35, 36,
            37, 38, 39]

C4 =    [0, 41, 42, 43,
            44, 45, 46,
            47, 48, 49]

C5 =    [0, 51, 52, 53,
            54, 55, 56,
            57, 58, 59]

C6 =    [0, 61, 62, 63,
            64, 65, 66,
            67, 68, 69]

# --- Declare Color Lists ---

COL1 =    ["COL1", red, red, red,
            red, red, red,
            red, red, red]

COL2 =    ["COL2", yellow, yellow, yellow,
            yellow, yellow, yellow,
            yellow, yellow, yellow]

COL3 =    ["COL3", orange, orange, orange,
            orange, orange, orange,
            orange, orange, orange]

COL4 =    ["COL4", white, white, white,
            white, white, white,
            white, white, white]

COL5 =    ["COL5", green, green, green,
            green, green, green,
            green, green, green]

COL6 =    ["COL6", blue, blue, blue,
            blue, blue, blue,
            blue, blue, blue]


# --- Box Container --- 
# Place Everything in the box
Box_Container = Frame(window,background=box_background, pady=20, padx=20)
Box_Container.pack(pady=20)
Combo_526 = Frame(Box_Container  ,background=box_background)
#--- switch Function ---
# x = C1[1], y = COL[1]
# x = Position | y = Color




UpIcon = PhotoImage(file="Assets/up.png")
UpIcon = UpIcon.subsample(26)
DownIcon = PhotoImage(file="Assets/down.png")
DownIcon = DownIcon.subsample(26)
LeftIcon = PhotoImage(file="Assets/left.png")
LeftIcon = LeftIcon.subsample(26)
RightIcon = PhotoImage(file="Assets/right.png")
RightIcon = RightIcon.subsample(26)



A_Button_Container = Frame(Box_Container, background="#90fa63")
A_Button_Container.pack(side="top")



# Movement, Color, Button
def switch(x, y, z):
    
    z.delete(0, END)
    z.insert(0, x)
    z.config(background=y)
    

    
def MovA1():
    print("Movimiento A1 Ejecutado...")
    
    
    
    
    
    
    
    
    
            
            
    
def MovA2():
    print("Movimiento A2 Ejecutado...")
    
def MovA3():
    print("Movimiento A3 Ejecutado...")
        
A1Button = Button(A_Button_Container, command=MovA1, text="A1", padx=3, fg=button_foreground, bg=button_background, image=UpIcon,  font=(button_font,button_font_size), compound="top")
A1Button.pack(side="left")
A2Button = Button(A_Button_Container, command=MovA2, text="A2", padx=3, fg=button_foreground, bg=button_background, image=UpIcon,  font=(button_font,button_font_size), compound="top")
A2Button.pack(side="left")
A3Button = Button(A_Button_Container, command=MovA3, text="A3", padx=3, fg=button_foreground, bg=button_background, image=UpIcon,  font=(button_font,button_font_size),  compound="top")
A3Button.pack(side="left")




B_Button_Container = Frame(Box_Container,background=box_background)


B3Label = Label(B_Button_Container,text="B3", padx=3, fg=button_foreground, bg=button_background, image=DownIcon,  font=(button_font,button_font_size),  compound="top")
B3Label.pack(side="left")
B2Label = Label(B_Button_Container, text="B2", padx=3, fg=button_foreground, bg=button_background, image=DownIcon, font=(button_font,button_font_size), compound="top")
B2Label.pack(side="left")
B1Label = Label(B_Button_Container, text="B1", padx=3, fg=button_foreground, bg=button_background, image=DownIcon,  font=(button_font,button_font_size), compound="top")
B1Label.pack(side="left")

I_Button_Container = Frame(Combo_526  ,background=box_background)


I1Label = Label(I_Button_Container, text="I1", padx=3, fg=button_foreground, bg=button_background, image=RightIcon,  font=(button_font,button_font_size), compound="right")
I1Label.pack(side="top")
I2Label = Label(I_Button_Container, text="I2", padx=3, fg=button_foreground, bg=button_background, image=RightIcon, font=(button_font,button_font_size), compound="right")
I2Label.pack(side="top")
I3Label = Label(I_Button_Container,text="I3", padx=3, fg=button_foreground, bg=button_background, image=RightIcon,  font=(button_font,button_font_size),  compound="right")
I3Label.pack(side="top")

D_Button_Container = Frame(Combo_526  ,background=box_background)


D1Label = Label(D_Button_Container, text="D1", padx=3, fg=button_foreground, bg=button_background, image=LeftIcon,  font=(button_font,button_font_size), compound="left")
D1Label.pack(side="top")
D2Label = Label(D_Button_Container, text="D2", padx=3, fg=button_foreground, bg=button_background, image=LeftIcon, font=(button_font,button_font_size), compound="left")
D2Label.pack(side="top")
D3Label = Label(D_Button_Container,text="D3", padx=3, fg=button_foreground, bg=button_background, image=LeftIcon,  font=(button_font,button_font_size),  compound="left")
D3Label.pack(side="top")










# --- Relative Containers --- 



Container_C1_Relative = Frame(Box_Container ,background=box_background)
Container_C2_Relative = Frame(Combo_526, background=box_background)
Container_C3_Relative = Frame(Box_Container, background=box_background)
Container_C4_Relative = Frame(Box_Container ,background=box_background)
Container_C5_Relative = Frame(Combo_526 ,background=box_background)
Container_C6_Relative = Frame(Combo_526 ,background=box_background)

Container_C1_Relative.pack(side="top" )

I_Button_Container.pack(side="left")
Container_C5_Relative.pack(side="left")
Container_C2_Relative.pack(side="left")
Container_C6_Relative.pack(side="left")
D_Button_Container.pack(side="left")

Combo_526.pack(side="top")

Container_C3_Relative.pack(side="top")
Container_C4_Relative.pack(side="top")

B_Button_Container.pack(side="top")

# --- C1 Container --- 
# Row Containers
Container_C1_Row1 = Frame(Container_C1_Relative ,background=box_background)
Container_C1_Row2 = Frame(Container_C1_Relative ,background=box_background)
Container_C1_Row3 = Frame(Container_C1_Relative ,background=box_background)
Container_C1_Row1.pack()
Container_C1_Row2.pack()
Container_C1_Row3.pack()

ButtonC11 = Entry(Container_C1_Row1, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC12 = Entry(Container_C1_Row1, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC13 = Entry(Container_C1_Row1, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC14 = Entry(Container_C1_Row2, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC15 = Entry(Container_C1_Row2, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC16 = Entry(Container_C1_Row2, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC17 = Entry(Container_C1_Row3, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC18 = Entry(Container_C1_Row3, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC19 = Entry(Container_C1_Row3, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
switch(C1[1], COL1[1], ButtonC11)
switch(C1[2], COL1[2], ButtonC12)
switch(C1[3], COL1[3], ButtonC13)
switch(C1[4], COL1[4], ButtonC14)
switch(C1[5], COL1[5], ButtonC15)
switch(C1[6], COL1[6], ButtonC16)
switch(C1[7], COL1[7], ButtonC17)
switch(C1[8], COL1[8], ButtonC18)
switch(C1[9], COL1[9], ButtonC19)
ButtonC11.pack(side="left")
ButtonC12.pack(side="left")
ButtonC13.pack(side="left")
ButtonC14.pack(side="left")
ButtonC15.pack(side="left")
ButtonC16.pack(side="left")
ButtonC17.pack(side="left")
ButtonC18.pack(side="left")
ButtonC19.pack(side="left")



# --- C2 Container --- 
# Row Containers
Container_C2_Row1 = Frame(Container_C2_Relative ,background=box_background)
Container_C2_Row2 = Frame(Container_C2_Relative ,background=box_background)
Container_C2_Row3 = Frame(Container_C2_Relative ,background=box_background)
Container_C2_Row1.pack()
Container_C2_Row2.pack()
Container_C2_Row3.pack()

ButtonC21 = Entry(Container_C2_Row1, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC22 = Entry(Container_C2_Row1, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC23 = Entry(Container_C2_Row1, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC24 = Entry(Container_C2_Row2, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC25 = Entry(Container_C2_Row2, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC26 = Entry(Container_C2_Row2, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC27 = Entry(Container_C2_Row3, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC28 = Entry(Container_C2_Row3, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC29 = Entry(Container_C2_Row3, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
switch(C2[1], COL2[1], ButtonC21)
switch(C2[2], COL2[2], ButtonC22)
switch(C2[3], COL2[3], ButtonC23)
switch(C2[4], COL2[4], ButtonC24)
switch(C2[5], COL2[5], ButtonC25)
switch(C2[6], COL2[6], ButtonC26)
switch(C2[7], COL2[7], ButtonC27)
switch(C2[8], COL2[8], ButtonC28)
switch(C2[9], COL2[9], ButtonC29)
ButtonC21.pack(side="left")
ButtonC22.pack(side="left")
ButtonC23.pack(side="left")
ButtonC24.pack(side="left")
ButtonC25.pack(side="left")
ButtonC26.pack(side="left")
ButtonC27.pack(side="left")
ButtonC28.pack(side="left")
ButtonC29.pack(side="left")


# --- C3 Container --- 
# Row Containers
Container_C3_Row1 = Frame(Container_C3_Relative ,background=box_background)
Container_C3_Row2 = Frame(Container_C3_Relative ,background=box_background)
Container_C3_Row3 = Frame(Container_C3_Relative ,background=box_background)
Container_C3_Row1.pack()
Container_C3_Row2.pack()
Container_C3_Row3.pack()

ButtonC31 = Entry(Container_C3_Row1, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC32 = Entry(Container_C3_Row1, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC33 = Entry(Container_C3_Row1, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC34 = Entry(Container_C3_Row2, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC35 = Entry(Container_C3_Row2, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC36 = Entry(Container_C3_Row2, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC37 = Entry(Container_C3_Row3, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC38 = Entry(Container_C3_Row3, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC39 = Entry(Container_C3_Row3, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
switch(C3[1], COL3[1], ButtonC31)
switch(C3[2], COL3[2], ButtonC32)
switch(C3[3], COL3[3], ButtonC33)
switch(C3[4], COL3[4], ButtonC34)
switch(C3[5], COL3[5], ButtonC35)
switch(C3[6], COL3[6], ButtonC36)
switch(C3[7], COL3[7], ButtonC37)
switch(C3[8], COL3[8], ButtonC38)
switch(C3[9], COL3[9], ButtonC39)
ButtonC31.pack(side="left")
ButtonC32.pack(side="left")
ButtonC33.pack(side="left")
ButtonC34.pack(side="left")
ButtonC35.pack(side="left")
ButtonC36.pack(side="left")
ButtonC37.pack(side="left")
ButtonC38.pack(side="left")
ButtonC39.pack(side="left")


# --- C4 Container --- 
# Row Containers
Container_C4_Row1 = Frame(Container_C4_Relative ,background=box_background)
Container_C4_Row2 = Frame(Container_C4_Relative ,background=box_background)
Container_C4_Row3 = Frame(Container_C4_Relative ,background=box_background)
Container_C4_Row1.pack()
Container_C4_Row2.pack()
Container_C4_Row3.pack()

ButtonC41 = Entry(Container_C4_Row1, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC42 = Entry(Container_C4_Row1, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC43 = Entry(Container_C4_Row1, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC44 = Entry(Container_C4_Row2, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC45 = Entry(Container_C4_Row2, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC46 = Entry(Container_C4_Row2, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC47 = Entry(Container_C4_Row3, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC48 = Entry(Container_C4_Row3, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC49 = Entry(Container_C4_Row3, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
switch(C4[1], COL4[1], ButtonC41)
switch(C4[2], COL4[2], ButtonC42)
switch(C4[3], COL4[3], ButtonC43)
switch(C4[4], COL4[4], ButtonC44)
switch(C4[5], COL4[5], ButtonC45)
switch(C4[6], COL4[6], ButtonC46)
switch(C4[7], COL4[7], ButtonC47)
switch(C4[8], COL4[8], ButtonC48)
switch(C4[9], COL4[9], ButtonC49)
ButtonC41.pack(side="left")
ButtonC42.pack(side="left")
ButtonC43.pack(side="left")
ButtonC44.pack(side="left")
ButtonC45.pack(side="left")
ButtonC46.pack(side="left")
ButtonC47.pack(side="left")
ButtonC48.pack(side="left")
ButtonC49.pack(side="left")



# --- C5 Container --- 
# Row Containers
Container_C5_Row1 = Frame(Container_C5_Relative ,background=box_background)
Container_C5_Row2 = Frame(Container_C5_Relative ,background=box_background)
Container_C5_Row3 = Frame(Container_C5_Relative ,background=box_background)
Container_C5_Row1.pack()
Container_C5_Row2.pack()
Container_C5_Row3.pack()

ButtonC51 = Entry(Container_C5_Row1, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC52 = Entry(Container_C5_Row1, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC53 = Entry(Container_C5_Row1, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC54 = Entry(Container_C5_Row2, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC55 = Entry(Container_C5_Row2, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC56 = Entry(Container_C5_Row2, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC57 = Entry(Container_C5_Row3, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC58 = Entry(Container_C5_Row3, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC59 = Entry(Container_C5_Row3, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
switch(C5[1], COL5[1], ButtonC51)
switch(C5[2], COL5[2], ButtonC52)
switch(C5[3], COL5[3], ButtonC53)
switch(C5[4], COL5[4], ButtonC54)
switch(C5[5], COL5[5], ButtonC55)
switch(C5[6], COL5[6], ButtonC56)
switch(C5[7], COL5[7], ButtonC57)
switch(C5[8], COL5[8], ButtonC58)
switch(C5[9], COL5[9], ButtonC59)
ButtonC51.pack(side="left")
ButtonC52.pack(side="left")
ButtonC53.pack(side="left")
ButtonC54.pack(side="left")
ButtonC55.pack(side="left")
ButtonC56.pack(side="left")
ButtonC57.pack(side="left")
ButtonC58.pack(side="left")
ButtonC59.pack(side="left")



# --- C5 Container --- 
# Row Containers
Container_C6_Row1 = Frame(Container_C6_Relative ,background=box_background)
Container_C6_Row2 = Frame(Container_C6_Relative ,background=box_background)
Container_C6_Row3 = Frame(Container_C6_Relative ,background=box_background)
Container_C6_Row1.pack()
Container_C6_Row2.pack()
Container_C6_Row3.pack()

ButtonC61 = Entry(Container_C6_Row1, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC62 = Entry(Container_C6_Row1, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC63 = Entry(Container_C6_Row1, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC64 = Entry(Container_C6_Row2, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC65 = Entry(Container_C6_Row2, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC66 = Entry(Container_C6_Row2, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC67 = Entry(Container_C6_Row3, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC68 = Entry(Container_C6_Row3, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
ButtonC69 = Entry(Container_C6_Row3, fg=font_color, background="#c4c4c4", font=(font_familly, font_size), width=entry_width, border=0, justify="center")
switch(C6[1], COL6[1], ButtonC61)
switch(C6[2], COL6[2], ButtonC62)
switch(C6[3], COL6[3], ButtonC63)
switch(C6[4], COL6[4], ButtonC64)
switch(C6[5], COL6[5], ButtonC65)
switch(C6[6], COL6[6], ButtonC66)
switch(C6[7], COL6[7], ButtonC67)
switch(C6[8], COL6[8], ButtonC68)
switch(C6[9], COL6[9], ButtonC69)
ButtonC61.pack(side="left")
ButtonC62.pack(side="left")
ButtonC63.pack(side="left")
ButtonC64.pack(side="left")
ButtonC65.pack(side="left")
ButtonC66.pack(side="left")
ButtonC67.pack(side="left")
ButtonC68.pack(side="left")
ButtonC69.pack(side="left")

#Shows the bottoms in the bottom








print("Program ended...")
window.mainloop()
