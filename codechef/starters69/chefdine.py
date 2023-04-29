t = int(input())
for i in range(t):
    n = input().split(' ')
    category = input().split(' ')
    time = input().split(' ')
    #for j in range(int(n[0])):
    #    print(category[j], time[j])
    for j in range(int(n[0])):
        category[j] = int(category[j])
        time[j] = int(time[j])
    l = list()
    for j in range(int(n[0])):
        l.append([category[j], time[j]])
    l.sort()
    distinct = 1
    min_time = list()
    min_time.append(l[0][1])
    for j in range(1,int(n[0])):
        if l[j][0] != l[j-1][0]:
            distinct += 1
            min_time.append(l[j][1])
    if distinct < int(n[1]):
        print(-1)
    else:
        ans = 0
        min_time.sort()
        for k in range(int(n[1])):
            ans += min_time[k]
        print(ans)