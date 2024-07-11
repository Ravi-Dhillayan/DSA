#include<iostream>
using namespace std;
class node {
	public:
	int data;
	node* next;
};
class lin{
	int i=0,*a,n,item;
	public:
			node *head;
	node *ptr=new node();
		lin(){
//			head=NULL;
			cout<<"Enter the Size of linked last : : "<<endl;
			cin>>n;
			a=new int[n];
		}

	void get(){
		
		head=NULL;
		if(ptr==NULL){
			cout<<"Linked last Overflow :: "<<endl;
			
		}
		else{
			cout<<"Enter Item :: "<<endl;
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
	void fie(){ // Element to be inserted first
		
	}
	void set(){
		for(int j=0;j<i;j++){
			int s=1;
		 cout<<"printed "<<s<<" Item :: "<<a[j]<<endl;
		 s++;	
		}
	}
};
int main(){
	lin obj;
	int cs;
    while(1){
    	cout<<"1 Enter Element last : \n 2 Enter the front Element \n 3 Enter Display \n 4 Enter Exit :"<<endl;
    	cin>>cs;
    	switch(cs){
    		case 1:
    			obj.get();
    			break;
    			case 2:
    				obj.fie();
    				break;
        	case 3:
    			obj.set();
    			break;
    		case 4:
    			cout<<"Exit :: "<<endl;
    			return 0;
    		default :
    			cout<<"Rong Input :: "<<endl;
    		
    	}
}
  return 0;
}
