#include<iostream>
using namespace std;
class node{
	public:
	int d;
	node * n;
	
};
class bin{
	int item;
	
	public:		
		node* head;

		bin(){
		    	head =NULL;	
		    	
		}
		void Ein(){	
			node *ptr =new node;
			cout<<"Enter data : "<<endl;
			cin>>item;
			ptr->d=item;
			if(head==NULL){
				head=ptr;
				ptr->n=head;
			}
			else{
				node *temp=head;
				while(temp->n!=head){
					temp=temp->n;
				}
					temp->n=ptr;
					ptr->n=head;
					head=ptr;
				
			}
			cout<<"node Added : "<<endl;	 
		}
	
		void dis(){
        if(head==NULL){
        	cout<<"Linked List is Empty : "<<endl;
		}
		else{
			node* tem=head;
			do{
				cout<<tem->d<<" ";
				tem=tem->n;		
			}
			while(tem!=head);
			cout<<endl;
		}
	}
	
};
int main(){
	int ch=0;
		bin obj;
	while(1)
{
	
	cout<<"Your choice  : 1 enter Insert \nEnter 2 last\n Enter 3 show \n Enter 4 Exit :  "<<endl;
	cin>>ch;
	switch(ch){
	case 1:
		obj.Ein();
		break;
//	case 2:
//		obj.last();
//		break;
		case 3:
			obj.dis();
			break;
			case 4:
			cout<<"Exit "<<endl;
			return 0;	
			 default:
                cout << "Please enter a valid choice :" << endl;
		
	}
	
}
return 0;
}

