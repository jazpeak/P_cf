t=int(input())
def main():
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    c=list(map(int,input().split()))
    a1=a2=a3=b1=b2=b3=c1=c2=c3=-1
    for i in range(n):
        if a1==-1 or a[a1]<a[i]:
            a3=a2
            a2=a1
            a1=i
        elif a2==-1 or a[a2]<a[i]:
            a3=a2
            a2=i
        elif a3==-1 or a[a3]<a[i]:
            a3=i
        if b1==-1 or b[b1]<b[i]:
            b3=b2
            b2=b1
            b1=i
        elif b2==-1 or b[b2]<b[i]:
            b3=b2
            b2=i
        elif b3==-1 or b[b3]<b[i]:
            b3=i
        if c1==-1 or c[c1]<c[i]:
            c3=c2
            c2=c1
            c1=i
        elif c2==-1 or c[c2]<c[i]:
            c3=c2
            c2=i
        elif c3==-1 or c[c3]<c[i]:
            c3=i
    maxxer=0
    for i in [a1,a2,a3]:
        for j in [b1,b2,b3]:
            for k in [c1,c2,c3]:
                if i!=j and j!=k and k!=i:
                    maxxer=max(maxxer,a[i]+b[j]+c[k])
    return maxxer

for i in range(t):
    print(main())