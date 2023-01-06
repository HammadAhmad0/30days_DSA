/*
[a1,a2,a3,a4,a5,a6]
l=2
r=6
{a2+a3+a4+a5+a6}
here l and r is one based indexing
*/
#include<iostream>
using namespace std;
#include<vector>
int main(){

    int n;
    cout<<"enter size of arr";
    cin>>n;

vector<int> v(n+1,0);
for(int i=1;i<n;i++){
    cin>>v[i];
}

//calculate prefix sum arr
for(int i=1;i<=n;i++){
    v[i]+=v[i-1];
}
int q;
cout<<"Enter quries";
cin>>q;
while(q--){
    int l,r;
    cout<<"Enter l r";
    cin>>l>>r;
    int ans=0;
    //ans=prefixsumarr[r]-prefixsumarr[l-1];
     ans=v[r]-v[l-1];
     cout<<ans<<" ";
}
return 0;

}