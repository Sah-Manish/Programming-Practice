import cv2
import numpy as np
trained_face_data = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')
#img=cv2.imread('manish.jpeg')
#grey_scale_img=cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
webCam= cv2.VideoCapture(0)
while True:
    successful_frame_read, frame=webCam.read()
    face_coordinates = trained_face_data.detectMultiScale(frame)

    print(face_coordinates)
#(x, y, w, h) = face_coordinates[0]
#cv2.rectangle(img,(x,y),(x+w,y+h),(0,255,0),2)
#cv2.rectangle(img,(178, 94), (178+105, 94+105),(255, 0, 0), 2)


    for (x,y,w,h) in face_coordinates:
        cv2.rectangle(frame,(x,y),(x+w,y+h),(0,0,255),2)

    cv2.imshow('mansh',frame)
    cv2.waitKey(1)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break


print("Code Completed Without Error .........")