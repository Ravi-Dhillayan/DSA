#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		
	node(int value){
		data=value;
		next=NULL;
	}	
};

int main(){
	node *head,*tail;
   tail= head=NULL;

	int arr[]={2,4,5,7,88,12};
	// Insert the node at beginning
	
	//Linked list dosen't exist
//	for(int i=0;i<6;i++)
//{
//	
//	if(head==NULL){
//		head=new node(arr[i]);
//	}
//	else{
//		node *temp;
//		temp=new node(arr[i]);
//		temp->next=head;
//		head=temp;
//	}
//}
//// print the value 
// int item;
// cout<<"Enter the new node add in Linked List : "<<endl;
// cin>>item;
// node *tem;
// tem=new node(item);
// tem->next=head;
// head=tem;
//node *temp=head;
//while(temp){
//	cout<<temp->data<<" ";
//	temp=temp->next;
//	
//}


 // ** Insert the value at End
 for(int i=0;i<6;i++){
 
 // * Linked list is empty
 if(head==NULL){
 	head=new node(arr[i]);
 	tail=head;
     }
     else{
     	tail->next=new node(arr[i]);
     	tail=tail->next;
	 }
 }
 int item;
 cout<<"Enter the new node add in Linked List of End : "<<endl;
 cin>>item;
  
   tail->next=new node(item);
   tail=tail->next;
 node *temp;
 temp=head;
 while(temp){
 	cout<<temp->data<<" ";
 	temp=temp->next;
 }
}
