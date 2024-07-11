#include<iostream>
using namespace std;
 class st{
     int i,j,n,*a,t=-1,item;
     public:
     st(){
         cout<<"Enter the Stack Element Size : "<<endl;
         cin>>n;
         a=new int[n];
     }
     void push(){
         if(t==n-1){
             cout<<"Overflow Stack : "<<endl;
         }
         else{
             cout<<"Enter Stack ELement : "<<endl;
             cin>>item;
             a[++t]=item;
             cout<<"Item Inserted : "<<a[t]<<endl;
         }
     }
     void pop(){
         if(t==-1){
             cout<<"Underflow : "<<endl;
         }
         else{
             item=a[t];
             t--;
             cout<<"Delete Item : "<<a[t]<<endl;
         }
     }
     void dis(){
     	if(t==-1){
     		cout<<"Stack Empty : "<<endl;
		 }
     else{
     	    cout<<"Stack Element : "<<endl;
         for(i=0;i<=t;i++){
             cout<<a[i]<<endl;
         }
	 }
     }
 };
  /// Example of Queuk
  class Q{
  	int i,*a,n,f=-1,r=-1,j,item;
  	public:
  		Q(){
  		   cout<<"Enter the Queuk Element Size : "<<endl;
         cin>>n;
         a=new int[n];	
		  }
		void Enter(){
		  if(r==n-1){
		  	cout<<"Queuk is Overflow : "<<endl;
		  }
		  else{
		  		cout<<"Queck Element Enter : "<<endl;
			  	cin>>item;
		  	if(f==-1){
		  		f=r=0;
			  }
			  else{
			  	r++;
			  }
			  	a[r]=item;
			  	cout<<"Item Inserted : "<<a[r]<<endl;
		  }
		}
		void del(){
			if(r==-1){
				cout<<"Underflow : Queck "<<endl;
				
			}
			else{
				if(f==r){
					f=r=-1;
				}
				else{
					cout<<"Item Delete : "<<a[f]<<endl;
					f++;
				}
			}
		}
		void dis(){
			if(f==-1){
				cout<<"Queck Empty : "<<endl;
			}
			else{
				for(j=f;j<=r;j++){
					cout<<a[j]<<endl;
				}
			}
		}
  };
 int main(){
     cout<<"Enter 1 push Element \n Enter 2 pop \n Enter 3 display \n Enter 4 Exit"<<endl;
//     st class comment
     Q obj;
     int choice;
     while(1){
     	cout<<"Enter your Choice : "<<endl;
     	cin>>choice;
     	switch(choice)
        {
        	 case 1:
         obj.Enter();
         break;
         case 2:
         	obj.del();
         	break;
         	case 3:
         		obj.dis();
         		break;
         		case 4 :
         			cout<<"Exit : "<<endl;
         			return 0;
     
		}
	 }
 }
