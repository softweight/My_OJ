ipt = input()
a = 0
b = 0
for i in range(len(ipt)):
    if i %2 == 0:
        a += int(ipt[i])
    else:
        b += int(ipt[i])

print(abs(a-b))

