using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node(int val) {
        this -> val = val;
        this -> next = NULL;
    }

    Node(int val, Node* next) {
        this -> val = val;
        this -> next = next;
    }
};

void display(Node* head) {
    Node* temp=head;

    while(temp != NULL) {
        cout << temp -> val << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insert_at_beginning(Node* &head, int val) {
    Node* obj = new Node(val);
    obj -> next = head;
    head = obj;
    return;
}