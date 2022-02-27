from tkinter import *
root =Tk()
root.iconbitmap("D:\Open CV\icon.PNG")
def clickme():
    label=Label(root, text="I am God").pack()
button = Button(root,text="Click me!",padx=50,pady=10,command=clickme,fg="Black",bg="Grey").pack()
buttonExit = Button(root,text="Exit",padx=50,pady=10,command=lambda:root.quit(),fg="Black",bg="Grey").pack()
buttonExitAlso = Button(root,text="Exit Button Also",padx=50,pady=10,command=root.quit,fg="Black",bg="Grey").pack()
root.mainloop()