//Floyd's Cycle
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
		n->next=NULL;
		//Insert at end
		if(head==NULL)
		head=n;
		else{
		   node*ptr=head;
		while(ptr->next!=NULL){
		   ptr=ptr->next;
		}
	   ptr->next=n;
        }
		cin>>data;
	}
}
void print(node*head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head=head->next;
	}
}
void operator>>(istream &is,node*&head){
	      buildlist(head);
}
void operator<<(ostream &os,node*&head){
	   print(head);
}
void detect(node*head){
	node*slow=head,*fast=head->next->next;
	while(slow!=fast){
		fast=fast->next->next;
		slow=slow->next;
	}
  if(slow==fast)
  cout<<"Yes";
}
void remove(node*&head){
   	node*slow=head->next,*fast=head->next->next;
	while(slow!=fast){
		slow=slow->next;
		fast=fast->next->next;
	} 
  if(slow==fast){
  	slow=head;
}
  while(slow->next!=fast->next){
     slow=slow->next;
	 fast=fast->next;  	
  }
  fast->next=NULL;
}
int main(){
   node*head=NULL;
   cin>>head;
   node*temp=head;
   node*save=head->next->next;
   while(temp->next!=NULL){
   	temp=temp->next;
   }
   temp->next=save;
   detect(head);
remove(head);
cout<<endl;
cout<<head;
return 0;
}

