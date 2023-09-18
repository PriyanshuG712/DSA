#include<bits/stdc++.h>

using namespace std;

void f(int ind, vector<int> &ds,int arr[], int n)
{
    if(ind>=n)
    {
        for(auto i: ds)
        {
            cout<<i<<  " ";
        }
        if(ds.size()==0)
        {
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    f(ind+1,ds,arr,n);
    //take or pick element for the particular subsequence
    ds.push_back(arr[ind]);
    f(ind+1,ds,arr,n);
    // not pick elements for subsequence
    ds.pop_back();
}

int main()
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    vector<int> ds;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    f(0,ds,arr,n);
}