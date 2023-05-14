#define n 100
class Queue {
    int* arr;
    int front;
    int back;

    public:
    Queue() {
        front = -1;
        back = -1;
        arr = new int[n];
    }
    
    void enqueue(int val) {
        if(back == n -1) {
            std::cout << "Queue OverFlowError" << std::endl;
            return;
        }
        arr[++back] = val;
        if(front == -1) {
            front++;
        }
    }

    void dequeue() {
        if(front > back) {
            std::cout << "QueueUnderFlowError" << std::endl;
            return;
        }
        front++;
    }

    int peek() {
        if(front == -1 || front > back) {
            std::cout << "There are no elements in the Queue" << std::endl;
            return 0;
        }
        return arr[front];
    }

    bool empty() {
        if(front == -1 || front > back) {
            return 1;
        }
        return 0;
    }
};