#include<iostream>
using namespace std;
class no_repeating{
	int i,j,t=0,*a,n;
	bool rep;
	public:
		void fun(){
			cout<<"Enter the Size of array : "<<endl;
			cin>>n;
			a=new int[n];
			cout<<"Enter the Array Element : "<<endl;
			for(i=0;i<n;i++){
				cin>>a[i];
			}
			cout<<"printed the Array Element : "<<endl;
			for(i=0;i<n;i++){
//				t=0;
                rep=false;
				for(j=0;j<n;j++){
					if(i!=j && a[i]==a[j]){
//						t=1;/
                       rep=true;
						break;
					}
					
				}
//				if(t==0){
                 if(!rep){
					cout<<a[i]<<" ";
				}
			}
		}
};
int main(){
	no_repeating obj;
	obj.fun();
	return 0;
}
