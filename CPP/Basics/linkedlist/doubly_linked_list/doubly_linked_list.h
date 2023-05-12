#include<iostream>

class doublyNode {
    public:
    int val;
    doublyNode* prev;
    doublyNode* next;
    doublyNode(int val, doublyNode* prev = NULL, doublyNode* next = NULL) {
        this -> val = val;
        this -> prev = prev;
        this -> next = next;
    }
};

void insert_at_head(doublyNode* &head, int val) {
    doublyNode* newNode = new doublyNode(val);
    if(!(head)) {
        head = newNode;
    }

    else {
        newNode -> next = head;
        head -> prev = newNode;
        head = newNode;
    }

}