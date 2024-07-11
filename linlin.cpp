#include<iostream> Linked List 
using namespace std;
class node{
	public:
	int data;
	node *next;
};
class lin {
	int i=0,*a,n;
	public:
	node *head=NULL;
	node *ptr=new node();
  lin(){
  	cout<<"Enter the Size of Linked List : "<<endl;
  	cin>>n;
  	a=new int[n]; 
  	
  }
  void in(){
  	  
  	   if(ptr==NULL){
  	   	cout<<"Linked list is Overflow : "<<endl;
  	   	
		 }
		 else{
		 	cout<<"Enter the Item : "<<endl;
		 	cin>>a[i];
		 	if(i==n-1){
		 		ptr=NULL;
		 		
			 }
			 else{
			 	ptr->data=a[i];
			 	ptr->next=head;
			 	head=ptr;
			 	i++;
			 }
		 }
  }
  void dis(){
  	if(head==NULL){
  		cout<<"Linked list is Empty : "<<endl;
  		
	  }
	  else{
	  	cout<<"Your Linked List Element Printed : "<<endl;
	  	for(int j=0;j<=i;j++){
	  		cout<<a[j]<<endl;
		  }
	  }
  }
	
		

};
int main(){
	lin ob;
		int cs;
    while(1){
    	cout<<"1 Enter Element : \n 2 Enter Display \n 3 Enter Exit :"<<endl;
    	cin>>cs;
    	switch(cs){
    		
    		case 1:
    			ob.in();
    			break;
    			case 2:
    				ob.dis();
    				break;
    				case 3 :
    					cout<<"Exit : "<<endl;
    					return 0;
    					default :
    						cout<<"Enter you are rong Input : "<<endl;
    						
		}
}}

