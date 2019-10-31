//implementing a simple linked list
#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

class linked_list
{
    private:
        node *head;
        node *tail;
    public:
        linked_list()
        {
            head = NULL;
            tail = NULL;
        }

        void creat_node(int value)
        {   
            node *temp = new node;
            temp->data = value;
            temp->next = NULL;
            //cout<<"Node has been sucessfully create";

            if(head == NULL)
            {
                head = tail = temp;
            }
            else
            {
                tail->next = temp;
                tail = temp;
            }
            cout<<"Node has been sucessfully created";

        }

};

int main()
{
    linked_list linked;
    linked.creat_node(1);
    return 0;
}