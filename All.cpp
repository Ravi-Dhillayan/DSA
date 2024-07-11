#include<iostream>
using namespace std;
class All{
	int i,j,*a,n,temp,min;

	public:
		void boble(){
			cout<<"Enter the Array Size : "<<endl;
			cin>>n;
			a=new int[n];
			cout<<"Enter the unshorted Array Elements : "<<endl;
			for(i=0;i<n;i++){
				cin>>a[i];
			}
			cout<<"printed the Shorted : "<<endl;
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					if(a[i]<a[j]){
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
			for(i=0;i<n;i++){
				cout<<a[i]<<" "<<endl;
			}
		}
		void selection(){
			cout<<"Enter the Array Size : "<<endl;
			cin>>n;
			a=new int[n];
			cout<<"Enter the unshorted Array Elements : "<<endl;
			for(i=0;i<n;i++){
				cin>>a[i];
			}
			cout<<"printed the Shorted : "<<endl;
			for(i=0;i<n-1;i++){
				min=i;
				for(j=i;j<n;j++){
					if(a[min]>a[j]){
						min=j;
					}
				}
			  temp=a[i];
			  a[i]=a[min];
			  a[min]=temp;
			  
			}
			for(i=0;i<n;i++){
				cout<<a[i]<<" ";
			}
			
		}
		void insherted(){
			cout<<"Enter the Array Size : "<<endl;
			cin>>n;
			a=new int[n];
			cout<<"Enter the unshorted Array Elements : "<<endl;
			for(i=0;i<n;i++){
				cin>>a[i];
			}
			cout<<"printed the Shorted : "<<endl;
			for(i=0;i<n;i++){
				for(j=i;j>0;j--){
					if(a[j-1]>a[j]){
						temp=a[j-1];
						a[j-1]=a[j];
						a[j]=temp;
						
					}
				}
			}
			for(i=0;i<n;i++){
				cout<<a[i]<<" ";
			}
		}
		void linear(){
			cout<<"Enter the Size of array Element "<<endl;
			cin>>n;
			a=new int[n];
			cout<<"Enter the array Element : "<<endl;
			for(i=0;i<n;i++){
				cin>>a[i];
			}
			cout<<"Who you want to search Element : "<<endl;
			int item;
			cin>>item;
			for(i=0;i<n;i++){
				if(item==a[i]){
					cout<<"Element found location : "<<i+1<<" and Element : "<<a[i];
				}
			}
		}
		void binary(){
				int elem,f=0,lr=0,mid;
				
			cout<<"Enter the size array Element : "<<endl;
			cin>>n;
			a=new int[n];
			mid=(lr+n)/2;
			cout<<"Enter the array Element : "<<endl;
			for(i=0;i<n;i++){
				cin>>a[i];
			}
			cout<<"Enter the Element who you wnat to search Element : "<<endl;
			cin>>elem;
			for(i=0;i<n;i++){
				if(a[mid]==elem){
					f=1;
				}
				else if(a[mid]>elem){
					mid--;
				}
				else{
					mid++;
				}
			}
			if(f==1){
				cout<<"item Found location : "<<mid+1<<" and item : "<<a[mid];
			}
			else{
				cout<<"This item not found for Array : "<<endl;
			}
		}
		
};
int main(){
	All obj;
//	obj.boble();
//    obj.selection();
//   obj.insherted();
//     obj.linear();
     obj.binary();
	return 0;
}
