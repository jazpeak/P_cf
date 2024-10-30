t=int(input())
def main():
    a,b,n=map(int,input().split())
    x=list(map(int,input().split()))
    y=0
    if a==1:
        return 1
    for i in x:
        if i>=a:
            y+=a-1
        else:
            y+=i
    return y+b
for i in range(t):
    print(main())