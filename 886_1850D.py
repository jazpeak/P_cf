def main():
    n,k=map(int,input().split())
    nl=list(map(int,input().split()))
    nl.sort()
    l=[]
    max=0
    for i in range(1,n):
        if nl[i]-nl[i-1]>k:
            l.append(i+1)
    if len(l)==0:
        return 0
    for i in range(1,len(l)):
        if l[i]-l[i-1]>max:
            max=l[i]-l[i-1]
    if l[0]>max:
        max=l[0]-1
    if n-l[-1]+1>max:
        max=n-l[-1]+1   
    return n-max
t=int(input())
for i in range(t):
    print(main())