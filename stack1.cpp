#include<iostream>
using namespace std;
class stack{
	int t=-1,n,*a,i,item;
	public:
	  stack(){
	  		cout<<"Enter the size of  Stack :: "<<endl;
			cin>>n;
			a=new int[n];
	  }
		void push(){
		 cout<<"Enter the Satck Element : "<<endl;

		 	if(t!=n-1){
		 		cin>>i;
		 		a[++t]=i;
		 		cout<<"Item Inserted : "<<i<<endl;
			 }
			 else{
			 	cout<<"Stack is overflow : "<<endl;
			 	
			 }
		}
		 
		 void pop(){
		 	 i=0;
		 	if(t==-1){
		 	
		 		cout<<"Stack is underflow :: "<<endl;
			 }
			 else{
//			 	int s=t;
			 	cout<<"Delete Item : "<<a[t]<<endl;
			 	t--;
//			 	t--;
//			 for(s=n-1;s>=0;s--){
//			 a[i]=a[i+1];	
//			 }
//			 cout<<"Delete Element : "<<endl;
			 }
		 }
		 void dis(){
		 	if(t==-1){
		 		cout<<"Stack is Empty : "<<endl;
			 }
			 else{
			 	cout<<"Stack Element :: "<<endl;
			 	for(int j=0;j<=t;j++){
			 		cout<<a[j]<< " "<<endl;
				 }
			 }
		 }
		
};
int main() {
    
    stack o;
  
   int cs;
   while(1){

  cout<<"1 Push : \n 2 Pop \n 3 Display \n 4 Exit \n";
  cin>>cs;
  switch(cs) 
  {
      case 1:
      o.push();
      break;
      case 2:
      o.pop();
          break;
    case 3:
    o.dis();
        break;
 case 4:
  return 0;
default :
cout<<"Invalid choice :"<<endl;

      
  }
   }

    return 0;
}
