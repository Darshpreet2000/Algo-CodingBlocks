//Intersection of two linked lists
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
 node*head2=NULL;
   int n,m;
     cin>>n;
   build(head,n);
     cin>>m;
   build(head2,m);		
  int d=n-m,i=1;
  node*c,*c2;
   	if(d<0){
   		cout<<-1;
	   }
	 else{
	    c=head;
	while(i<=d){
		c=c->next;
		i++;
	}
   c2=head2;
	  while(c2->data!=c->data&&c!=NULL){
	  	c2=c2->next;
      	c=c->next;
	  }
	  if(c==NULL){
	  	cout<<-1;
	  }
	  else;
    cout<<c->data;
   }
}

