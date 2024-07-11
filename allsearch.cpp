#include<iostream>
using namespace std;
class linear{
	int i,j,*a,n,item;
	public:
		linear(){  // Linear Search 
			cout<<"Enter the array size :: "<<endl;
			cin>>n;
			a=new int[n];
			cout<<"Enter the Array Element : "<<endl;
			for(i=0;i<n;i++){
				cin>>a[i];
			}
			cout<<"Enter the search Element : "<<endl;
			cin>>item;
			for(i=0;i<n;i++){
//				if(a[i]==item)
                 if(i==item){
					cout<<"Item found "<<a[i]<<" Location : "<<i+1<<endl;
				}
			}
		
			if(i>=n)
			{
				cout<<"Item not found : "<<endl;
			}
		}
};
class Bin{  // Binary search 
   int i,n,lr=0,up,f=0,mid,t,*a;
   public:
   	Bin(){
   		cout<<"Enter the array Size : "<<endl;
   		cin>>n;
   		a=new int[n];
   		cout<<"Enter the Array Element : "<<endl;
   		for(i=0;i<n;i++){
   			cin>>a[i];
		   }
		   up=n;
		   cout<<"Enter the search Element : "<<endl;
		   cin>>t;
		   while(lr<=up){
		   	mid=(lr+up)/2;
		   	if(a[mid]==t){
		   		f=1;
		   		break;
			   }
			   else if(a[mid]>t){
			   	  up =mid+1;
			   }
			   else{
			   	 up=mid-1;
			   }
		   }
		   if(f==1){
		   		cout<<"Item found "<<a[mid]<<" Location : "<<mid+1<<endl;
		   }
		   
	   }
	
};
int main(){
	linear obj;
//	Bin ob;
	return 0;
}
