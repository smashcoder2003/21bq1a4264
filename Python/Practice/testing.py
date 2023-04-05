def printer(m,l):
    fl = []
    fl.append(" "*m)
    for i in range(len(l)):
        fl.append(l[i])
    print(*fl, sep=" ")
def temp(m,l):
    for i in range(len(l)):
        temp= []
        temp = l[i]
        printer(m,temp)
        m -= 1


if __name__ == "__main__":
    n = int(input())
    m = n-1
    j = 0
    l = []
    if n == 0:
        print("enter a non zero positive number....")
    else:
        if n<6:
            for i in range(n):
                tempo = list(str(11**j))
                l.append(tempo)
                j += 1

        else:
            for i in range(5):
                tempo = list(str(11**j))
                l.append(tempo)
                j += 1
            for q in range(5,n):
                tempo = []
                tempo.append("1")
                l.append(tempo)
                print(l[q])
                for i in range(1,len(l[q-1])):
                    l[q].append(str((int(l[q-1][i])+int(l[q-1][i-1]))))
                l[q].append("1")
print(l)
temp(m,l)