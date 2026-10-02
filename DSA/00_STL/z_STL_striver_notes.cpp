//todo:-------------------------------- PAIRS --------------------------------

//*for a pair ---> (1,3)
//! Syntax ---> pair<int , int> p = {1 , 3};
//? cout << p.first << p.second;

//*for a triplet ---> (1,3,4)
//! Syntax ---> pair< int , pair <int , int > > p = {1 , {3,4}};
//? cout << p.first << p.second.second << p.second.first

//*for array ---> {(1,2) , (2,5) , (5,1)}
//! Syntax ---> pair<int , int>arr[] = { {1,2} ,  {2,5} , {5,1} }
//? cout << arr[1].second 
//* The datatype in the pair can be changed.


//todo:--------------------------------VECTORS--------------------------------

vector<int> v;
v.push_back(1);             //? Use it when the object is defined 
v.emplace_back(2);          //? Use it when you want to create a object inside the vector

Both push_back and emplace_back adds an element to vector. 
// ----------------------------------------
✔ Use push_back when:
You already have an object

Student s("A", 20);
v.push_back(s);

//------------------------------------------
✔ Use emplace_back when:
You are passing constructor arguments

v.emplace_back("A", 20);

//-------------------------------------------

vector<pair<int,int>> vec;
vec.push_back({1,2});
vec.emplace_back(1,2);

vector<int> v(5,10);  ----> {10,10,10,10,10}   //! size = 5 , value = 10.
vector<int> v(5);     ----> {              }   //! size = 5 , value = any garbage value

//* Accessing elements of vector.

//todo:  suppose vector v = {10,20,30,40,50}
So, 1] cout<<v[1];     //used widely
    2] cout<<v.at(1);  //isn't used widely

vector<int> :: iterator it = v.begin();
cout<< *(it);
//*this prints 10 as --> it <-- points to adress of begin() that is first element of vector.
it++;
cout<< *(it);
//*this will print 20 as --> it <-- points to 20 after it++.

Similarly, vector<int> :: iterator it = v.end();
//! in the vector v , begin() points to first element that is 10 AND
//! end() points to the element after last element.
//! v = {10,20,30,40,50,end} though end isn't actually visible in vector 
//! but there exists an invisible imaginary element after the last element.
//! [end() points to that element ].

cout<< v.back();   -----> prints the last element of the vector.

//*To print the entire vector --->

//todo: METHOD 1

for(vector<datatype>::iterator it = v.begin() ; it != v.end() ; it++){
    cout << *(it);
}
-----------------------------------------------------------------------------------------------

//todo: METHOD 2

for(auto it = v.begin() ; it != v.end() ; it++){
    cout << *(it);
}

auto keyword automatically checks the data type and assigns it.
for example ---> if I write auto a = 5; ..... using auto it automatically checks that '5' 
is an integer and hence assigns is "int" data type.

similarly here auto it ---> assigns it vector data type automatically.
-----------------------------------------------------------------------------------------------

//todo: METHOD 3

for(auto it : v){
    cout << it;
}

automatically iterates till end of the vector.
//! auto it = *it; --> the compiler automatically assigns the value as it not the address of element.

---------------------------------------------------------------------------------------------------------------------------------------------

//* To delete elements of vector 
v = {10,20,30,40,50,60,70,80,90,100}

v.erase(v.begin() + 1);  // deletes the element in vector at v.begin()+1

v.erase(v.begin() + 2  , v.begin() + 4) //deletes range of elements in vector.[v.begin()+2,v.begin()+4)
output ----> So, begin() = 10 
             therefore begin() + 2 = 30 
             and begin() + 4 = 50
             so //! It will erase elements 30 , 40.
             //! PLS NOTE --> It will not delete 50 bcz in vectors [start,end)
             //! end means the elements after last one in deletion range(here).

//* To insert elements 
v = {10,20,30,40,50}

//todo:  input                                  output
vector<int> v(2,100);                    ---> {100,100}
vector<int> v(v.begin() , 300)           ---> {300,10,20,30,40,50}
vector<int> v(v.begin()+1 , 2 , 100)     ---> {10, 100, 100, 20, 30, 40, 50}


//* SWAP

v1={1,2}
v2={3,4}

v1.swap(v2);  ---> v1={3,4} and v1={1,2}

//*clear

v.clear(); ---> erases the entire vector.


//todo:-------------------------------------------------- LIST -----------------------------------------------

list<int> ls;

ls.push_back()
ls.emplace_back()

ls.push_front()
ls.emplace_front()

//Rest funtions are same as vector.


//todo:---------------------- DEQUEUE ----------------------------
deque<int> dq;


//todo:------------------------------------------- STACK -------------------------------------------

// STACK is LIFO = Last In First Out

stack<int> st;

st.push(1);       ---> {1}  
st.push(2);       ---> {2,1}
st.push(3);       ---> {3,2,1}
st.push(4);       ---> {4,3,2,1}   
st.emplace(5);    ---> {5,4,3,2,1}   

cout<< st.top();  ---> prints 5

st.pop();         ---> {4,3,2,1}   
cout<< st.size()  ---> prints 4
cout<< st.empty() ---> prints 0 // 0 means false, the stack isn't empty

st1.swap(st2);    ---> swaps stack 1 and 2


//todo:------------------------------------------- QUEUE -------------------------------------------

// QUEUE is FIFO = First In First Out

queue<int> q;

q.push(1);       ---> {1}  
q.push(2);       ---> {1,2}
q.push(3);       ---> {1,2,3}
q.push(4);       ---> {1,2,3,4}   
q.emplace(5);    ---> {1,2,3,4,5}

q.back() += 5;    ---> {1,2,3,4,10}

cout<< q.back();  ---> prints 10
cout<< q.front(); ---> prints 1

q.pop()           ---> {2,3,4,10}

//todo:--------------------------------------- PRIORITY QUEUE ---------------------------------------
//! PRIORITY QUEUE arranges the elements largest to smallest by default.

//priority queue to show largest value elements on top. 
//! It is known as MAX HEAP.

priority_queue<int> pq;

pq.push(3)            ---> {3}
pq.push(5)            ---> {5,3}          
pq.push(10)           ---> {10,5,3}                
pq.push(7)            ---> {10,7,5,3}                                     
pq.emplace(1)         ---> {10,7,5,3,1}

pq.top()              ---> 10
pq.pop()

//priority queue to show smallest value elements on top. 
//! It is known as MIN HEAP.

priority_queue<int , vector<int> , greater<int>> pq;

pq.push(3)            ---> {3}
pq.push(5)            ---> {3,5}          
pq.push(10)           ---> {3,5,10}                
pq.push(7)            ---> {3,5,7,10}                                     
pq.emplace(1)         ---> {1,3,5,7,10}

pq.top                ---> 1

//! TIME COMPLEXITY OF :-

push and pop = log n 
top = O(1)


--------------------------------------- SET ---------------------------------------

//! FOR SET REMEMBER ----> 1) sorted (Arranges smalllest to largest by default)
//!                        2) unique (no repetition of elements)

set<int> st;

st.insert(1);          --->  {1}                    
st.insert(2);          --->  {1,2}                      
st.insert(2);          --->  {1,2}  //will not add 2 again.                                   
st.insert(5);          --->  {1,2,5}                                   
st.emplace(3);         --->  {1,2,3,5}                                       

int count = st.count(2);  ---> It will return the number time 2 occurs in the set. here = 1.

suppose st = {1,2,3,4,5}

auto it = st.find(3);  ---> Returns an iterator pointing to 3
auto it = st.find(8);  ---> Returns st.end() if the element isn not found.

st.erase(5)           ---> {1,2,3,4} //erases out 5

auto it1 = st.find(2);
auto it2 = st.find(4);
st.erase(it1 , it2) ---> {1,4,5}

st.lower_bound(2);
st.upper_bound(5);

//todo: ----------------------------------  MULTI-SET -------------------------------------

multiset<int> ms;
ms.insert(1);     ---> {1}
ms.insert(1);     ---> {1,1}
ms.insert(1);     ---> {1,1,1}

ms.erase(1);      ---> All 1's are erased.
int count = ms.count(1);

ms.erase(ms.find(1)); ---> only one 1 is erased.
ms.erase(ms.find(1), ms.find(1)+2); --->find the first occurence of '1' then go till 2
                                        i.e, find the second occurence of '1' and erase it.

//todo: ---------------------------------- UNORDERED SET -------------------------------------

It will have any order i.e, no priority wise sorting. 
It will have unique elements i.e, no repetition.

time complexity = O(1)

// Rest all the operations are same as set.
//! Just the lower_bound and upper_bound doesn't work here.

//todo: ---------------------------------- MAP -------------------------------------

//! MAP stores data in ascending order(smallest to largest).
//* data = (key,value)
//! key - value pair. 
//! Key is unique while value can be same . 
//ex --->  key = 1 , value = a 
//         key = 6 , value = a

map<int , int> mpp;
map<int , pair<int , int>> mpp;
map<pair<int , int> , int> mpp;

mpp[1] = 2;             --->  key = 1 , value = 2
mpp.emplace({3,1});     --->  key = 3 , value = 1
mpp.insert({2,4});      --->  key = 2 , value = 4

mpp[{2,3}] = 10;        --->  key = (2,3) , value = 10

for(auto it: mpp){
    cout << it.first << it.second;     
}

//! if the element does not exist in the map ---> mpp.end() is the output.

//todo: ---------------------------------- MULTI-MAP -------------------------------------

everything same as map, //! It has dupicate keys.

//todo: ---------------------------------- UNORDERED MAP -------------------------------------

unique keys

//todo: ----------------------------------  -------------------------------------



