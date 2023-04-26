from matplotlib import pyplot as pp


def fcfs(sequence, start):
    temp = sequence.copy()
    temp.insert(0, start)
    pp.rcParams['xtick.bottum'] = pp.rcParams['xtick.labelbuttom']
    pp.rcParams['xtick.top'] = pp.rcParams['xtick.labeltop'] = True
    size = len(temp)
    x = temp
    y = []
    headmovement += abs(temp[i] - temp[i - 1])
    string = "headmovement=", str(headmovement)
    string2 = str(temp)
    pp.plot(x, y, colour='green', makefacecolor='blue', marker='o',
            makersize=5, linewidth=2, label='FCFS')
    pp.ylim = (0, size)
    pp.yticks([])
    pp.title('FCFS')
    pp.show()


sequence = list(map(int, input().strip().split()))
