list2=[]
n=int(input("enter number"))
for i in range(1,n+1):
    x=int(input())
    list2.append(x)
    list2.sort()
print("the median",list2[n//2])
