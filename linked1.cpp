#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
};

class link {
	 int n;
	  int *a;
	   int i=0;
public:
    node* head;


  node* ptr = new node;
// node * ptr=head;

     link(){
     	  cout<<"Enter the size of array :  "<<endl;
        cin>>n;
        a=new int[n];
	 }
    void bin() {
    	      head = NULL;
      
//        for(int i=0;i<n;i++)
//        {
        
        if (ptr == NULL) {
            cout << "\nOVERFLOW: " << endl;
        } else {
//            int item;
            cout << "\nEnter the value: ";
 
            cin >> a[i];
            if(i==n-1){
            	ptr=NULL;
			}
          else{
          	  ptr->data = a[i];
            ptr->next = head;
            head = ptr;
            i++;
//            cout<<head<< " "<<ptr<<endl;
           
		  }
            	
		}
//        }
    
    }
    void last(){
    	node *ptr,*temp;
    	int item;
       if(ptr==NULL){
       	cout<<"\n OVERFLOW : "<<endl;
	   }
	   else
	   {
	   	cout<<"\n Enter the value : ";
	   	cin>>item;
	   	ptr->data=item;
	   	if(head==NULL){
	   		ptr->next=NULL;
	   		head =ptr;
	   		cout<<"Item Inserted : "<<endl;
	   		
		   }
		   else{
		   	temp=head;
		   	while(temp->next!=NULL){
		   		temp=temp->next;
			   }
			   temp->next=ptr;
			   ptr->next=NULL;
		   }
	   }
    	
	}
    void dispaly(){
    	  for(int j=0;j<=i;j++){
        	 cout<<" printed Item Insearted : "<<a[j]<<endl;
		}
	}
};

int main() {
	
    link obj;
  
    int cs;
    while(1){
    	cout<<"1 Enter Element : \n 3 Enter Display \n 4 Enter Exit :"<<endl;
    	cin>>cs;
    	switch(cs){
    		case 1:
    		  obj.bin();
			  break;
			  case 2:
			  	obj.last();
			  	break;
			  case 3:
			     obj.dispaly();
				 break;
			case 4 :
			 cout<<"Exit : \n";
			 return 0;
			 default :
			 	cout<<"Your Enter rong Input :: "<<endl;
		}
	}
	
    
//    obj.last();
//    obj.dispaly();
    return 0;
}

