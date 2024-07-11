#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		
};
class linked{
		node *head;
		int item;
	public:
		
		linked(){
			head=NULL;
	
		}
		void fin(){
			cout<<"Enter the linked Element : "<<endl;
				cin>>item;
			if(head==NULL){
			  head=new node;
				head->data=item;
				head->next=NULL;
			}
			else{
				node *tem=new node;
				tem->data=item;
				tem->next=head;
				head=tem;
			}
		}
	void dis(){
		if(head==NULL){
			cout<<"Linked List is Empty :: "<<endl;
		}
		else{
			node *temp=new node;
			temp=head;
			while(temp!=NULL){
				cout<<temp->data<<" "<<endl;
				temp=temp->next;
			}
		}
	}
};
int main(){
	linked obj;
	int ch=0;
	while(1){
		 cout << "\n ----Main Menu---\n";
        cout << "Choose one option from the following list : " << endl;
        cout << "1. Insert in the Beginning \n2. Insert in the Endning \n3.Linked Data Print:: \n ";
		cout<<"4. Delete in the Beginning \n5.Delete in the last \n 6. serach linked list Elements \n7. Up_date linked list Elements \n 8. Exit : " << endl;
        
		cout << "Enter your choice : " << endl;
        cin >> ch;
        switch(ch){
        	case 1:
        		obj.fin();
        		break;
        	case 2:
        		obj.dis();
        		break;
        		case 7:
        			return 0;
        		default :
        			cout<<"Please the valid choice !!!"<<endl;
        				
		}
	}
}
