#include<iostream>   // Final linked list 
using namespace std;
class node{
	public:
	int data;
	node *next;
	node(){
		int data;
		cout<<"Enter the node data : "<<endl;
		cin>>data;
		this->data=data;
		this->next=NULL;
	}
};
class link{
	public:
		void inhead(	node* &head ){
		
			int d;
			node *tem=new node();
			tem->next=head;
			head=tem;
		}
		void dis(node *head){
			node *temp=head;
			cout<<"Linked Element : "<<endl;
			while(temp!=NULL){
				cout<<temp->data<<endl;
				temp=temp->next;
			}
			cout<<endl;
		}
};
int main(){
	node* node1=new node();
	node*head1=node1;
//      link obj;
//      obj.dis(head1);
     int i,n;
     cout<<"Enter how many Enter hte data for Linked : "<<endl;
     cin>>n;
     link o[n];
     for(i=0;i<n;i++){
     	o[i].inhead(head1);
     	o[i].dis(head1);
	 }
}
