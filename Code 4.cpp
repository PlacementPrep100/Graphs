#include <iostream>
using namespace std;
int main() {
	int count=0,ruby,no;
	cin>>ruby;
	while(ruby--){
	cin>>no;
	while(no!=0)
	    {
	        if(no%10==4){
	            count++;
	           }
	  no=no/10;
	    }
	  cout<<count<<endl;
	}
	return 0;
}
