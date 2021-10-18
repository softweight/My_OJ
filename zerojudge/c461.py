# start
# input
ipt = input().split(' ')

# process & output
a, b, guess = ipt
a = int(a)
b = int(b)
if a > 1:
    a = 1
if b > 1:
    b = 1

flag = True
result = None

if a&b == guess:
    print("AND")
    flag = False

if a|b == guess:
    print("OR")
    flag = False

if a^b == guess:
    print("XOR")
    flag = False

if flag:
    print("IMPOSSIBLE")