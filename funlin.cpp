#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
class lin{
 	node *head;
     	node *ptr=new node;
     	int i,n,*a;
     public:
    
     	void fun(){
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
			 int t=1;
			 for(i=0;i<n;i++){
			 	
			 	cout<<"Item Inserted : "<<t<<" and value : "<<a[i]<<endl;
			 	t++;
			 }
		 }

};
int main(){
	lin obj;
	obj.fun();
}

