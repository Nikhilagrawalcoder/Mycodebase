'''Given a set of points (x, y) on a 2D cartesian plane, find the two closest points. For example, given 
the points [(1, 1), (-1, -1), (3, 4), (6, 1), (-1, -6), (-4, -3)], return [(-1, -1), (1, 1)]'''
import math
l=eval(input())
j=len(l)
l1=[l[0],l[1]]
k=(l[0][0]-l[1][0])**2+(l[0][1]-l[1][1])**2
distance=(math.sqrt(k))
ls=[l[0],l[1]]
for i in range(j):
    for n in range(i+1,j):
        dc=(l[i][0]-l[n][0])**2+(l[i][1]-l[n][1])**2
        dc1=(math.sqrt(dc))
        if(distance>dc1):
            distance=dc1
            ls.pop()
            ls.pop()
            ls.append(l[i])
            ls.append(l[n])
print(ls)           