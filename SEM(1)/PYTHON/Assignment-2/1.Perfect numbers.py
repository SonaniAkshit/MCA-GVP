# Find the Perfect numbers.
# (A number is perfect if the sum of its
# proper divisors equals itself.
# E.g: 28 = 1+2+4+7+14)

while(1):
 no=input("Enter term:")
 if(no.isnumeric()):
    break
no=int(no)
c=0
num=1
while(c<no):
    sum1=0
    for i in range(1,num):
        if(num%i==0):
            sum1=sum1+i
    if(num==sum1):
        c=c+1
        print(sum1)
    num=num+1