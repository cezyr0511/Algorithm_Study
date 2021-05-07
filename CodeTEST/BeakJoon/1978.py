T = int(input())

n = list(map(int, input().split()))

Sum = 0

for i in n:
    decimal = True
    if i == 2 or i == 3:
        Sum += 1
    elif i != 1:
        for j in range (2, i):
            if i % j == 0:
                decimal = False

        if decimal:
            Sum += 1
        
   

print (Sum)                

