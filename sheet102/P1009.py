n = int(input())
sum = 0
res = 1
for j in range(1, n + 1):
    res = 1
    for i in range(1, j + 1):
        res = res * i
    sum = sum + res
print(sum)
