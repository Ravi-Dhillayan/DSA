#include<iostream>
using namespace std;
class bin{
	int n,*a,item,f=0,fs=0,l,search;
	public:
		void fun(){
			cout<<"Enter the Size array : "<<endl;
			cin>>n;
			cout<<"Enter the Shorted  array Element : "<<endl;
			a=new int[n];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			cout<<"Enter you search item : "<<endl;
			cin>>item;
			search=(fs+n)/2;
			for(int i=0;i<n;i++){
				if(a[search]==item){
				
					i=n;
				}
				else if(a[search]<item)
				search++;
					else{
				search--;
			}
			
				
			}
		
			cout<<"item location : "<<search<<" and item value : "<<a[search]<<endl;
		}
};
int main(){
	bin obj;
	obj.fun();
	return 0;
}
