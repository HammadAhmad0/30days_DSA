/*
check if we can partition the arr into two subarrays with equal sum.More formally
check that the prefix sum of a part of the array is equal to tha suffix sum of rest 
the arr

a[a1,a2,a3,a4]
we have to check 
a[a1+a2 == a3+a4]
a[a1+a2+a3+a4 =a5+a6]

prefix sum i=sum(a0-----ai)
suffix sum i+1=sum(ai+1..........an-1)
prefix sum i + suffix sumi+1=total sum;
suffix sumi+1=total sum -prefix sum i
*/

#include<iostream>
using namespace std;
#include<vector>
bool checkprefixsuffixsum(vector<int> &v){
    int total_sum=0;
    for(int i=0;i<v.size();i++){
       total_sum+=v[i]; 

    }
    int prefix_sum=0;
    for(int i=0;i<v.size();i++){
       prefix_sum+=v[i];
       int suffix_sum= total_sum-prefix_sum;
       if(suffix_sum==prefix_sum){
        return true;
       }
    }
    return false;

}
int main(){
int n;
cout<<"Enter size of the Arr";
cin>>n;
vector<int> v;
for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
}
cout<<checkprefixsuffixsum(v)<<endl;
}