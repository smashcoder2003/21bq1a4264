import threading
import time


class ReaderWriter:
    def __init__(self):
        self.rd = threading.Semaphore()
        self.wrt = threading.Semaphore()

        self.readCount = 0  # initializing number of reader present

    def reader(self):
        while True:
            self.rd.acquire()  # wait on read semaphore

            self.readCount += 1  # increase count for reader by 1

            if self.readCount == 1:  # since reader is present, prevent writing on data
                self.wrt.acquire()  # wait on write semaphore

            self.rd.release()  # sinal on read semaphore

            print(f"Reader {self.readCount} is reading")

            self.rd.acquire()  # wait on read semaphore

            self.readCount -= 1  # reading performed by reader hence decrementing readercount

            if self.readCount == 0:  # if no reader is present allow writer to write the data
                self.wrt.release()  # signal on write semphore, now writer can write

            self.rd.release()  # sinal on read semaphore

            time.sleep(3)

    def writer(self):
        while True:
            self.wrt.acquire()  # wait on write semaphore

            print("Wrting data.....")  # write the data
            print("-" * 20)

            self.wrt.release()  # sinal on write semaphore

            time.sleep(3)

    def main(self):
        # calling mutliple readers and writers
        t1 = threading.Thread(target=self.reader)
        t1.start()
        t2 = threading.Thread(target=self.writer)
        t2.start()
        t3 = threading.Thread(target=self.reader)
        t3.start()
        t4 = threading.Thread(target=self.reader)
        t4.start()
        t6 = threading.Thread(target=self.writer)
        t6.start()
        t5 = threading.Thread(target=self.reader)
        t5.start()


if __name__ == "__main__":
    c = ReaderWriter()
    c.main()
