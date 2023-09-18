#include<bits/stdc++.h>

using namespace std;

void f(int ind, vector<int> &ds,int s, int sum,int arr[], int n)
{
    if(ind==n)
    {
        if(s==sum)
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
        }
        
        return;
    }
    //take or pick element for the particular subsequence
    ds.push_back(arr[ind]);
    s+=arr[ind];
    f(ind+1,ds,s,sum,arr,n);
    // not pick elements for subsequence
    ds.pop_back();
    s-=arr[ind];
    f(ind+1,ds,s,sum,arr,n);
}

int main()
{
    int n, sum;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    vector<int> ds;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the sum"<<endl;
    cin>>sum;
    f(0,ds,0,sum,arr,n);
}