#include<iostream>
using namespace std;
class node {
	public:
	int data;
	node* next;
};
class lin{
	public:
	node *head;
  lin(){
  	head=NULL;
  }
	node* ptr=new node;
		void fun(){
			int i,n,*a;
			cout<<"Enter the Size of array : "<<endl;
			cin>>n;
			a=new int[n];
			cout<<"Enter the array Element : "<<endl;
			for(i=0;i<n;i++){
				cin>>a[i];
				ptr->data=a[i];
				ptr->next=head;
				head=ptr;
			}
//			n=n+1;
			cout<<"Enter the Last Last Element : "<<endl;
//			int item;
//			cin>>item;
			for(i=0;i<=n;i++){
				if(ptr=NULL){
					cin>>a[i];
					ptr->data=a[i];
					ptr->next=head;
					head=ptr;
				}
			}
			cout<<"Printed Your array Element : "<<endl;
			for(i=0;i<=n;i++){
				cout<<a[i]<<endl;
			}
		}
	
};
int main(){
	  lin obj;
	  obj.fun();
	  return 0;
}
