xc=int(input("Enter Xc: "))
yc=int(input("Enter Yc: "))
r=int(input("Enter r: "))

x=0
y=r
p=1-r

ct=0
print('k\tp\tx\ty\tx+xc\ty+yx')
print('%d\t-\t%d\t%d\t%d\t%d'%(ct,x,y,x+xc,y+yc))

prev_p=p
while x<=y:
    if p<0:
        x+=1
        p=p+2*x+1
    else:
        x+=1
        y-=1
        p=p+2*x+1-2*y
    
    ct+=1
    print('%d\t%d\t%d\t%d\t%d\t%d'%(ct,prev_p,x,y,x+xc,y+yc))
    prev_p=p
