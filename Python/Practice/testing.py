import threading


class DiningPhilosophers:
    def __init__(self):
        # List of semaphores, one for each fork
        self.forks = [threading.Semaphore(1) for _ in range(5 + 1)]

    # call the functions directly to execute, for example, eat()
    def wantsToEat(self,
                   philosopher: int,
                   pickLeftFork: 'Callable[[], None]',
                   pickRightFork: 'Callable[[], None]',
                   eat: 'Callable[[], None]',
                   putLeftFork: 'Callable[[], None]',
                   putRightFork: 'Callable[[], None]') -> None:
        # Take the right fork, then left fork
        self.forks[philosopher].acquire()
        self.forks[(philosopher + 1) % 5].acquire()

        # Eat!
        pickRightFork()
        pickLeftFork()
        eat(philosopher)
        putRightFork()
        putLeftFork()

        # Release right fork, then left fork
        self.forks[philosopher].release()
        self.forks[(philosopher + 1) % 5].release()


def pickLeftFork():
    print("Picking up left fork")


def pickRightFork():
    print("Picking up right fork")


def eat(philosopher_id):
    print(f"{philosopher_id} is Eating")


def putLeftFork():
    print("Putting down left fork")


def putRightFork():
    print("Putting down right fork")


def myfun1(n: int):
    if n == 10:
        return n
    else:
        return myfun1(n + 1)


if __name__ == '__main__':
    dp = DiningPhilosophers()

    # Create a thread for each philosopher
    threads = []
    for i in range(5):
        t = threading.Thread(target=dp.wantsToEat,
                             args=(i + 1, pickLeftFork, pickRightFork, eat, putLeftFork, putRightFork))
        threads.append(t)
        t.start()

    # Wait for all threads to finish
    for t in threads:
        t.join()
