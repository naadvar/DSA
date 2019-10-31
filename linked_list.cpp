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

        void display()
        { 
            node *temp ;
            temp = head;
            cout<<"Printing the contents of this particular node"<<endl;
            while(temp!=NULL)
            {
                cout<<"The value of this node is:"<< temp->data <<endl;
                temp = temp ->next;
            }
        }

};

int main()
{
    linked_list linked;
    linked.creat_node(1);
    linked.creat_node(2);
    linked.creat_node(3);
    linked.display();
    return 0;
}