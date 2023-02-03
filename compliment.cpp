//compliment my solution in binary output
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,ans=0,i=0;
    cin>>n;
    while(n){
        int  bit = !(n&1);
        ans= bit*pow(10,i)+ans;
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}