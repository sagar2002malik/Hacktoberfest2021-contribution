#Sorting array with 0,1,2 without using sorting algo
def sort012(arr):
    ar_s=[]
    n=len(arr)
    while n!=0:
        if 0 in arr:
            ar_s+=[0]
            n=n-1
            arr.remove(0)
        elif 1 in arr:
            ar_s+=[1]
            n=n-1
            arr.remove(1)
        elif 2 in arr:
            ar_s+=[2]
            n=n-1
            arr.remove(2)
    return ar_s

arr=[0,1,0,2,2,1,1,1,2,0]
print(f"The array: {arr}")
result=sort012(arr)
print(f"The sorted aray: {result}")