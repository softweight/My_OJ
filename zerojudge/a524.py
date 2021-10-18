def find(a):
    if len(a)  == 2:
        anss = [a[0]+a[1] , a[1]+a[0]]
        return anss
    elif len(a) > 2:
        ans = []
        for i in range(len(a)):
            copyA = a.copy()
            copyA.remove(a[i])
            next = find(copyA)
            for j in next:
                ans.append(a[i] + j)
        return ans

while True:
    try:
        n = input()
        if n != "\n":
            if int(n) == 1:
                print(n)
                continue
            nums = []
            for i in range(int(n),0,-1):
                nums.append(str(i))

            answer = find(nums)
            print("\n".join(answer))
        
        else:
            break
    except:
        break
