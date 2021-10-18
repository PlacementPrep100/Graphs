#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin>>n;
	int h,s;
	cin>>h>>s;
	int arr[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]<=h)
		{
			count++;
		//	dbg(count);
		}
		else{
			int val=h-s;
		//	dbg(val);
		    int k=arr[i]/(val);
		 //   dbg(k);
		    int rem=arr[i]%val;
		    if(k>=1)
		    {  // 5 2      10    3 +5+2  5-2+5-2  6+5   6
		    	int a=(k-1)*val;
		    	//dbg(a);
		    	arr[i]-=a;
		    //	dbg(arr[i]);
		    	if(arr[i]<=h)
		    	{
		    		count+=k+1;
		    	}

		    	else{

		    		count+=(k-1)+2;


		    	}

		    }
		}
	}
	cout<<count;
	return 0;
}
