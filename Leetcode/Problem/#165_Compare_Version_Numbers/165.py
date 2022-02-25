from itertools import zip_longest

# list1 = [A,B]
# list2 = [1,2,3,4]
# zip_longest(list1, list2, fillvalue=0) return [A1 ,B2 ,03 ,04]

def compareVersion(version1: str, version2: str) -> int:
        v1, v2 = list(map(int, version1.split('.'))), list(map(int, version2.split('.')))

        for i,j in zip_longest(v1, v2, fillvalue=0):
            if i == j:
                continue

            return -1 if i < j else 1

        return 0

compareVersion("1.0.1","1")