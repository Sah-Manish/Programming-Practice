from tkinter import *
from tkinter.font import Font
root=Tk()
root.geometry('1400x775')
root.title("Meeting Schedular -By Manish and Yuvraj")
def ScheduleOfA():
    global subHeadingFont,root
    with open("ScheduleOfA.txt","r") as f1: 
        a=f1.readline()
        x=a.split(",")
        yaxisforA=200
        for i in x:
            tempLabel=Label(root,text=i,font=subHeadingFont).place(x=175,y=yaxisforA+50)
            yaxisforA+=50
        #f2.write(str(int(x[0])+1))
def ScheduleOfB():
    global subHeadingFont,root
    with open("ScheduleOfB.txt","r") as f1:  
        a=f1.readline()
        x=a.split(",")
        yaxisforB=200
        for i in x:
            tempLabel=Label(root,text=i,font=subHeadingFont).place(x=475,y=yaxisforB+50)
            yaxisforB+=50
def ValidSlots():
    global subHeadingFont,root
    with open("AvailableSLotsForA.txt","r") as f1:  
        a=f1.readline()
        x=a.split(",")
        titleA=Label(root,text="Valid Empty Slots of A",font=subHeadingFont).place(x=775,y=250)
        yaxisforB=250
        for i in x:
            tempLabel=Label(root,text=i,font=subHeadingFont).place(x=775,y=yaxisforB+50)
            yaxisforB+=50
    with open("AvailableSLotsForB.txt","r") as f1:  
        a=f1.readline()
        x=a.split(",")
        titleA=Label(root,text="Valid Empty Slots of B",font=subHeadingFont).place(x=1075,y=250)
        yaxisforB=250
        for i in x:
            tempLabel=Label(root,text=i,font=subHeadingFont).place(x=1075,y=yaxisforB+50)
            yaxisforB+=50
def generateSlots():
    global subHeadingFont,root
    with open("MeetingTime.txt","r") as f1:  
        a=f1.readline()
        x=a.split(",")
        xaxis=450
        for i in x:
            tempLabel=Label(root,text=i,font=subHeadingFont).place(x=xaxis+50,y=650)
            xaxis+=150
headingFont=Font(family="Times New Roman",size=42)
label=Label(root,text="Meeting Schedular",font=headingFont).pack()
subHeadingFont=Font(family="Times New Roman",size=20)
label=Label(root,text="-Made by Manish Kumar(20SCSE1010830) and Yuvraj Singh(20SCSE1010824)",font=subHeadingFont).pack()
buttonFont=Font(family="Times New Roman",size=12)
# Main Buttons
buttonA=Button(root, text='Show Schedule of A',width=40,height=5,font=buttonFont,command=ScheduleOfA).place(x=75,y=120)
buttonB=Button(root, text='Show Schedule of B',width=40,height=5,font=buttonFont,command=ScheduleOfB).place(x=375,y=120)
buttonToShowFreeValidSlots=Button(root,text="Show Valid Available Slots....",width=60,height=5,font=buttonFont,command=ValidSlots).place(x=775,y=120)
generateSchedule=Button(root,text="Generate Available Slots....",width=50,height=5,font=buttonFont,command=generateSlots).place(x=25,y=650)
root.mainloop()