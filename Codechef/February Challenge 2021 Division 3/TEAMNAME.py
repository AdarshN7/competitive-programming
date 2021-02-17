def total(l1,l2):
    s=len(set(l1+l2))
    return s
for t in range(int(input())):
    n=int(input())
    s=input().split()
    nf={}
    for i in s:
        p=i[1:]
        if p in nf:
            nf[p].append(i[0])
        else:
            nf[p]=[i[0]]
    f=list(nf.keys())
    count=0
    for i in range (len(nf)):
        for j in range(i+1,len(nf)):
            temp=total(nf[f[i]],nf[f[j]])
            count+=(temp-len(nf[f[i]]))*(temp-len(nf[f[j]]))
    print(2*count)