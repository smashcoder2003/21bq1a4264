import matplotlib.pyplot as plt


def scatter_plot(states, years, populations):
    for i in range(len(states)):
        plt.scatter(years, populations[i])

    plt.xlabel('Years')
    plt.ylabel('Elephant Population')
    plt.title('Elephant Population in Different States')
    plt.legend(states)
    plt.show()


# Dataset
states = ['Arunachal Pradesh', 'Assam', 'Nagaland', 'West Bengal (North)', 'Jharkhand', 'Odisha', 'Uttar Pradesh',
          'Tamil Nadu', 'Karnataka', 'Kerala', 'Andhra Pradesh']


years = [1993, 1997, 2002, 2007, 2012, 2017]
populations = [
    [2102, 1800, 1607, 1690, 890, 1614],
    [5524, 5312, 5246, 5281, 5620, 5719],
    [178, 158, 145, 152, 212, 446],
    [186, 250, 292, 325, 647, 488],
    [550, 618, 772, 624, 688, 679],
    [1750, 1800, 1841, 1862, 1930, 1976],
    [47, 70, 85, 380, 291, 232],
    [2307, 2971, 3052, 3867, 4015, 2761],
    [5500, 6088, 5838, 4035, 6068, 6049],
    [3500, 3600, 3850, 6068, 6182, 5706],
    [46, 57, 74, 28, 41, 65]
]

scatter_plot(states, years, populations)
