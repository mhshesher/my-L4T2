x1=int(input("Enter X1: "))
y1=int(input("Enter Y1: "))

x2=int(input("Enter X2: "))
y2=int(input("Enter Y2: "))

del_x=x2-x1
del_y=y2-y1
m=del_y/del_x

ct=0
print('k\tx\ty\t(x,y)')
print('%d\t%d\t%d\t(%d,%d)'%(ct,x1,y1,x1,y1))

if x1<x2 and y1<y2:
    if m<=1:
        for i in range(del_x):
            x1+=1
            y1+=m
            ct+=1

            print('%d\t%d\t%.2f\t(%d,%d)'%(ct,x1,y1,x1,int(round(y1))))
    else:
        for i in range(del_y):
            y1+=1
            x1+=(1/m)
            ct+=1

            print('%d\t%.2f\t%d\t(%d,%d)'%(ct,x1,y1,int(round(x1)),y1))
else:
    # print(m)
    if m<=1:
        for i in range(abs(del_x)):
            x1-=1
            y1-=m
            ct+=1

            print('%d\t%d\t%.2f\t(%d,%d)'%(ct,x1,y1,x1,int(round(y1))))
    else:
        for i in range(abs(del_y)):
            y1-=1
            x1-=(1/m)
            ct+=1

            print('%d\t%.2f\t%d\t(%d,%d)'%(ct,x1,y1,int(round(x1)),y1))
