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
        node*ptr=head;
        head=n;
        n->next=ptr;
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
int main(){
	node*head=NULL;
	int k;
	cin>>head;
	cout<<head;
	//kth element from end of list
	cout<<endl;
	cin>>k;//Using Runner technique
	node*slow=head,*fast=head;
	while(k--){
			fast=fast->next;
		}
	while(fast!=NULL){
		fast=fast->next;
		slow=slow->next;
	}
	cout<<slow->data;
return 0;
}

