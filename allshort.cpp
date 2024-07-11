#include<iostream>
using namespace std;
class bubble{  /// bubble short
	int n,i,j,temp;
	int *a;
	public:
     bubble(){
     	cout<<"Enter the size of array :"<<endl;
     	cin>>n;
     	a=new int[n];
     	cout<<"Enter the array Element : "<<endl;
     	for(i=0;i<n;i++){
     		cin>>a[i];
		 }
		 cout<<"Shorted printed Array : "<<endl;
		 for(i=0;i<n;i++){
		 	for(j=i;j<n;j++){
		 		if(a[i]>a[j])
          {
          	   temp=a[i];
             a[i]=a[j];
             a[j]=temp;
		  }
             
			 }
		
			 
		 }
		 	 for(i=0;i<n;i++){
			 	cout<<a[i]<<endl;
			 }
	 }
};
class selection{
	int i,j,min,n,*a,temp;
  public:
  	selection(){
  		cout<<"Enter the size of array : "<<endl;
  		cin>>n;
  		a=new int[n];
  		cout<<"Enter the Array Element : "<<endl;
  		for(i=0;i<n;i++)
    {
    	  		cin>>a[i];
	}
  		for(i=0;i<n-1;i++){
  			min=i;
  			for(j=i+1;j<n;j++){
  				if(a[min]>a[j]){
  					min=j;
				  }
			  }
			  temp=a[i];
			  a[i]=a[min];
			  a[min]=temp;
		  }
		  cout<<"Shorted Your Array : "<<endl;
		  for(i=0;i<n;i++){
		  	cout<<a[i]<<endl;
		  }
	  }	  
};
template <class T>
struct fun {
	T n;
};

class insertion {    // insertion short of short array 
   struct fun <int> o;
	int i,j,temp;
	public:
		void in(){
			cout<<"enter the Size of array : "<<endl;
			cin>>o.n;
			int *a =new int[o.n];
			cout<<"Enter the Inshorted Array : "<<endl;
			for(i=0;i<o.n;i++){
				cin>>a[i];
				
			}
			for(i=0;i<o.n;i++){
				for(j=i;j>0;j--){
					if(a[j-1]>a[j]){
						temp=a[j-1];
						a[j-1]=a[j];
						a[j]=temp;
					}
				}
			}
			cout<<"Your array Shorted Prented : "<<endl;
			for(i=0;i<o.n;i++){
				cout<<a[i]<<endl;
			}
		}
};
int main(){
//	bubble obj;
//   selection ob;
 insertion obj1;
 obj1.in();
   return 0;
	
}
