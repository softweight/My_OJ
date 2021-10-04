#start
#input
s = input().split()

m = int(s[0])    #3
n = int(s[1])    #2
max_num = []
#input & process
for i in range(m):
    nums = input().split()
    
    for j in range(n):    #['1','5'] -> [1,5]
        nums[j] = int(nums[j])    

    m = max(nums)    #m = 5
    max_num.append(m)

#output1
opt1 = sum(max_num)
print(opt1)

#output2
flag = False    #False表示還沒print過
for i in max_num:
    if opt1 % i == 0:
        if i == max_num[-1]:
            print(i)
        else:
            print(i,end=" ")
        flag = True

if flag == False:
    print("-1")


