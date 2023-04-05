#include<iostream>
#include<unordered_map>

using namespace std;

bool uniqueOccurrences(int arr[]) {
    unordered_map<int,int>mp,mp2;
    for(int i=0;i<6;i++)  mp[arr[i]]++;
    for (auto i : mp)   mp2[i.second]++;
    for(auto i : mp2) if(i.second>1) return false;
    return true;
}

int main()
{
    int arr[]={1,2,2,1,1,3};
    cout << uniqueOccurrences(arr);
    return 0;
}


