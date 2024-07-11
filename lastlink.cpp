#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
};

class linked {
public:
    node* head;

    linked()  {
	head = NULL;
	}

    void fastInsert() {
        node* ptr = new node();
        int item;
        cout << "Enter the node data : " << endl;
        cin >> item;
        ptr->data = item;
        
        if (head == NULL) {
            head = ptr;
            ptr->next = head;
        } else {
            node* temp = head;
            while (temp->next != head)
                temp = temp->next;
            temp->next = ptr;
            ptr->next = head;  // Update the next of the new node to the current head
            head = ptr;
        }
        cout << "\n Node inserted : \n";
    }
void lastInsert(){
	node *ptr=new node;
	int item;
	cout<<"Enter data  "<<endl;
	cin>>item;
	ptr->data=item;
	if(head==NULL){
		head=ptr;
		ptr->next=head;
	}
	else{
		node *temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}

		ptr->next=ptr;
		ptr->next=head;
	}
	cout<<"Item Inserted Last : "<<endl;
}
    void dis() {
        if (head == NULL) {
            cout << "Linked list is Empty : \n";
        } else {
            node* temp = head;
            do {
                cout << temp->data << " ";
                temp = temp->next;
            } while (temp != head);
            cout << endl;
        }
    }
};

int main() {
    linked obj;
    int ch = 0;
    while (1) {
        cout << "\n ----Main Menu---\n";
        cout << "Choose one option from the following list : " << endl;
        cout << "1. Insert in the Beginning \n2.Insert in the lastInserted data \n 6. Display linked list Elements \n 7. Exit : " << endl;
        cout << "Enter your choice : " << endl;
        cin >> ch;
        switch (ch) {
            case 1:
                obj.fastInsert();
                break;
//               case 2:
//			   obj.lastInsert();
//			   break; 
            case 6:
                obj.dis();
                break;
            case 7:
                cout << "Exit : " << endl;
                return 0;
            default:
                cout << "Please enter a valid choice ::" << endl;
        }
    }
    return 0;
}

