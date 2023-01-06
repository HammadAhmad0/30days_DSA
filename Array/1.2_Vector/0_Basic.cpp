//vectors are dynamic(means we can resize when you want to insert/delete elements) arrays
/* declaration 
#include<vector>
vector<data_type> vector_name;
if we want to specify the size then
vector<data_type> vector_name[size];
vector<int> v1[5];
*/

/* Operations in vectors 
i) Size
size=  v1.size()
let v1.size()=5

ii) Resize 
v1.resize(new_size for eg-6)
v1.size()=>6

iii) Capacity
[size are capacity does not same But capicity>=Size]
v1.capacity()

iv) Add element
<end of the element>
v1.pushback(element)

v)Insert
insert element at particular position
v1.insert(position(1st elemet=>v1.begin()),element)
also for v1.end()

ex-
v1.insert(v.begin()+2,5)
v)Delete elements
v1.pop-back()
for particular pos
v.erase(position)


*/
