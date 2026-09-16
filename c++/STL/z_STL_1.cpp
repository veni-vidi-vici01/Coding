#include<iostream>
#include<vector>
using namespace std;

//------------------------------------------------------
//* syntax to define a vector :- 
//! vector<data_type> vector_name;
//------------------------------------------------------


//todo:  ------------- push_back() and size(): ---------------------
//* size() ---> size of vector
//* push_back() ---> adds an element to the vector at last position

template <class T>
void display(vector<T> &v){              //! Here vector<int> is like a datatype. like :- display(int v)
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){ 
    vector<int> vec1;         //*  zero length integer vector
    int element, size;

    cout<<"Enter the size of your vector"<<endl;
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element number "<<i<<":"<<endl;
        cin>>element;
        vec1.push_back(element);
    }

    display(vec1);    

//todo: ------------ popback and popfront(removes the first element) -----------------------
    vec1.pop_back();
    display(vec1);

//todo: ----------- iterator -----------------------
//! syntax ---->   vector<int> :: iterator any_name = vec1.begin();

    vector<int> :: iterator iter = vec1.begin();  //! begin () points the iterator to the starting of the vector.
    vec1.insert(iter,566);

    display(vec1);

//todo: ----------- v.at(i) -----------------------
//! v.at(i) can be used instead of v[i]. They will work the same.
    
    vector<char> vec2(4);        //*  4-element character vector
    vector<char> vec3(vec2);     //*  4-element character vector from vec2
    vector<int> vec4(6,3);       //*  6-element vector of 3s [6 times 3]
  
    display(vec2);   //! vec2 and vec3 are NOT empty.
    display(vec3);   //! They contain 4 null characters ('\0'), so nothing visible is printed.   
    display(vec4);

    return 0;
}
