from tkinter import *
from PIL import ImageTk,Image
root =Tk()
#root.iconbitmap("D:\Open CV\icon.ico")
# path of good image "D:\Open CV\hatsune-miku.jpg"
my_img = ImageTk.PhotoImage(Image.open("D:\Open CV\HatsuneMiku.PNG"))
mylabel=Label(image=my_img).pack()
exitButton=Button(root,text="Exit",padx=50,pady=10,command=root.quit).pack()
root.mainloop()