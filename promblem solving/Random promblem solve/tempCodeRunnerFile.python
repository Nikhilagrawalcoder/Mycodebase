n=int(input())
ls=[1]
for i in range(n):
        print(*ls)
        ls1=[]
        count=1
        for j in range(1,len(ls)):
            if ls[j]==ls[j-1]:
                count += 1
            else:
                ls1.append(count)
                ls1.append(ls[j-1])
                count=1 
        ls1.append(count)
        ls1.append(ls[-1])
        ls=ls1
    



