#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

int insert(node** head_ref,int value) {
    node* new_node = new node;
    if(new_node == NULL)
        return 0;
    new_node->data = value;
    new_node->next = nullptr;

    if(*head_ref == nullptr) {
        *head_ref = new_node;
    } else {
        node* temp = *head_ref;
        while(temp->next !=NULL){
            temp = temp -> next;
        }
        temp->next = new_node;
    }
    return 1;
}

int del_end(node** head_ref){
    if(*head_ref == nullptr) {
        return -1;
    }else{
        node* temp = *head_ref;
        
        if(temp->next == NULL){
            delete(temp);
            *head_ref = nullptr;
        }else {
            while(temp->next->next!=NULL) {
            temp = temp->next;
            }
            node* ptr = temp->next;
            temp->next = NULL;
            delete(ptr);
        }
        return 1;
    }
}

void display(node** head_ref){
    if(*head_ref == nullptr) {
        cout << "No elements to display.\n";
    }else{
        node* temp = *head_ref;
        while(temp->next!=NULL){
            cout << temp->data<<"->";
            temp = temp->next;
        }
        cout << temp->data<<"\n";
    }
}

int ins_pos(node** head_ref,int value,int len) {
    node* new_node = new node;
    if(new_node == NULL)
        return 0;
    new_node -> data = value;
    new_node -> next = nullptr;
    if(*head_ref == nullptr){
        *head_ref = new_node;
    }else {
        node* temp = *head_ref;
        int pos;
        cout << "Enter the position to insert the value : ";
        cin >> pos;
        if(pos <= len){
            if(pos == 1){
                new_node -> next = *head_ref;
                *head_ref = new_node;
            }else{
                for(int i = 1;i < pos - 1;i++){
                    temp = temp ->next;
                }
                new_node -> next = temp -> next;
                temp -> next = new_node;   
            }
        }else{
            cout << "Position is out of Linked-List Length!!!\n";
            return -1;
        }
    }
    return 1;
}

int del_pos(node* &head,int len){
    if(head == nullptr) {
        return 0;
    } else {
        node * temp = head;
        if(temp -> next == NULL) {
            delete(temp);
            head = nullptr;
        }else{
            int pos;
            cout << "Enter the position to be Deleted : ";
            cin >> pos;

            if(pos <= len){
                if(pos == 1 ){
                    if(temp ->next != NULL){
                        node* ptr = temp;
                        head = temp -> next;
                        delete(ptr);
                    }
                }else{
                    for(int i = 1;i < pos - 1;i++){
                        temp = temp -> next;
                    }   
                    node* ptr = temp->next;
                    temp->next = temp->next->next;
                    delete(ptr);
                }
            }else{cout << "Position is out of Linked-List Length!!!\n"; return -1;}
        }
        return 1;
    }
}

int ll_length(node* &head_ref,int count ){
    node* temp = head_ref;
    if(temp == nullptr){
        count = 0;
        return count;
    }else{
        if(temp ->next != NULL){
            count += 1;
            return ll_length( temp->next , count);
        }
    }
    return count+1;
}

int swap_nodes(node** head_ref,int x,int y){
    node* temp = *head_ref;
    
    node* prevx = nullptr, *currx = *head_ref;
    node* prevy = nullptr, *curry = *head_ref;

    node* temp_next;
    while(temp !=nullptr){
        if(temp->data != x){
            prevx = temp;
        } else {
			currx = temp;
			break;
		}
        temp = temp->next;
    }
    temp = *head_ref;

    while(temp != nullptr){
        if (temp->data != y) {
            prevy = temp;
        } else {
			curry = temp;
			break;
		}
        temp = temp->next;
    }
    if(curry == nullptr || currx == nullptr)
        return -1;
    
    if (prevx == nullptr) { /*X is head*/
        *head_ref = curry;
    }  

    if (prevy == nullptr) { /*Y is head*/
        *head_ref = currx;
    } 

	node* next_x=currx->next;
	currx->next = curry->next;
	curry->next = next_x;
	prevx && (prevx->next = curry);
	prevy && (prevy->next = currx);
	return 1;
}


int main(void) {
    struct node* head = nullptr;
    int choice,value,res,len,x,y;
    bool exit = false;
    while(!exit) {
        cout << "Linked List operation Menu : \n";
        cout << "1. Insert an Element\n";
        cout << "2. Delete an Element\n";
        cout << "3. Display the Linked LIst\n";
        cout << "4. Inset at position \n";
        cout << "5. Delete at position\n";
        cout << "6. Length of the Linked List\n";
        cout << "7.Swap Any Two Nodes.\n";
        cout << "8. Exit \n";

        cout << "Enter Your Choice : ";
        cin >> choice;

        switch(choice) {
            case 1: cout << "Enter the value to insert : ";
                    cin >> value;
                    res = insert(&head,value);
                    if (res == 0 )
                        cout << "Insertion Failed\n";
                    else
                        cout << "Insertion Successful\n";
                    break;
            case 2: if(del_end(&head) == 1){
                        cout << "End Node Deleted.\n";
                    } else {
                        cout << "Deletion is not performed.\n";
                    }
                    break;
            case 3: display(&head);
                    break;
            case 4: cout << "Enter the value to insert : ";
                    cin >> value;
                    len = ll_length(head,0);
                    res = ins_pos(&head,value,len);
                    if(res == 0){
                        cout << "Not inserted !\n";
                    }else if(res == 1){
                        cout <<"Value inseted.\n";
                    }else{cout<<"\n";}
                    break;
            case 5: len = ll_length(head,0);
                    res = del_pos(head,len);
                    if(res == 1){
                        cout << "Deleteion Successdul.\n";
                    }else if(res == 0){
                        cout << "Deleteion is not performed.\n";
                    }else{ cout << "\n";}
                    break;
            case 6: res = ll_length(head,0);
                    if(res == 0) {
                        cout << "No node's are present.\n";
                    }else{
                        cout << "There are "<< res << "node's in the Linked List.\n";
                    }
                    break;
            case 7: cout <<"We Need Two values to swap\n";
                    cout << "Enter the First value :";
                    cin >> x;
                    cout << "Enter the Second value : ";
                    cin >> y;
                    res = swap_nodes(&head,x,y);
                    if(res == -1){
                        cout <<"Swap failed!!!\t\t One element is not present.\n";
                    }else if (res == 1){
                        cout << "Swapped successfully.\n";
                    }
                    break;
            case 8: exit = true;  
                    break;
        }
    }
}
