#include<iostream>
using namespace std;


class node{
    public:
        int data;
        node* next;
};

// This function will print content of list
// starting from the given node
void printList(node* n)
{
    while(n != NULL){
        cout << n->data << " ";
        n = n->next;
    }
}

int main(){
    node* head = NULL;
    node* second = NULL;
    node* third = NULL;
    

    // allocate 3 nodes in the heap
    head = new node();
    second = new node();
    third = new node();

    head->data = 1; // insert data into head
    head->next = second; // link first node with the second

    second->data = 55; // insert data into second
    second->next = third; // link scond node with the third


    third->data = 99; // insert data into final noode
    third->next = NULL; // assign NULL to third node because it's the last node

    printList(head);

    return 0;
}
