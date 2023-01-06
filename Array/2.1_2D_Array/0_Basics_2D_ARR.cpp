/* datatype arr_name[size1][size2]......[sizen];
2D Arr
datatype arr_name[row][col];

     |     col0     col1    col2
Row0 |   a[0][0]  a[0][1] a[0][2]
     |
Row1 |   a[1][0]  a[1][1] a[1][2]
     |
Row2 |   a[2][0]  a[2][1] a[2][2]
     |
Row3 |   a[3][0]  a[3][1] a[3][2]



int arr[4][3];
rows --> 4
cols --> 3
for representing a[i][j]
i-> row no.
j-> col no.
no.of element =n*m

int arr[2][3]={1,2,3,4,5,6};
or int arr[2][3]={{1,2,3},{4,5,6}};


for 3D Arr
3x2x4
3 2D Arr of[2x4];

       col0         col1         col2          col3            |
Row0  a[0][0][0]   a[0][0][1]   a[0][0][2]   a[0][0][3]        |
Row1  a[0][1][0]   a[0][1][1]   a[0][1][2]    a[0][1][3]         |  INDEX 0
   
      col0         col1         col2          col3             |
Row0  a[1][0][0]   a[1][0][1]   a[1][0][2]   a[1][0][3]        |
Row1  a[1][1][0]   a[1][1][1]   a[1][1][2]   a[1][1][3]         |  INDEX 1 
   
         col0         col1         col2          col3          |
Row0  a[2][0][0]   a[2][0][1]   a[2][0][2]   a[2][0][3]        |
Row1  a[2][1][0]   a[2][1][1]   a[2][1][2]    a[2][1][3]       |  INDEX 2

   
Taking input in 2D ARr
for(int i=0;i<row;i++){
    for(int j=0;j<clos;i++){
        cin>>a[i][j];
    }
}

used for representing grids
why Multi ?
because its faster and simpler access in multi Dimensional arr

*/

#include<iostream>
using namespace std;
int main(){
    int Rows,cols;
    cout<<"Enter rows and col";
    cin>>Rows>>cols;
    int a[Rows][cols];
    for(int i=0;i<Rows;i++){
        for(int j=0;j<cols;j++){
            cin>>a[i][j];
        }
    }
     for(int i=0;i<Rows;i++){
        for(int j=0;j<cols;j++){
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }

}