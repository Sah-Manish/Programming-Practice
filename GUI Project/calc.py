# Completed Project Simple Calculator
from tkinter import *
root=Tk()
result=0
operation=""
def Add():
    global result,operation
    operation="+"
    first_number = float(e.get())
    e.delete(0, END)
    result=first_number
    return
def Subtract():
    global result,operation
    operation="-"
    first_number = float(e.get())
    e.delete(0, END)
    result=first_number
    return
def Multiply():
    global result,operation
    operation="*"
    first_number = float(e.get())
    e.delete(0, END)
    result=first_number
    return
def Divide():
    global result,operation
    operation="/"
    first_number = float(e.get())
    e.delete(0, END)
    result=first_number
    return
def entryBox(num):
    current=str(e.get())
    e.delete(0, END)
    e.insert(0,current+ str(num))
    return
def clearscreen():
    global result
    e.delete(0, END)
    result=0
    return
def res():
    global result,operation
    second_num=float(e.get())
    e.delete(0, END)
    if operation == "+":
        e.insert(0, result + second_num)
    if operation == "-":
        e.insert(0, result - second_num)
    if operation == "*":
        e.insert(0, result * second_num)
    if operation == "/":
        e.insert(0, result / second_num)
    return
root.title("Simple Calculator")
#Screen for inputed numbers
e=Entry(root,width=45,borderwidth=5)
e.grid(row=0,column=0,columnspan=3)
#Buttons for numbers
b9=Button(root,text="9",padx=45,pady=10,command=lambda:entryBox(9)).grid(row=1,column=2)
b8=Button(root,text="8",padx=45,pady=10,command=lambda:entryBox(8)).grid(row=1,column=1)
b7=Button(root,text="7",padx=45,pady=10,command=lambda:entryBox(7)).grid(row=1,column=0)
b6=Button(root,text="6",padx=45,pady=10,command=lambda:entryBox(6)).grid(row=2,column=2)
b5=Button(root,text="5",padx=45,pady=10,command=lambda:entryBox(5)).grid(row=2,column=1)
b4=Button(root,text="4",padx=45,pady=10,command=lambda:entryBox(4)).grid(row=2,column=0)
b3=Button(root,text="3",padx=45,pady=10,command=lambda:entryBox(3)).grid(row=3,column=2)
b2=Button(root,text="2",padx=45,pady=10,command=lambda:entryBox(2)).grid(row=3,column=1)
b1=Button(root,text="1",padx=45,pady=10,command=lambda:entryBox(1)).grid(row=3,column=0)
b0=Button(root,text="0",padx=45,pady=10,command=lambda:entryBox(0)).grid(row=4,column=0)
# operations
buttonMultiply=Button(root,text="*",padx=47,pady=10,command=Multiply).grid(row=6,column=0)
buttonDivide=Button(root,text="/",padx=45,pady=10,command=Divide).grid(row=6,column=1)
buttonSubtract=Button(root,text="-",padx=45,pady=10,command=Subtract).grid(row=6,column=2)
buttonAdd=Button(root,text="+",padx=45,pady=10,command=Add).grid(row=5,column=0)
#Supplimentary buttons
buttoClear=Button(root,text="Clear",padx=86,pady=10,command=clearscreen).grid(row=4,column=1,columnspan=2)
buttonEqual=Button(root,text="  =  ",padx=90,pady=10,command=res).grid(row=5,column=1,columnspan=2)
root.mainloop()