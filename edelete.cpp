#include<iostream>    // array of element delete remandle
using namespace std;
class A{
	int p,n,i,j;
	public:
		void fun(){
			cout<<"Enter the size of array : "<<endl;
			cin>>n;  //5
			int *a;
			a=new int[n];
			cout<<"Enter the array Elemnet : "<<endl;
			for(i=0;i<n;i++)
			{
				cin>>a[i]; //1 2 3 4 5 
			}
			cout<<"printed array : "<<endl;
			for(i=0;i<n;i++){
				cout<<a[i]<<endl; //1 2 3 4 5 
			}
			cout<<"Enter the position you are deleted : "<<endl;
			cin>>p; // 2
			for(i=0;i<n;i++){
				if(p==a[i])
				{
					p=a[i]; //2
				}
				
			}
			cout<<"Deleted Element : "<<a[p]<<endl; // 3  error 
			for(j=p;j<n;j++){
				a[j]=a[j+1];  
			}
			
			cout<<"Deleted position : "<<p<<endl; // 2 //good 
			for(i=0;i<n-1;i++){
				cout<<a[i]<<endl;
			}
		}
};
int main()
{
	A obj;
	obj.fun();
	return 0;
}
