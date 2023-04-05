#include<iostream>
#include<unordered_map>
#include <vector>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int,int>mp,mp2;
    for(auto it:arr)  mp[it]++;
    for (auto it:mp)   mp2[it.second]++;
    for(auto it:mp2) if(it.second>1) return false;
    return true;
}

int main()
{
    int arr[]={1,2,2,1,1,3};
    vector<int> v(arr, arr + sizeof(arr) / sizeof(arr[0]));
    cout << uniqueOccurrences(v);
    return 0;
}


