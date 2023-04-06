#include<iostream>
#include<unordered_map>
//find the duplicate elements
using namespace std;
void findDuplicate(int arr[]){
    unordered_map<int,int> mp,mp2;
    for (int i=0;i<6;i++)mp[arr[i]]++;
    for (auto i:mp){
        if(i.second>1){
            cout<<i.first<<endl;
        }
    }
}
int main()
{
    int arr[]={1,2,3,4,2,4};
    findDuplicate(arr);
    return 0;
}