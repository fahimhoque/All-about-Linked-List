#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
class linkedList{
    private:
        node *head, *tail;

    public:
        linkedList()
        {
            head = NULL;
            tail = NULL;
        }
        void addNode(int n)
        {
            node *temp = new node;
            temp->data = n;
            temp->next = NULL;
            if(head == NULL)
            {
                head = temp;
                tail = temp;
            }
            else
            {
                tail->next = temp;
                tail = tail -> next;
            }
            
        }
        void printList()
        {
            node *temp = new node;
            temp = head;
            while(temp != NULL)
            {
                cout << temp -> data << " ";
                temp = temp -> next;
            }
        }
};



int main()
{
    linkedList l;
    l.addNode(1);
    l.addNode(2); 

    l.printList();
    return 0;
}