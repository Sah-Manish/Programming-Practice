from tkinter import *
# Need a function to generate empty slots
root =Tk()
Heading = Label(root, text="Meeting Schedular").pack()
#m1 = Label(root, text="My name is Manish").grid(row = 0,column=0)
#m2 = Label(root, text="I Love Anime").grid(row = 1,column=1)
e1=Entry(root,borderwidth=5)
e1.pack()
#e1.insert(0,"Enter Your Name")
def clickme():
    hello="hi there, "+e1.get()
    m1=Label(root,text=hello).pack()
generateEmptySlot=Button(root,text="Generate Empty Slot", padx=50,pady=10,command=clickme).pack()#grid(row=1,column=0)

root.mainloop()
