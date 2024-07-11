#include<iostream>
using namespace std;
class node{
	public:
		int d;
		node* n;
		
};
class bin{
	int item;
	public:
		node* head;
		public:
			bin(){
				head = NULL;
				
			}
	void fin(){
		node *ptr=new node;
		cout<<"Enter the item : "<<endl;
		cin>>item;
		ptr->d=item;
		if(head ==NULL){
			head =ptr;
			ptr->n=head;
		}
		else{
			node* temp=head;
			while(temp->n!=head){
				temp=temp->n;
			}
			temp->n=ptr;
			head=ptr;
		}
		 cout<<"Item inserted in Linked list : "<<endl;
	}
	void dis(){
		if(head == NULL){
			cout<<"Linked list is Empty : "<<endl;
		}
		else{
			cout<<"Linked list Item Printed : "<<endl;
			node* tem=head;
		   do{
		   	cout<<tem->d<<endl;
		   	tem=tem->n;
		   }while(tem!=head);
		   cout<<endl;
		}
	}
};
int main(){
	int ch=0;
	bin obj;
	while(1){
			cout<<"Your choice : \n 1 enter Insert : \n 2 show Data : \n Enter 4 Exit : "<<endl;
	cin>>ch;
	switch (ch){
		case 1:
			obj.fin();
			break;
			case 2:
				obj.dis();
				break;
				case 4:
				cout<<"Exit : "<<endl;
				return 0;
	}
	}

}
