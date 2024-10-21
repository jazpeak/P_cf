t=int(input())
def main():
    n,k,x=map(int,input().split())
    if x>((n*(n+1))/2)-(((n-k)*((n-k)+1))/2) or x<((k*(k+1))/2):
        return 'No'
    return 'Yes'
for i in range(t):
    print(main())