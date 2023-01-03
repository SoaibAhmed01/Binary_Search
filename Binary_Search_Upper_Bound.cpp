//Binary Search with Lower Bound
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int x;
    cin>>x;
    int UB=-1;
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]>x)
        {
            UB=mid;
            high=mid-1;
        }
        else if(x>=arr[mid])
        {
            low=mid+1;
        }
    }
    cout<<UB<<endl;
return 0;
}
