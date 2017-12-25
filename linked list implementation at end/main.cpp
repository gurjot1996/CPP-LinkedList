#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
};
struct node *head=NULL;
struct node *temp;

struct node *insertnode(struct node *head,int val)
{
    struct node *ins=new node();
    if(head==NULL){
        ins->data=val;
        ins->next=NULL;
    }else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=ins;
        ins->data=val;
        ins->next=NULL;
    }
    return ins;
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
        head=insertnode(head,a);
        }
        else{
        insertnode(head,a);
        }
    }
    printing(head);
    return 0;
}
