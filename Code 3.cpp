#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int shr=1;
    while(shr<=n)
    {
        int j=1;
     while(j<=shr)
     {
         cout<<j;
         j++;
     }
     cout<<endl;
     shr++;
    }
    return 0;
}
