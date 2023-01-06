// data structures which stores a collection of homogenous items.
//homogenous means same data types like int,char,bool
//Array have contiguous memory-->means consecutive blocks of memory
//Array are 0-indexed it means items always start from 0 index
/* 
data_type array_name[array_size]
example:- 
int arr[5];or
int arr[]={1,2,3,4,5};
*/
//Types of Array-->(i)single dimensional Array (ii)Multi(like 2d,3d,....) dimensional Arrar

/* Size of array 
int arr[5];
size=sizeof(arr)/sizeof(arr[0]);
*/     
/* for eachloop(data_type:variable){
}
example-->
int arr={1,2,3,4};
for(int element:arr){
    cout<<element<<endl;
}
limitation-It will traverse to every elements of array
for taking input in for each
int arr[5];
for(int &element:arr)
cin>>element;
*/

