#include<iostream>
using namespace std;
class in{
	int i,n,*a,item,loc;
	public:
		void fun(){
			cout<<"Enter the array Size : "<<endl;
			cin>>n;
			a=new int[n];
			cout<<"Enter the Element : "<<endl;
			for(i=0;i<n-1;i++){
				cin>>a[i];
				
			}
			cout<<"Your new Element Location : "<<endl;
			cin>>loc;
			cout<<"Enter the new Element : "<<endl;
			cin>>item;
		int	t=loc;
			for(i=n;i>=t;i--){
//				int temp=a[i];
//			  a[i]=item;
           a[i]=a[i-1];	
			}
		
			a[t]=NULL;
				for(i=0;i<n;i++){
				if(a[i]==NULL){
				  a[i]=item;	
				}
			}
			cout<<"array Element : "<<endl;
			for(i=0;i<n;i++){
				cout<<a[i]<<endl;
			}
		}
};
int main(){
	in obj;
	obj.fun();
	return 0;
}
