import random
d=2
n=26
for i in range(n):
    for j in range(n):
        for k in range(n):
            r=[random.random()/d,random.random()/d,random.random()/d]
            print(i+r[0],j+r[1],k+r[2])
