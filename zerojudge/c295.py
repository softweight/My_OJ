#start
n,m = input().split()
n = int(n)
m = int(m)

#process
round_max  = []
while n>0:
    n-=1
    max = 0
    nums = input().split()
    for num in nums:
        num  = int(num)
        if num > max : 
            max = num
    round_max.append(max)
sum = 0
for i in round_max :
    sum += i

print(sum)
flag = False
for i in round_max[:-1] :
    if sum % i ==0:
        print(i,end=" ")
        flag = True
if sum % round_max[-1] ==0:
    print(round_max[-1])
    flag = True

if flag == False:
    print("-1")

        





