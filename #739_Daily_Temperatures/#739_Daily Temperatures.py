
def dailyTemperatures(T):
    """
    :type T: List[int]
    :rtype: List[int]
    """
    ans = []
    stop = 0
    for i in range(len(T)):
        for j in range(i, len(T)):
            stop = j
            if T[j] > T[i]:
                break
        if stop == len(T):
            ans.append(0)
            # print(i)
            # print(stop)
        elif T[stop] > T[i]:
            ans.append(stop-i)
            # print(i)
            # print(stop)
        else:
            ans.append(0)
        print()
    return ans


T = [73, 74, 75, 71, 69, 72, 76, 73]
print(dailyTemperatures(T))
