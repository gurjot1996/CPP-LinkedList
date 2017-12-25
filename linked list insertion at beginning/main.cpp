#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
};
struct node *head=NULL;
struct node *temp;

struct node *insertnodeatbeg(struct node *head,int val)
{
        if(head==NULL){
        struct node *ins=new node();
        ins->next=NULL;
        ins->data=val;
        head=ins;
        }
        else
        {
        struct node *ins=new node();
        ins->data=val;
        ins->next=head;
        head=ins;
        }
        return head;
}

void printing(struct node *head)
{
    temp=head;
    while(temp!=NULL){
    cout<<temp->data<<endl;
    temp=temp->next;
    }
}


int main()
{
    int n,a;
    cout<<"Enter the no of elements you want to enter"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>a;
    if(head==NULL){
        head=insertnodeatbeg(head,a);
        }
        else{
        head=insertnodeatbeg(head,a);
        }
    }
    printing(head);
    return 0;
}
