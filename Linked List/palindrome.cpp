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
	int n,i=1,flag=1;
	node*head=NULL;
	 cin>>n;
	 build(head,n);
   node*c=head;
	 while(i<n/2){
	 c=c->next;
	 i++;	
	 }
	 node*c1=c->next;
	 c->next=NULL;
    //Reverse The Number
    node*p=NULL,*save;
    while(c1!=NULL){
    	save=c1->next;
    	c1->next=p;
    	p=c1;
    	c1=save;
	}
	c=head;
	while(c->next!=NULL&&p->next!=NULL){
	     
		  if(c->data!=p->data){
	      	flag=0;
	      	break;
		  }	
	   c=c->next;
	   p=p->next;
	}
    if(flag==0)
    cout<<"False";
    else
    cout<<"True";
   
}
