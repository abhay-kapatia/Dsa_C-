#include<iostream>
#include<math.h>
using namespace std;
//REVERSE OF A NO.(LEET)
int main()
{
    int n,ans=0;
    cin>>n;
    while(n){
        int digit = n%10;
        if((ans > INT32_MAX/10)||(ans < INT32_MIN/10)){
            return 0;
        }
        ans =( ans*10)+digit;
        n= n/10;
    }
    cout<<ans<<endl;
    return 0;
}