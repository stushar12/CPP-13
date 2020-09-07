#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
map <int,int> ump;
     int arr[]={10,20,20,10,30,40,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    for (int i=0;i<k;i++)
    {
        ump[arr[i]]++;
    }

cout<<ump.size()<<" ";

for(int i=k;i<n;i++)
{
    ump[arr[i-k]]--;
    if (ump[arr[i-k]]==0)
    ump.erase(arr[i-k]);
    ump[arr[i]]++;
    cout<<ump.size()<<" ";
}





}