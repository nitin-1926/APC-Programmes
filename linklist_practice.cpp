#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *head=NULL,*temp,*ptr;
    while(true)
    {
        cout<<("Press any number and -1 for exit");
        int input;
        cin>>input;
        if(input==-1)
        {
            break;
        }
        else
        {
            temp=new struct Node;
            temp->data=input;
            temp->next=NULL;
            if(head==NULL)
            {
                head=temp;
            }
            else
            {
                for(ptr=head;ptr->next!=NULL;ptr=ptr->next);
                temp->next=ptr;
            }
        }
    }
    for(ptr=head;ptr!=NULL;ptr=ptr->next)
    {
        cout<<ptr->data<<endl;
    }
    return 0;
}
