#include<bits/stdc++.h>

using namespace std;

int f(int ind,int s, int sum,int arr[], int n)
{
    int l,r;
    // condition not satisfied
    // This can only be done is all elements are +ve
    if(s>sum)
    {
        return 0;
    }
    if(ind==n)
    {
        if(s==sum)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    //take or pick element for the particular subsequene
    s+=arr[ind];
    l=f(ind+1,s,sum,arr,n);
    // not pick elements for subsequence
    s-=arr[ind];
    r=f(ind+1,s,sum,arr,n);
    return l+r;
}

int main()
{
    int n, sum;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the sum"<<endl;
    cin>>sum;
    cout<<f(0,0,sum,arr,n);
}