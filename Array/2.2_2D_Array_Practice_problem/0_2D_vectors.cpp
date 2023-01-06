/*
2D--> vector of vector dataType
vector<vector<datatype>> vector_name;
eg vector<vector<int>> ve;
let us suppose that
vector<int> v1={1,2,3}
vector<int> v2={4,5}
vector<int> v3={6,7}
vector<vector<int>> V={v1,v2,v3}
{{1,2,3},{4,5},{6,7}}

creating 2d vector of size nxm
2D--> vector<vector<int>> V(n,vector<int> (m));
v={{1,2,3},
{4,5,6,7},
{8,9}};
1D--> vector<int> v(n);

2D vector of 3x4
vector<vector<int>> V(3,vector<int> (4));
 if we want to initialize with 0 :)
 then---
3x4
vector<vector<int>> V(3,vector<int> (4,0));

*/