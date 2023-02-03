#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n,i=0,ans=0;
    cin>>n;
    while(n){
        int dig=n%10;
        ans=pow(2,i)*dig+ans;
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}
