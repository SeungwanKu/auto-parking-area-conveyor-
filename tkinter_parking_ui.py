from tkinter import *
import serial
import threading
import time
win=Tk()
win.geometry("900x900")

ser=serial.Serial('/dev/ttyUSB0', 9600, timeout=1)    

n1='n'
n2='n'
n3='n'
n4='n'
n5='n'
n6='n'
n7='n'
n8='n'
n9='n'
n10='n'
n11='n'
mm=""

q1=''
q2=''
q3=''
q4=''
q5=''
q6=''
q7=''
q8=''
q9=''
q10=''
q11=''
def Ardread():
            # return list [Ard1,Ard2]
    global n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11
    
    while True: 
          
           
        if ser.readable():
                 
                 LINE = ser.readline()
                 code=LINE.decode()
                 if len(code)>3:
                     p=len(code)
                     z=code.find('i')
                     w=code.find('o')
                     if z!=-1:
                         Ard1=code[0:z]
                         Ard2=code[z+1:p]
                     elif w!=-1:
                         Ard1=code[0:w]
                         Ard2='n'
                         
                     print(Ard1)
                     print(',')
                     print(Ard2)
                     if Ard1=='1':
                         n1=Ard2
                         func1()
                     elif Ard1=='2':
                         n2=Ard2
                         func2()
                     elif Ard1=='3':
                         n3=Ard2
                         func3()
                     elif Ard1=='4':
                         n4=Ard2
                         func4()
                     elif Ard1=='5':
                         n5=Ard2
                         func5()
                     elif Ard1=='6':
                         n6=Ard2
                         func6()
                     elif Ard1=='7':
                         n7=Ard2
                         func7()
                     elif Ard1=='8':
                         n8=Ard2
                         func8()
                     elif Ard1=='9':
                         n9=Ard2
                         func9()
                     elif Ard1=='10':
                         n10=Ard2
                         func10()
                     elif Ard1=='11':
                         n11=Ard2
                         func11()
                
        else :
                 print("읽기 실패 from _Ardread_")

def outl1():
     button10.config(background='BLUE')  
def outl2():
     button10.config(background='GREEN')
     button9.config(background='BLUE')
def outl3():
     button9.config(background='GREEN')
     button8.config(background='BLUE')
def outl4():
     button8.config(background='GREEN')
     button7.config(background='BLUE')
def outl5():
     button5.config(background='BLUE')
def outl6():
     button5.config(background='GREEN')
     button4.config(background='BLUE')
def outl7():
     button4.config(background='GREEN')
     button3.config(background='BLUE')
def outl8():
     button3.config(background='GREEN')
     button2.config(background='BLUE')
def outl9():
     button2.config(background='GREEN')
     button1.config(background='BLUE')     
def outl10():
     button1.config(background='GREEN')
     button.config(background='BLUE')
def outl11():
     button7.config(background='GREEN')
     button.config(background='GREEN')
     button6.config(background='BLUE')
def outl12():
     button6.config(background='GREEN')




def func1():
     global q1
     global n1
     if n1!='n':
         button20.config(background='RED')                  
         button20['text']='차번호 :\n'+n1+'\n 클릭시 출차'
         str='ii1'
         ser.write(bytes(str.encode()))         
         n1='n'
         q1='1'
         
     elif q1=='1':
         str='oo1'
         ser.write(bytes(str.encode()))   
         button20.config(background='GREEN')
         button20['text']='1'
         win.after(1000,outl8)
         win.after(2000,outl9)
         win.after(3000,outl10)
         win.after(4000,outl11)
         win.after(5000,outl12)
         q1=''
def func2():
     global q2
     global n2
     if n2!='n':
         button21.config(background='RED')
         button21['text']='차번호 :\n'+n2+'\n 클릭시 출차'
         str='ii2'
         ser.write(bytes(str.encode()))
         n2='n'
         q2='1'
     elif q2=='1':
         str='oo2'
         ser.write(bytes(str.encode()))   
         button21.config(background='GREEN')
         button21['text']='2'
         win.after(1000,outl8)
         win.after(2000,outl9)
         win.after(3000,outl10)
         win.after(4000,outl11)
         win.after(5000,outl12)
         q2=''
def func3():
     global q3
     global n3
     if n3!='n':
         button22.config(background='RED')
         button22['text']='차번호 :\n'+n3+'\n 클릭시 출차'
         str='ii3'
         ser.write(bytes(str.encode()))
         n3='n'
         q3='1'
     elif q3=='1':
         str='oo3'
         ser.write(bytes(str.encode()))   
         button22.config(background='GREEN')
         button22['text']='3'
         win.after(1000,outl4)
         win.after(2000,outl11)
         win.after(3000,outl12)
         q3=''
def func4():
     global q4
     global n4
     if n4!='n':
         button17.config(background='RED')
         button17['text']='차번호 :\n'+n4+'\n 클릭시 출차'
         str='ii4'
         ser.write(bytes(str.encode()))
         n4='n'
         q4='1'
     elif q4=='1':
         str='oo4'
         ser.write(bytes(str.encode()))   
         button17.config(background='GREEN')
         button17['text']='4'
         win.after(1000,outl7)
         win.after(2000,outl8)
         win.after(3000,outl9)
         win.after(4000,outl10)
         win.after(5000,outl11)
         win.after(6000,outl12)
         q4=''
def func5():
     global q5
     global n5
     if n5!='n':
         button18.config(background='RED')
         button18['text']='차번호 :\n'+n5+'\n 클릭시 출차'
         str='ii5'
         ser.write(bytes(str.encode()))
         n5='n'
         q5='1'
     elif q5=='1':
         str='oo5'
         ser.write(bytes(str.encode()))   
         button18.config(background='GREEN')
         button18['text']='5'
         win.after(1000,outl7)
         win.after(2000,outl8)
         win.after(3000,outl9)
         win.after(4000,outl10)
         win.after(5000,outl11)
         win.after(6000,outl12)
         q5=''
def func6():
     global q6
     global n6
     if n6!='n':
         button19.config(background='RED')
         button19['text']='차번호 :\n'+n6+'\n 클릭시 출차'
         str='ii6'
         ser.write(bytes(str.encode()))
         n6='n'
         q6='1'
     elif q6=='1':
         str='oo6'
         ser.write(bytes(str.encode()))   
         button19.config(background='GREEN')
         button19['text']='6'
         win.after(1000,outl3)
         win.after(2000,outl4)
         win.after(3000,outl11)
         win.after(4000,outl12)
         q6=''
def func7():
     global q7
     global n7
     if n7!='n':
         button14.config(background='RED')
         button14['text']='차번호 :\n'+n7+'\n 클릭시 출차'
         str='ii7'
         ser.write(bytes(str.encode()))
         n7='n'
         q7='1'
     elif q7=='1':
         str='oo7'
         ser.write(bytes(str.encode()))   
         button14.config(background='GREEN')
         button14['text']='7'
         
         win.after(1000,outl6)
         win.after(2000,outl7)
         win.after(3000,outl8)
         win.after(4000,outl9)
         win.after(5000,outl10)
         win.after(6000,outl11)
         win.after(7000,outl12)
         q7=''
def func8():
     global q8
     global n8
     if n8!='n':
         button15.config(background='RED')
         button15['text']='차번호 :\n'+n8+'\n 클릭시 출차'
         str='ii8'
         ser.write(bytes(str.encode()))
         n8='n'
         q8='1'
     elif q8=='1':
         str='oo8'
         ser.write(bytes(str.encode()))   
         button15.config(background='GREEN')
         button15['text']='8'
         win.after(1000,outl6)
         win.after(2000,outl7)
         win.after(3000,outl8)
         win.after(4000,outl9)
         win.after(5000,outl10)
         win.after(6000,outl11)
         win.after(7000,outl12)
         q8=''
def func9():
     global q9
     global n9
     if n9!='n':
         button16.config(background='RED')
         button16['text']='차번호 :\n'+n9+'\n 클릭시 출차'
         str='ii9'
         ser.write(bytes(str.encode()))
         n9='n'
         q9='1'
     elif q9=='1':
         str='oo9'
         ser.write(bytes(str.encode()))   
         button16.config(background='GREEN')
         button16['text']='9'
         win.after(1000,outl2)
         win.after(2000,outl3)
         win.after(3000,outl4)
         win.after(4000,outl11)
         win.after(5000,outl12)
         q9=''
def func10():
     global q10
     global n10
     if n10!='n':
         button12.config(background='RED')
         button12['text']='차번호 :\n'+n10+'\n 클릭시 출차'
         str='ii10'
         ser.write(bytes(str.encode()))
         n10='n'
         q10='1'
     elif q10=='1':
         str='oo10'
         ser.write(bytes(str.encode()))   
         button12.config(background='GREEN')
         button12['text']='10'
         win.after(1000,outl5)
         win.after(2000,outl6)
         win.after(3000,outl7)
         win.after(4000,outl8)
         win.after(5000,outl9)
         win.after(6000,outl10)
         win.after(7000,outl11)
         win.after(8000,outl12)
         q10=''
def func11():
     global q11
     global n11
     if n11!='n':
         button13.config(background='RED')
         button13['text']='차번호 :\n'+n11+'\n 클릭시 출차'
         str='ii11'
         ser.write(bytes(str.encode()))
         n11='n'
         q11='1'
     elif q11=='1':
         str='oo11'
         ser.write(bytes(str.encode()))   
         button13.config(background='GREEN')
         button13['text']='11'
         win.after(1000,outl1)
         win.after(2000,outl2)
         win.after(3000,outl3)
         win.after(4000,outl4)
         win.after(5000,outl11)
         win.after(6000,outl12)
         q11=''
         
label=Label(win, text='주차장',width=20, height=5)
label.pack()
label2=Label(win, text='tlfldjfzhem',width=50,height=30)
label2.pack()



button=Button(win, text='출차라인', width=10, height=20, background='GREEN')
button.place(relx=0.1, rely=0.3)
#
button1=Button(win, text='9번 캐리어',   width=10, height=5, background='GREEN')
button1.place(relx=0.1, rely=0.2)
button2=Button(win, text='8번 캐리어', width=10, height=5, background='GREEN')
button2.place(relx=0.2, rely=0.2)
button3=Button(win, text='7번 캐리어',   width=10, height=5, background='GREEN')
button3.place(relx=0.3, rely=0.2)
button4=Button(win, text='6번 캐리어',   width=10, height=5, background='GREEN')
button4.place(relx=0.4, rely=0.2)
button5=Button(win, text='5번 캐리어',  width=10, height=5, background='GREEN')
button5.place(relx=0.5, rely=0.2)

#

button20=Button(win, text='1', command=func1,  width=10, height=5, background='GREEN')
button20.place(relx=0.2, rely=0.3)
    

button21=Button(win, text='2', command=func2,  width=10, height=5, background='GREEN')
button21.place(relx=0.2, rely=0.4)
    

button22=Button(win, text='3', command=func3,  width=10, height=5, background='GREEN')
button22.place(relx=0.2, rely=0.5)
    
#

button17=Button(win, text='4', command=func4,  width=10, height=5, background='GREEN')
button17.place(relx=0.3, rely=0.3)
    

button18=Button(win, text='5', command=func5,  width=10, height=5, background='GREEN')
button18.place(relx=0.3, rely=0.4)


button19=Button(win, text='6', command=func6,  width=10, height=5, background='GREEN')
button19.place(relx=0.3, rely=0.5)
    #
    

button14=Button(win, text='7', command=func7,  width=10, height=5, background='GREEN')
button14.place(relx=0.4, rely=0.3)
    

button15=Button(win, text='8', command=func8,  width=10, height=5, background='GREEN')
button15.place(relx=0.4, rely=0.4)


button16=Button(win, text='9', command=func9,  width=10, height=5, background='GREEN')
button16.place(relx=0.4, rely=0.5)
    #
button11=Button(win, text='GREEN',  width=10, height=5, background='GREEN')
button11.place(relx=0.5, rely=0.3)    
    
    

button12=Button(win, text='10', command=func10,  width=10, height=5, background='GREEN')
button12.place(relx=0.5, rely=0.4)
    

button13=Button(win, text='11', command=func11,  width=10, height=5, background='GREEN')
button13.place(relx=0.5, rely=0.5)




button6=Button(win, text='출구',  width=10, height=5, background='GREEN')
button6.place(relx=0.1, rely=0.6)
button7=Button(win, text='4번 캐리어',   width=10, height=5, background='GREEN')
button7.place(relx=0.2, rely=0.6)
button8=Button(win, text='3번 캐리어', width=10, height=5, background='GREEN')
button8.place(relx=0.3, rely=0.6)
button9=Button(win, text='2번 캐리어',   width=10, height=5, background='GREEN')
button9.place(relx=0.4, rely=0.6)
button10=Button(win, text='1번 캐리어',   width=10, height=5, background='GREEN')
button10.place(relx=0.5, rely=0.6)


button110=Button(win, text='빈공간 ',   width=10, height=5, background='GREEN')
button110.place(relx=0.7, rely=0.3)
button130=Button(win, text='사용중',   width=10, height=5, background='RED')
button130.place(relx=0.7, rely=0.4)
button140=Button(win, text='이동경로',   width=10, height=5, background='BLUE')
button140.place(relx=0.7, rely=0.5)


#win.mainloop()
t = threading.Thread(target=Ardread )
t.daemon=True
t.start()
win.mainloop()
       


  
        
