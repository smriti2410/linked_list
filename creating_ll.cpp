#include<iostream>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode *next;
};ListNode *head;

void create(int A[],int n)
{
    
    ListNode * temp, *tail;
head=new ListNode;
    head->data=A[0];
    head->next=NULL;

    temp=head;
    tail=head;

    for(int i=1;i<n;i++){
        temp=new ListNode;
        temp->data=A[i];
        temp->next=NULL;
        tail->next=temp;
        tail=temp;
    }
}

void Display(ListNode *head){
    ListNode*temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}


int main()
{
    int A[]={1,2,3,4,5};
  

    create(A,5);

Display(head);

  return 0;

}