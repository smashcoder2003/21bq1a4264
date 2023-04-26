import threading


class DiningPhilosophers:
    def __init__(self):
        # List of semaphores, one for each fork
        self.forks = [threading.Semaphore(1) for _ in range(5)]

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
        eat()
        putRightFork()
        putLeftFork()

        # Release right fork, then left fork
        self.forks[philosopher].release()
        self.forks[(philosopher + 1) % 5].release()

    def startDining(self) -> None:
        # Create a list of philosophers, each represented as a separate thread
        philosophers = [threading.Thread(target=self.wantsToEat, args=(i,
                                                                       self.pickLeftFork,
                                                                       self.pickRightFork,
                                                                       self.eat,
                                                                       self.putLeftFork,
                                                                       self.putRightFork)) for i in range(5)]

        # Start the threads
        for philosopher in philosophers:
            philosopher.start()

        # Wait for all threads to complete
        for philosopher in philosophers:
            philosopher.join()

    def pickLeftFork(self) -> None:
        print("Picking up left fork")

    def pickRightFork(self) -> None:
        print("Picking up right fork")

    def eat(self) -> None:
        print("Eating")

    def putLeftFork(self) -> None:
        print("Putting down left fork")

    def putRightFork(self) -> None:
        print("Putting down right fork")


if __name__ == '__main__':
   obj1 = DiningPhilosophers()
   obj1.startDining()