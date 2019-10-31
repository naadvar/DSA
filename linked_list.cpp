//implementing a simple linked list
#include<iostream>
#include <string>
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
            cout<<"Node has been sucessfully created"<<endl;

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
        void add_node( string mode,int value)
        {
            cout<<"The place you have chosen to add a new node is:"<<mode<<endl;
            
            // node *temp = new node;
            // temp = head;
            
            if(head == NULL)
            {
                cout<<"The head is null so the node you add right now will be the first"<<endl;
                creat_node(value);
            }
            if(mode == "HEAD")
            {
                node * temp = new node;
                temp->data = value;
                temp ->next = head;
                head = temp;
            }
            else if(mode == "LAST")
            {
                node *new_temp = new node;
                new_temp -> data = value;
                new_temp -> next = NULL;
                tail->next = new_temp;
                new_temp = tail;
            }
            else{
                cout<<"Wrong mode given"<<endl;
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
    linked.add_node("HEADf",5);
    linked.display();
    return 0;
}