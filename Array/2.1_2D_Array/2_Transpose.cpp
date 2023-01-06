#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter Rows And cols";
    cin>>m>>n;
    int M[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>M[i][j];
        }
    }

    int T[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          T[i][j]=M[j][i];
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<T[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}