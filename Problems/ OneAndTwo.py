def solution(s):
    if (s.find("one") < 0 and s.find("two") < 0):
        print(0)
        print()
    else:
        res = []
        i = s.find("one")
        j = s.find("two")
        while (i in range(0,len(s)) or j in range(0,len(s))):
            if (i in (j, j+2) or j in (i, i+2)):
                if (i > j):
                    m = i  
                else: 
                    m = j
                if (m not in res):
                    res.append(m + 1)
            else:
                if (j < 0):
                    m = i
                elif (i < 0):
                    m = j
                else:
                    m = min(i,j)
                if (m not in res):
                    res.append(m + 1)
            i = s.find("one", m + 1, len(s))
            j = s.find("two", m + 1, len(s))
        print(len(res))
        for i in res:
            print(i,end=" ")

if __name__ == '__main__':
    t = int(input())

    for i in range(t):
        s = input()
        solution(s)
