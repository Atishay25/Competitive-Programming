t = int(input())
for i in range(t):
    n = int(input())
    s = input()
    done = False
    allsame = True
    for j in range(len(s) - 1):
        if s[j] != s[j+1]:
            allsame = False
            break
    if(allsame == True):
        print(-1)
        continue
    for j in range(n+1):
        #print("range: ",j,j+n)
        p = s[j:j+n]
        temp = s
        q = temp.replace(p,"",1)
        #print(p,q)
        if p != q:
            for k in range(j,j+n):
                print(k+1,end=" ")
            print('\n',end="")
            done = True
            break
    if not done:
        print(-1)
