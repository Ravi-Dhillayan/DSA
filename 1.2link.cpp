#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node * next;
		
		node(int data){
			this->data=data;
			this->next=NULL;
		}
};
class lin{
	public:
		void inhead(node *&head,int d){
	// create for new node
	node *tem=new node(d);
	tem->next=head;
	head=tem;
}
void dis(node* &head){
	node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" "<<endl;
		temp=temp->next;
	}
	cout<<endl;
}
};
int main(){
	node* node1=new node(10);
//	cout<<node1->data<<endl;
//	cout<<node1->next<<endl;
	node*head1=node1;
	lin ob;
	ob.dis(head1);
	cout<<head1<<endl;
	ob.inhead(head1,12);
	ob.dis(head1);
}
