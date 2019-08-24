//K Append Linked List
#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node*next;
    node(int data){
    	this->data=data;
	}
};
void build(node*&head,int n){
	int data,i=1;
    while(i<=n){
    	cin>>data;
	node*n=new node(data);
	n->next=NULL;
   if(head==NULL){
   	head=n;
   } 
   else{
   	     node*save=head;
   	    while(save->next!=NULL){
   	    	save=save->next;
		   }
		   save->next=n;
     }
   i++;
  }
}
void print(node*head){
	while(head!=NULL){
	cout<<head->data<<" ";
	head=head->next;	
	}
}
int main(){
	node*head=NULL;
	int n,k,l,i=1;
	cin>>n;
	build(head,n);
   cin>>k;
   node*c=head;
   node*p;
   if(k!=n){
     if(k>n){
     	l=n-k%n;
	 }
	 else if(k<n){
	 	l=n-k;
	 }
   while(i<=l){
   	p=c;
   	c=c->next;
   	i++;
   }
   p->next=NULL;
   node*temp=c;
       while(temp->next!=NULL){
       	temp=temp->next;
	   }
	   temp->next=head;
   }
  print(c);
}

