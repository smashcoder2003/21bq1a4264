import threading
from time import sleep


CAPACITY = 2
buffer = ["a"] * CAPACITY
buffer_in_index = 0
buffer_out_index = 0

mutex = threading.Semaphore()
bhargav = threading.Semaphore()
no_of_unoccupied_slots = threading.Semaphore(CAPACITY)
no_of_occupied_slots = threading.Semaphore(0)


class Producer(threading.Thread):
    def run(self):
        global CAPACITY, buffer, buffer_in_index, buffer_out_index
        global mutex, no_of_unoccupied_slots, no_of_occupied_slots

        pitem = 0
        counter = 0

        while pitem < 6:
            no_of_unoccupied_slots.acquire()
            bhargav.acquire()
            mutex.acquire()

            counter += 1
            buffer[buffer_in_index] = counter
            buffer_in_index = (buffer_in_index + 1) % CAPACITY
            print("produced item is: ", counter)

            mutex.release()
            no_of_occupied_slots.release()
            bhargav.release()

            sleep(1)

            pitem += 1


# Consumer Thread Class
class Consumer(threading.Thread):
    def run(self):
        global CAPACITY, buffer, buffer_in_index, buffer_out_index, counter
        global mutex, no_of_unoccupied_slots, no_of_occupied_slots

        consumed_items = 0

        while consumed_items < 10:
            no_of_occupied_slots.acquire()
            mutex.acquire()

            item = buffer[buffer_out_index]
            buffer_out_index = (buffer_out_index + 1) % CAPACITY
            print("Citem : ", item)

            mutex.release()
            no_of_unoccupied_slots.release()

            sleep(2.5)

            consumed_items += 1


producer = Producer()
consumer = Consumer()

consumer.start()
producer.start()

producer.join()
consumer.join()

