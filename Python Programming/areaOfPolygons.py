print("Enter 1 to find area of circle\nEnter 2 to find area of rectangle\n")
event=True
while(event):
    choice=int(input("Enter your choice\n"))
    if(choice==1):
        radius=float(input("Enter radius of circle\t"))
        print("Area = ", 22*radius*radius/7)
        event=False
    elif(choice==2):
        length,breadth=map(float, input("Enter length and breadth of rectangle\t").split())
        print("Area is ",length*breadth)
        event=False
    else:
        print("Enter a valid choice\t")