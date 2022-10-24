#Count Sort Algorithm in Python
n=int(input("Enter the size of array"))
a=[]
c=[0 for i in range(0,1000001)]
b=[0 for i in range(0,n)]
for i in range(0,n):
    x=int(input())
    a.append(x)
    c[a[i]]=c[a[i]]+1
for i in range(1,1000001):
    c[i]=c[i-1]+c[i]
for i in range(0,n):
    c[a[i]]=c[a[i]]-1
    b[c[a[i]]]=a[i]
for i in b:
    print(i,end=" ")


#Input/Output-
#Enter the size of array 5
#8
#2
#1
#2
#1
#1 1 2 2 8 
