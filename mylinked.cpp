#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
class linked{
	node *head,*tail;
	int item;
	public:
		linked(){
		tail=head=NULL;
					}
	void fastInsert(){
		cout<<"Enter new node data add in Linked List : "<<endl;
			cin>>item;
			if(head==NULL){
				head=new node;
			  head->data=item;
			  head->next=NULL;
			  tail=head;
			  	
			}
			else{
				node *temp=new node;
				temp->data=item;
				temp->next=head;
				head=temp;
			}
	}
	void EndInsert(){
			cout<<"Enter new node data add in Linked List of End : "<<endl;
			cin>>item;
			if(head==NULL){
				head=new node;
				head->data=item;
			    head->next=NULL;
				tail=head;
			}
			else{
				tail->next=new node;
			 tail=	tail->next;
			 tail->data=item;
				tail->next=NULL;
			}
		}
	void begin_Delete(){
	
		if(head==NULL){
			cout<<"\n Underflow : "<<endl;
		}
		else{
		 node *temp=head;
		 head=head->next;
		 delete temp;
		 cout<<"Node Deleted :: "<<endl;
		}
	}
	void last_delete() {
    if (head == NULL) {
        cout << "\n Underflow : \n";
    } else if (head->next == NULL) {
        delete head;
        head = NULL;
        cout << "\n Node Deleted \n ";
    } else {
        node *ptr = head;
        while (ptr->next != NULL && ptr->next->next != NULL) {
            ptr = ptr->next;
        }
        delete ptr->next;
        ptr->next = NULL;
        cout << "\n Node Deleted \n ";
    }
}
 void search() {
    int item;
    bool found = false;
    cout << "Enter the element to search in the linked list: ";
    cin >> item;

    if (head == NULL) {
        cout << "Linked List is Empty! Cannot search." << endl;
        return;
    }

    node *ptr = head;
    while (ptr != NULL) {
        if (ptr->data == item) {
            found = true;
            break;
        }
        ptr = ptr->next;
    }

    if (found) {
        cout << "Element " << item << " is found in the linked list." << endl;
    } else {
        cout << "Element " << item << " is not found in the linked list." << endl;
    }
}
void up_date(){
	int neww,item;
	bool found=true,userIn=false;
	cout<<"Enter which element do you want to change Item :: "<<endl;
	cin>>item;
	cout<<"Which element would you like to replace this element with :: "<<endl;
	cin>>neww;
	  if (head == NULL) {
        cout << "Linked List is Empty! Cannot Up_date." << endl;
        return;
    }

		node *tem=new node;
		tem=head;
	while(tem!=NULL){
	
		if(tem->data==item){
			tem->data=neww;
			found=false;
			userIn=true;
			break;
		
		}
		tem=tem->next;
	}
	if(userIn){
			cout<<"________Up_date Your Item********THINK YOU*****"<<tem->data<<endl;
	}
	else{
			cout<<"________Sorry, Are you rong Input not Up_date Your Item********THINK YOU*****"<<endl;
	}
}
/* void Mid_add(){
 	bool found=false;
 	  int item,olditem;
 	 
 	  	if(head==NULL){
			cout<<"Linked List is Empty !!! ";
			return;
		}
		 cout<<"Which element do you want to add before the new element : "<<endl;
 	  cin>>olditem;
 	  cout<<"Enter which was want to add element :: "<<endl;
 	  cin>>item;
	  node *tem=head;
	  
	 while(tem!=NULL){
	 	 if(tem->data==olditem){
	  	tem->data=item;
	  	tem->data=olditem;
	  	olditem=tem->data;
	  	found =true;
	  }
	  else{
	  	tem=tem->next;
	  }
	 }
	  if(found){
			cout<<"________ Before Add Your Item********THINK YOU*****"<<endl;
	}
	else{
			cout<<"________Sorry, Are you rong Input, So Before not Add Your Item********THINK YOU*****"<<endl;
	}
 }*/
	void display(){
		if(head==NULL){
			cout<<"Linked List is Empty !!! ";
		}
		else{
		node *tem=new node;
		tem=head;
		while(tem!=NULL){
			cout<<tem->data<<" ";
			tem=tem->next;
		  }
		}
	}
		
};
int main(){
	linked obj;
    int ch = 0;
    while (1) {
        cout << "\n ----Main Menu---\n";
        cout << "Choose one option from the following list : " << endl;
        cout << "1. Insert in the Beginning \n2. Insert in the Endning \n3.Linked Data Print:: \n ";
		cout<<"4. Delete in the Beginning \n5.Delete in the last \n 6. serach linked list Elements \n7. Up_date linked list Elements \n 8. Exit : " << endl;
        
		cout << "Enter your choice : " << endl;
        cin >> ch;
        switch (ch) {
            case 1:
                obj.fastInsert();
            break;
            case 2:
            	obj.EndInsert();
            	break;
           	case 3:
            	obj.display();
            	break;
            	case 4:
            		obj.begin_Delete();
            		break;
                case 5:
                	obj.last_delete();
                	break;
                case 6:
                   obj.search();
				   break;
		        case 7:
				obj.up_date();
				break;
				case 8:
				obj.Mid_add();
				break;		
            case 9:
                cout << "Exit : " << endl;
                return 0;
            default:
                cout << "Please enter a valid choice ::" << endl;
        }
    }
    return 0;
}
//#include<iostream>
//using namespace std;
//class node{
//	public:
//		int data;
//		node * next;
//};
//class Linked{
//	int item;
//   public:
//   	void fastInsert(){
//   			node *head;
//	 head=NULL;
//	 cout<<"Enter new node data add in Linked List : "<<endl;
//	 cin>>item;
//	 if(head==NULL){
//	 	head =new node;
//	 	head->data=item;
//	 	head->next=NULL;
//	 }
//	 else{
//	 	node *temp=new node;
//	 	temp->data=item;
//	 	temp->next=head;
//	 	head=temp;
//	 }
//	 node *tem;
//   tem=head;
//   while(tem){
//   	cout<<tem->data<<" ";
//   	tem=tem->next;
//   }
//	   }
//};
//int main(){
//	Linked obj;
//    int ch = 0;
//    while (1) {
//        cout << "\n ----Main Menu---\n";
//        cout << "Choose one option from the following list : " << endl;
//        cout << "1. Insert in the Beginning \n2.Insert in the lastInserted data \n 6. Display linked list Elements \n 7. Exit : " << endl;
//        cout << "Enter your choice : " << endl;
//        cin >> ch;
//        switch (ch) {
//            case 1:
//                obj.fastInsert();
//            break;
//            case 7:
//                cout << "Exit : " << endl;
//                return 0;
//            default:
//                cout << "Please enter a valid choice ::" << endl;
//        }
//    }
//    return 0;
//}
