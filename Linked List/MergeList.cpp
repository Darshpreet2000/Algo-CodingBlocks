//Merge two given Linked List
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
node* merge(node*a,node*b){
	node*c;
   if(a==NULL)
   return b;
   else if(b==NULL)
   return a;
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
int main(){
	int t;
	cin>>t;
	while(t--){
	node*head=NULL,*head2=NULL;
	int n,m;
	cin>>n;
	build(head,n);
	cin>>m;
	build(head2,m);
	head=merge(head,head2);
   print(head);
  cout<<endl;
  }
}
