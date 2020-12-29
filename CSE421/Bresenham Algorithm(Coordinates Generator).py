x1=int(input("Enter X1: "))
y1=int(input("Enter Y1: "))

x2=int(input("Enter X2: "))
y2=int(input("Enter Y2: "))

del_x=x2-x1
del_y=y2-y1
p=2*del_y-del_x

ct=0
print('k\tp\tx\ty')
print(ct,'-',x1,y1,sep='\t')
prev_p=p
while True:
	if p<0:
		x1+=1
		p+=(2*del_y)
	else:
		x1+=1
		y1+=1
		p+=(2*del_y-2*del_x)
	
	ct+=1
	print(ct,prev_p,x1,y1,sep='\t')
	
	prev_p = p

	if x1>=x2 and y1>=y2:
		break
