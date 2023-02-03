#include<iostream>
using namespace std;
//calculates the number of positive bits in a number
int calculate(int a, int b){
    int c=0;
    while(a||b){
        if((a&1)){
            c++;
        }
        if((b&1)){
            c++;
        }
        a=a>>1;
        b=b>>1;
    }
    return c;
}
int main()
{
    int n,m;
    cin >> n>>m;
    cout << calculate(n,m)<<endl; 
}