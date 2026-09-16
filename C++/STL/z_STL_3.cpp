//=================================================================================
//! STL algorithms work on ranges [start, end) — end is never included
//=================================================================================

#include<iostream>
#include<map>
#include<string>
 
using namespace std;
 
int main(){

//todo: ------------ map -----------------
//* syntax for declaration --->  map <data_type_of_key,   data_type_of_value>  variable_name;
//* Map is an associative array
//! In maps the key is .first and value is .second
//================================================================================================


    map<string, int>  marksMap;
//*            KEY         VALUE
    marksMap["Atul"]    =   58;
    marksMap["Rohit"]   =   57;  
    marksMap["Kishlay"] =   78;
    marksMap["Aditya"]  =   65;
    marksMap["Sachin"]  =   53;

//todo: ================================================================================================

//*Another method to insert elements in map is using insert 
//! syntax ---> marksMap.insert({pair_1,pair_2......pair_n});

     marksMap.insert( { {"Rohan", 89}, {"Akshat", 46} } );
//--------------------------------------------------------------------------------------------------
 
    // map<string,int> :: iterator iter;
    // for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    // {
    //     cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    // }

    for(auto it : marksMap){
        cout << it.first <<" "<< it.second<<endl;
    }

    return 0;
}
