def can_bob_reach_gargi(X, planets):
    min_time = float('inf')
    max_time = 0
    
   
    for i in range(len(planets)):
        min_time += min(planets[i])
        max_time += max(planets[i])
    
    return min_time <= X <= max_time

# Input
t = int(input())  

for _ in range(t):
    X = int(input())  
    N, M = map(int, input().split())  
    planets = []
    for _ in range(N):
        planets.append(list(map(int, input().split())))  

    # Check if Bob can reach Gargi before Alice
    if can_bob_reach_gargi(X, planets):
        print("YES")
    else:
        print("NO")
