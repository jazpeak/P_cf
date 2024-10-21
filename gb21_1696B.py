t=int(input())
def main():
    l=int(input())
    n=list(map(int,input().split()))
    c=0
    for i in range(1,l-1):
        if n[i]==0 and n[i-1]!=0:
            c+=1
    if c>=1:
        return 2
    if c==0:
        if n[0]==0 and n[l-1]==0:
            return 0
        return 1
for i in range(t):
    print(main())
    
    
    
