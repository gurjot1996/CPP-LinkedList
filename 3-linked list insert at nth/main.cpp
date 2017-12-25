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

int printing(struct node *head)
{
    int i=0;
    temp=head;
    while(temp!=NULL){
    i++;
    cout<<temp->data<<endl;
    temp=temp->next;
    }
    return i;
}

struct node *insertatpos(struct node *head,int pos,int val)
{
    int j=0;
    temp=head;
    while(head!=NULL && j<pos-2)
    {
        temp=temp->next;
        j++;
    }
    struct node *ins=new node();
    ins->next=temp->next;
    ins->data=val;
    temp->next=ins;
    return head;
}

int main()
{
    int pos,n,a;
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
    int length=printing(head);
    cout<<"length "<<length;
    cout<<"enter the position you wish to insert a no.";
    cin>>pos;
    if(pos<=length){
    cout<<"enter value"<<endl;
    cin>>a;
    head=insertatpos(head,pos,a);
    printing(head);}
    else{
    cout<<"wrong choice";}
    return 0;
}
