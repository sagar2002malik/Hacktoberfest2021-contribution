n=int(input("Enter a number: "))
count=0

for i in range(1,n+1):
    if(n%i==0):
        count=count+1

if(count==2):
    print(n," is a prime number")
else:
    print(n," is not a prime number")