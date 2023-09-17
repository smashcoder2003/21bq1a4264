#include <bhargav.h>

using namespace bhargav;

class Solution
{
public:
    bhargav::Node *addTwoNumbers(Node *l1, Node *l2)
    {
        int carry = 0;
        Node *new_head = new Node(0);
        Node *result = new_head;
        while (l1 != nullptr || l2 != nullptr)
        {
            int added_value = carry + l1->val + l2->val;
            carry = added_value / 10;
            new_head->next = new Node(added_value % 10);
            l1 = l1->next;
            l2 = l2->next;
            new_head = new_head->next;
        }

        while (l1 != nullptr)
        {
            int added_value = carry + l1->val;
            carry = added_value / 10;
            new_head->next = new Node(added_value % 10);
            l1 = l1->next;
            new_head = new_head->next;
        }

        while (l2 != nullptr)
        {
            int added_value = carry + l2->val;
            carry = added_value / 10;
            new_head->next = new Node(added_value % 10);
            l2 = l2->next;
            new_head = new_head->next;
        }

        if (carry != 0)
            new_head->next = new Node(carry);
        return result->next;
    }
};

int main()
{
    Node *temp = new Node(9);
    temp->next = new Node(9);
    Node *temp2 = new Node(0);
    temp2->next = new Node(1);

    Solution obj1;
    Node *result = obj1.addTwoNumbers(temp, temp2);

    while (result != nullptr)
    {
        std:: cout << result->val << " ";
        result = result->next;
    }
}