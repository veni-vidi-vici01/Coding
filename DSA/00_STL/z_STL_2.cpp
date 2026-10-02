#include<iostream>
#include<list>
 
using namespace std;

//todo: -------------- list ----------------------
//* syntax ---> list<int> :: iterator any_name;


void display(list<int> &LST){      //! list<int> is like a data type and LST is a formal parameter.
    list<int> :: iterator it;      //! You cannot use indexing like LST[0] in list, so iterators are required

//=======================================================================================   
    for (it = LST.begin(); it != LST.end(); it++)
    
    //! IMP ----> begin() points to first element that is 5 here.
    //! but end() does not point to 12. it's like -->  5 7 1 9 12 end()
    
    //=================================================================================
    //! STL algorithms work on ranges [start, end) — end is never included
    //=================================================================================
    
//========================================================================================

    {
        cout<<*it<<" ";
    }
    
}
 
int main(){
    
    list<int> list1;  //empty list of 0 length
 
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
 
    display(list1);
    cout<<endl;

    list<int> list2(3);  //empty list of length 3
    list<int> :: iterator it = list2.begin();
    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;
 
    display(list2);
    cout<<endl;
    
//todo: ------------------- remove -----------------------

    list1.remove(9);           //remove(element);
    display(list1);
    cout<<endl;

//todo: ------------------ sort ----------------------

    list1.sort();
    display(list1);

    return 0;
}