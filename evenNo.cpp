#include<iostream>
using namespace std;
//0 -> ODD
//1 -> EVEN
bool isEven(){
    int n;
    cin>>n;
    if(n&1){
        return 0;
    }
    return 1;
}
int main()
{
    int ans = isEven();
    cout << ans << endl;
    return 0;
}