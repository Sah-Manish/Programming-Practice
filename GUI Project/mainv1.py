from tkinter import *
from tkinter import font
from tkinter.font import Font
from tkinter import messagebox
root=Tk()
root.geometry('1920x800')
root.title("Meeting Schedular -By Manish and Yuvraj")
# Declaring Variables
headingFont=Font(family="Times New Roman",size=42)
subHeadingFont=Font(family="Times New Roman",size=20)
buttonFont=Font(family="Times New Roman",size=12)
meetingLength=0
# Shows Schedule of A
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
# Shows Schedule of B
def ScheduleOfB():
    global subHeadingFont,root
    with open("ScheduleOfB.txt","r") as f1:  
        a=f1.readline()
        x=a.split(",")
        yaxisforB=200
        for i in x:
            tempLabel=Label(root,text=i,font=subHeadingFont).place(x=475,y=yaxisforB+50)
            yaxisforB+=50
# View Valid slots from both parties schedules
def ValidSlots():
    global subHeadingFont,root,meetingLength
    if(int(meetingLength)!=0 and int(meetingLength)<2400):
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
    else:
        messagebox.askretrycancel("Meeting Length Error","Please Enter Meeting Length")
# Meeting length Getting from user
def getMeetingLength(x):
    global meetingLength
    meetingLength=x
    if(int(meetingLength)!=0 and int(meetingLength)<2400):
        print("Fate Averruncus")
        return
    else:
        messagebox.showwarning("Meeting Length Error","Meeting Length cannot be zero")
 
# Generate slots for Meeting possible....... V. Imp
def generateSlots():
    # Dimension of Screen 1920x1080
    global subHeadingFont,root,meetingLength
    if(int(meetingLength)!=0 and int(meetingLength)<2400):
        with open("MeetingTime.txt","r") as f1:  
            a=f1.readline()
            x=a.split(",")
            xaxisline1=450+425
            xaxisline2=450+425
            for i in x:
                if(xaxisline1<1400):
                    tempLabel=Label(root,text=i,font=subHeadingFont).place(x=xaxisline1+50,y=650)
                    xaxisline1+=150
                else:
                    tempLabel=Label(root,text=i,font=subHeadingFont).place(x=xaxisline2+50,y=750)
                    xaxisline2+=150
    else:
        messagebox.askretrycancel("Meeting Length Error","Please Enter Meeting Length")
        return
# Main Screen View Coding
label=Label(root,text="Meeting Schedular",font=headingFont).pack()
label=Label(root,text="-Made by Manish Kumar(20SCSE1010830) and Yuvraj Singh(20SCSE1010824)",font=subHeadingFont).pack()
# Main Buttons
buttonA=Button(root, text='Show Schedule of A',width=40,height=5,font=buttonFont,command=ScheduleOfA).place(x=75,y=120)
buttonB=Button(root, text='Show Schedule of B',width=40,height=5,font=buttonFont,command=ScheduleOfB).place(x=375,y=120)
buttonToShowFreeValidSlots=Button(root,text="Show Valid Available Slots....",width=60,height=5,font=buttonFont,command=ValidSlots).place(x=775,y=120)
# Meeting length Entry
meetingLengthLabel=Label(root,text="Enter Meeting Duration (in 2400 Hrs.)",font=subHeadingFont).place(x=25,y=600)
meetingLengthEntry=Entry(root,border=5,width=50).place(x=60,y=650)
acceptButton=Button(root,text="Submit",font=buttonFont,width=30,height=5,command=lambda:getMeetingLength(int(meetingLengthEntry.get()))).place(x=25,y=700)
# generate meeting available Slots
generateSchedule=Button(root,text="Generate Available Slots....",width=50,height=5,font=buttonFont,command=generateSlots).place(x=450,y=650)
root.mainloop()