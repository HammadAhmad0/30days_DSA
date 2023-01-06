/*
pascals Triangle 

for n=5;
                 1
               1   1 
             1   2   1
            1  3   3  1
          1  4  6   4   1

          here Rows = 5; 

 columns|                  
    1   |   1
    2   |   1 1
    3   |   1 2 1
    4   |   1 3 3 1
    5   |   1 4 6 4 1
    (1) colums no.= Row no.. in particular Row
    
        0c0
        1c0 1c1
        2c0 2c1 2c2
        3c0 3c1 3c3 3c4
        4c0 4c1 4c2 4c3 4c4 

    ncr=n!*r!(n-r)!
    (2) a[i][j]=icj

    2nd Way
    (1)columns = row_numbers_ at particular Row
    (2) a[i][i] = icj
    (3) a[i][j] = a[i-1][j]+a[i-1][j-1];
    (4)Boundries  nc0=1 and ncn=1

*/
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

vector<vector<int> > pascalTriangle(int n){
    vector<vector<int>> pascal(n);

    for(int i=0;i<n;i++){
       pascal[i].resize(i+1);
       
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i){
                pascal[i][j]=1;
            }
            else{
                pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
                
            }
        }

    }
    return pascal;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> ans;
    ans=pascalTriangle(n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";

        }
        cout<<endl;

    }

}