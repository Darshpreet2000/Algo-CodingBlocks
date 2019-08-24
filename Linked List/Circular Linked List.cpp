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
void buildlist(node*&head){
	  int data;
	  cin>>data;
  while(data!=-1){
	  node*n=new node(data);
	  if(head==NULL){
	  	      head=n;
	  	      n->next=head;
	  } 
	  else{
          n->next=head;
	  	node*tail=head;
	  	while(tail->next!=head){
	  		tail=tail->next;
		  }
	  	tail->next=n;
	  }
     cin>>data;
   }
}
void print(node*head){
	node*ptr=head;
	while(ptr->next!=head){
		cout<<ptr->data<<"-->";
		ptr=ptr->next;
	}
	cout<<ptr->data;
}
void operator>>(istream &is,node*&head){
	      buildlist(head);
}
void operator<<(ostream &os,node*&head){
	   print(head);
}
int main(){
	node*head=NULL;
	cin>>head;
	cout<<head;
}
