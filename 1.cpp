#include<iostream>
using namespace std;
class node{
	public:
	int data;
	 node* next;
};
class link{
	public:
		node* head;
		link(){
			 head=nullptr;
		}
		void bin(){
			node* ptr=new node;
			if(ptr == nullptr){
				cout<<"\nOVERFLOW: "<<endl;
			}
			else{
				int item;
				cout<<" \n Enter the value : "<<endl;
				cin>>item;
				ptr->data=item;
				ptr->next=head;
				
				head=ptr;
				cout<<"Item Inserted : "<<item<<endl;
			}
		}
};
int main(){
	link obj;
	obj.bin();
	return 0;
}
