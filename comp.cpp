#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long int l;
int main()
{
    ios_base::sync_with_stdio(false);
    l n;
    ll left,right;
    ll arr[1000009];
    cin>>n>>left>>right;
    ll a[1000009][1000009];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(l i=0;i<n;i++)
    {
        a[i].fill(arr[i]);
    }

    return 0;
}
