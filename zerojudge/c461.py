#start
#input
ipt = input().split(" ")
#process&output
for i in range(3):
    ipt[i] = int(ipt[i])
    if(ipt[i] > 1):
        ipt[i] = 1

flag = True
if ipt[0] & ipt[1] == ipt[2]:
    print('AND')
    flag = False

if ipt[0] | ipt[1] == ipt[2]:
    print('OR')
    flag = False

if ipt[0] ^ ipt[1] == ipt[2]:
    print('XOR')
    flag = False

if flag:
    print("IMPOSSIBLE")

