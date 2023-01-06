/*
Given a boolean 2D Array,where each row is sorted.Find the row with the 
maximum number of 1s
input row 3, col =4
matrix{{0,1,1,1},
{0,0,0,1},
{0,0,0,1}}

output:0
*/
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int MaximumOnesRow(vector<vector<int> >&v){
int maxOnes=INT_MIN;
int maxOnesRow=-1;
int columns=v.size();
for(int i=0;i<v.size();i++){
    for(int j=0;j<v[i].size();j++){
        if(v[i][j]==1){
            int numberOfOnes=columns-j;
            if(numberOfOnes>maxOnes){
                maxOnes=numberOfOnes;
                maxOnesRow=i;
            }
            break;
        }
    }
}
return maxOnesRow;


}
int main(){


int n,m;
cin>>n>>m;
vector<vector<int>> vec(n,vector<int> (m));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       cin>>vec[i][j];
    }
}
int res=MaximumOnesRow(vec);
cout<<res<<endl;
return 0;
}