#include<iostream>
using namespace std;
int main(){
    
    int m1,n1;
    cout<<"Enter rows and col";
    cin>>m1>>n1;
    int A[m1][n1];
    cout<<"Enter Mat A ele";
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            cin>>A[i][j];
        }
    }
    int m2,n2;
    cout<<"Enter Rows and col ";
    cin>>m2>>n2;
    cout<<"Enter mat B ele";
    int B[m2][n2];
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            cin>>B[i][j];
            
        }
    }
    if(n1!=m2){
        cout<<"Mat Mul Not possible";
    }
    else{
    int Ans[m1][n2];
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            int val=0;
            for(int k=0;k<n1;k++){
                val+=A[i][k]*B[k][j];
            }
             Ans[i][j]=val;
        }
       
    }
    cout<<"Multiplication of A and B mat is --"<<endl;
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            cout<<Ans[i][j]<<" ";
        }
        cout<<endl;
        
    }
    }
}