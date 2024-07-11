#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node(int value){
		data = value;
		next =	NULL;
		}
};
node *CreateLinkedList(int arr[],int index,int size){
	if(index==size){
		return NULL;
	}
	
   node *temp;
     temp=new node(arr[index]);
     temp->next=CreateLinkedList(arr,index+1,size);
     	return temp;
}
void  PrintLinkedList(node *temp){
   while(temp!=NULL){
   	cout<<temp->data<<" ";
   	temp=temp->next;
   }
}
int main(){
	node *head;
	head=NULL;
	int arr[]={2,4,6,78,10};
  
	head=CreateLinkedList(arr,0,5);
	cout<<"Printed Linked List : "<<endl;
 PrintLinkedList(head);
//	node *temp;
//	temp=head;
//	while(temp){
//		cout<<temp->data<<" ";
//		temp=temp->next;
//	}
}
