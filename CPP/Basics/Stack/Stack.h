#define n 100

class Stack {
    int *arr;
    int top;
    public:
        Stack() {
            top = -1;
            arr = new int[n];
        }

        void push(int val) {
            if(top == n-1) {
                std::cout << "Stack OverFlowError !!";
                return;
            }
            arr[++top] = val;
        }
        
        int pop() {
            if(empty()) {
                std::cout << "Stack UnderFlowError !!";
                return -1;
            }
            return arr[top--];
        }

        bool empty() {
            return (top == -1);
        }

        int tos() {
            if(empty())
                return -1;
            
            return arr[top];
        }
};