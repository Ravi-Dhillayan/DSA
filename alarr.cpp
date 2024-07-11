#include<iostream>
using namespace std;
class ar{
	int i,item,n,*a,temp;
	public:
		void fun(){ // function is Example for fast index Enter new Element 
			cout<<"Enter the Size of array : "<<endl;
			cin>>n;
			cout<<"Enter the array Element : "<<endl;
			a=new int[n];
			for(i=0;i<n-1;i++){
				cin>>a[i];
				
			}
			cout<<"Your array Element : "<<endl;
			for(i=0;i<n-1;i++){
				cout<<a[i]<<endl;
			}
			cout<<"How many new Element insert to fast index : "<<endl;
			cin>>item;
			for(i=n-1;i>=0;i--){
			   temp=a[i];
			   a[i]=a[i+1];
			   a[i+1]=temp;
			   if(i==0){
			   	a[i]=item;
			   }
			}
			cout<<"new Element inserted : "<<endl;
			for(i=0;i<n;i++){
				cout<<a[i]<<" ";
			}
		}
		void bubb() // it is a bubble short
		{
				cout<<"Enter the Size of array : "<<endl;
			cin>>n;
			cout<<"Enter the array Element : "<<endl;
			a=new int[n];
			for(i=0;i<n;i++){
				cin>>a[i];
				
			}
			cout<<"Shorted Your array : "<<endl;
			for(i=0;i<n;i++){
				int j;
				for(j=i;j<n;j++){
					if(a[i]>a[j]){
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
					
				}
			}
			for(i=0;i<n;i++){
				cout<<a[i]<<" ";
			}	
		}
		void insertion()// Insert short using array Shoted 
		{
					cout<<"Enter the Size of array : "<<endl;
			cin>>n;
			cout<<"Enter the array Element : "<<endl;
			a=new int[n];
			for(i=0;i<n;i++){
				cin>>a[i];
				
			}
		 for(i=0;i<n;i++){
		 	for(int j=i;j>0;j--){
		 		if(a[j-1]>a[j]){
		 			temp=a[j-1];
		 			a[j-1]=a[j];
		 			a[j]=temp;
				 }
			 }
		 }
		 cout<<"Insert short using array Shoted "<<endl;
		 for(i=0;i<n;i++){
		 	cout<<a[i]<<" ";
		 }	
		}
		void selection() // Selection short using array Shorted 
				{
						cout<<"Enter the Size of array : "<<endl;
			cin>>n;
			cout<<"Enter the array Element : "<<endl;
			a=new int[n];
			for(i=0;i<n;i++){
				cin>>a[i];
				
			}
			int min;
			for(i=0;i<n-1;i++){
				min=i;
				for(int j=i+1;j<n;j++){
					if(a[min]>a[j])
				{
						min=j;
				}
				}
				
					temp=a[min];
					a[min]=a[i];
					a[i]=temp;
			}
			cout<<"Selection Short using Array Shorted : "<<endl;
			for(i=0;i<n;i++){
				cout<<a[i]<<" ";
			}
				}
};
     // Search the Element for array 
     class search{
    
     	public:
     void linear(){
     	 	int i,j,*a,n,item;
     	  	 cout<<"How many  Size of array "<<endl;
     	cin>>n;
     	a=new int[n];
     	cout<<"Enter the array Element : "<<endl;
     	for(i=0;i<n;i++){
     		cin>>a[i];
     		
		 }
		 cout<<"Enter the Item you are Search : "<<endl;
		 cin>>item;
		 for(i=0;i<n;i++){
		 	if(a[i]==item){
		 		cout<<"Item Loaction "<<i+1<<" and item value "<<item;
		 		break;
			 }
		 }
	 }
		void bin(){
			int i,n,*a,lr=0,up,item,mid,f=0;
				 cout<<"How many  Size of array "<<endl;
     	cin>>n;
     	a=new int[n];
     	cout<<"Enter the array Element : "<<endl;
     	for(i=0;i<n;i++){
     		cin>>a[i];
     		
		 }
		 cout<<"Enter the search Element : "<<endl;
		   cin>>item;
		 up=n;
		 mid =lr+up;
		 for(i=0;i<n;i++){
		 	if(a[mid]==item){
		 	   cout<<"item Locaciton "<<a[i]<<"Item found : "<<endl;
		 		
			 }
			 else if(a[mid]>item){
			 	mid++;
			 }
			 else{
			 	mid--;
			 }
		 }
			
		} 
	 };
	 class stack{
	 	int i,n,*a,item,t=-1;
	 	public:
	 		stack(){
	 			cout<<"How many Size of array : "<<endl;
	 		cin>>n;
			 a=new int[n];	
			 }
	 	void push(){
	 	 
	 	  	if(t!=n-1){
	 	  		 cout<<"Enter Satck Element : "<<endl;
		 		cin>>i;
		 		a[++t]=i;
		 		cout<<"Item Inserted : "<<i<<endl;
			 }
		   else{
		   cout<<"Stack is overflow :: "<<endl;
		   }
	 		
		 }
		 void pop(){
		 	if(t==-1){
		 		cout<<"Stack is underful : "<<endl;
			 }
			else{
			 	cout<<"Delete Item : "<<a[t]<<endl;
			 	
			 	t--;
		       }
		 }
		 void dis(){
		 	if(t==-1){
		 		cout<<"Stack is Empty : "<<endl;
			 }
			 else{
			 	cout<<"Stack Element : "<<endl;
			 	for(i=0;i<=t;i++){
			 		cout<<a[i]<<endl;
				 }
			 }
		 }
	 };
	 class Queck{
	 	int i,j,*a,n,f=-1,r=-1,item;
	 	public:
	 		Queck(){
	 			cout<<"Enter the Queck Size :"<<endl;
	 			cin>>n;
	 			a=new int[n];
	 			
			 }
			 void push(){
			 	if(r==n-1){
			 		cout<<"Queck is overflow : Exit  :"<<endl;
			 		
				 }
				 else{
				 	cout<<"Enter Element : "<<endl;
				 	cin>>item;
				 	if(f==-1){
				 		f=r=0;
					 }
					 else{
					 	r++;
					 
					 }
					 	a[r]=item;
				 }
			 }
			 void pop(){
			 
			 	if(r==-1){
			 		cout<<"Queck is underflow : "<<endl;
			 		
				 }
				 else{
				 		cout<<"  Delete Item:: "<<a[f]<<endl;
			 
			 	if(f==r){
			 		f=r=-1;
				 }
				 else{
				 	f++;
				 }
				 }
			 }
			 void show(){
			 	if(f==-1){
			 		cout<<"Queck is Empty :: "<<endl;
				 }
				 else{
				 	cout<<"Queck Element Printed :: "<<endl;
				 	for(i=f;i<=r;i++){
				 		cout<<a[i]<<" ";
					 }
				 }
			 }
	 };
int main(){
		Queck o;
	int choice;
		cout<<"Enter 1 push Element in stack \n Enter 2 pop Element	\n Enter 3 Display stack Element : \n Enter 4 Exit : "<<endl;
		while(1){
			cout<<"Enter the Your choice :: "<<endl;
			cin>>choice;
			switch(choice){
			 case 1:
			 o.push();
			 break;
			 case 2:
			 o.pop();
			 break;
			 case 3:
			 o.show();
			 break;
			 case 4:
			 cout<<"Exit :: "<<endl;
			 break;
			 return 0;
			 default:
			 cout<<"Invalid choice ::"<<endl;	
			}
		}
//	stack so;
//	int choice;
//		cout<<"Enter 1 push Element in stack \n Enter 2 pop Element	\n Enter 3 Display stack Element : \n Enter 4 Exit : "<<endl;
//		while(1){
//			cout<<"Enter the Your choice :: "<<endl;
//			cin>>choice;
//			switch(choice){
//			 case 1:
//			 so.push();
//			 break;
//			 case 2:
//			 so.pop();
//			 break;
//			 case 3:
//			 so.dis();
//			 break;
//			 case 4:
//			 cout<<"Exit :: "<<endl;
//			 break;
//			 return 0;
//			 default:
//			 cout<<"Invalid choice ::"<<endl;	
//			}
//		}
//	ar obj;
//	obj.fun();
//   obj.bubb();
//   obj.insertion();
//     obj.selection();



//   search sobj;
//   sobj.linear();
//   sobj.bin();
   return 0;
   
}
