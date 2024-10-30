def main(n,d):
    x=d[0]
    y=d[1]
    c=len(n)-1
    step=0
    while c>0 and n[c]!=y:
        step+=1
        c-=1
    c-=1
    while c>0 and n[c]!=x:
        step+=1
        c-=1
    return step
t=int(input())
l=['00','25','50','75']
for i in range(t):
    s=input()
    steps=1e9
    for i in l:
        f=main(s,i)
        steps=min(steps,f)
    print(steps)