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
void buildlist(node*&head,int info){
	node*n=new node(info);
	n->next=NULL;
	if(head==NULL)
	  head=n;
	  else{
	  	node*save=head;
	  	while(save->next!=NULL){
		   save=save->next;	
	    }
	   save->next=n;
	  }
}
node*oddeven(node*head){
	node*odd=NULL;
	node*even=NULL;
	while(head!=NULL){
		if(head->data%2==0){
			buildlist(even,head->data);
		}
		else if(head->data%2!=0){
			buildlist(odd,head->data);
		}
	head=head->next;
	}
    node*save=odd;
    while(save->next!=NULL){
    	save=save->next;
	}
	save->next=even;
	print(odd);
}
int main(){
	int n;
	cin>>n;
	node*head=NULL;
	build(head,n);
	//make two nodes odd and even
	oddeven(head);
}
