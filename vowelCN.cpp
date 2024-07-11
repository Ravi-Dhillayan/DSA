#include<iostream>
using namespace std;
#include<cstring>
class vowel{
	char str[50];
	int i,len,v=0,c=0,n=0;
	public:
		void fun(){
			cout<<"Enter the line of String : "<<endl;
		cin>>str;
			len = strlen(str);
			for(i=0;i<len;i++){
			  if (toupper(str[i]) == 'A' || toupper(str[i]) == 'E' || toupper(str[i]) == 'I' || toupper(str[i]) == 'O' || toupper(str[i]) == 'U') {
                v++;
            }
				else if(str[i]>='a'&& str[i]<='z' || str[i]>='A'&& str[i]<='Z')
				c++;
			else if (str[i] >= '0' && str[i] <= '9') {
                n++;
            }
			}
			cout<<"vowels :: "<<v<<endl;
			cout<<"Consonance :: "<<c<<endl;
			cout<<"Number :: "<<n<<endl;
		}
};
int main(){
	vowel obj;
	obj.fun();
	return 01;
}
