from collections import defaultdict
n,m = map(int, input().split())
alist = [input() for i in range(n)]
blist = [input() for i in range(m)]

mydict = defaultdict(list)

for i in range(n):
    mydict[alist[i]].append(i+1)



#for key, value in mydict.items():
#    print(key, value)
for i in range(m):
    if blist[i] in alist:
        #print(blist[i])
        print(*mydict[blist[i]])
    else:
        print (-1)
