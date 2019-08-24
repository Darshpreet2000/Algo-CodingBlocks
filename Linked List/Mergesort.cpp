#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node*next;
};
void buildlist(int inf,node*&head){
   node*n=new node;
   n->next=NULL;
   n->data=inf;
	if(head==NULL){
      head=n;
	}
	else{
		node*ptr=head;
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
	  ptr->next=n;
	}
}
void print(node*head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head=head->next;
	}
}

node*midpoint(node*head){
	node*slow=head;
	node*fast=head->next;
	while(fast!=NULL&&fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
	}
  return slow;
}
node*merge(node*a,node*b){
	if(a==NULL){
		return b;
	}
	else if(b==NULL){
		return a;
	}
	node*c;
	if(a->data<b->data){
		c=a;
		c->next=merge(a->next,b);
	}
	else{
		c=b;
		c->next=merge(a,b->next);
	}
	return c;
}
node*mergesort(node*head){
	if(head==NULL||head->next==NULL){
		return head;
	}
    node*mid=midpoint(head);
    node*a=head;
    node*b=mid->next;
    mid->next=NULL;
    a=mergesort(a);
    b=mergesort(b);
    node*c=merge(a,b);
 return c;	
}
int main(){
	node*head=NULL;
	int a,i,n,count=1;
	cin>>n;
	while(n!=-1){
		buildlist(n,head);
		cin>>n;
		count++;
	}
	head=mergesort(head);
	print(head);
return 0;
}

