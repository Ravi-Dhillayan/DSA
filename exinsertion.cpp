#include<iostream>
using namespace std;
class insertion{
	int i,j,n,*a,temp;
	public:
		void fun(){
			cout<<"Enter the Size of array : "<<endl;
			cin>>n;
			a=new int[n];
			cout<<"Enter unshorted array : "<<endl;
			for(i=0;i<n;i++){
				cin>>a[i];
			}
			for(i=0;i<n;i++){
				for(j=i;j>0;j--){
					if(a[j-1]>a[j]){
						temp=a[j-1];
						a[j-1]=a[j];
						a[j]=temp;
					}
				}
			}
			cout<<"Printed the Shorted array : "<<endl;
			for(i=0;i<n;i++){
				cout<<a[i]<<" ";
			}
		}
};
int main(){
	insertion obj;
	obj.fun();
}
