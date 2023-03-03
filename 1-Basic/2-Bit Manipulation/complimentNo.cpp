//compliment of base 10
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=n;
    int mask =0;
    if(n==0){
        int ans=1;
        return 0;
    }
    while(m){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int ans =(~n)&mask;
    cout<<ans<<endl;
    return 0;
}