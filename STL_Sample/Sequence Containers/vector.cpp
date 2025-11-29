// ## MOST IMPORTANT DATA STRUCTURE FOR DSA IN CPP
// vector dynamically allocates memory to increase or decrease in size
// may be slower than classical arrays for time critical operations

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // empty declaration

    vector<int> v1;

    // declare with size and fill with a value

    vector<int> v2(3,5);

    cout<<"elements of the filled vector: "<<endl;

    for(auto x: v2){
        cout<< x <<" ";
    }
    cout<<endl;


    // inserting elements in the vector
    // push_back(value) adds at the end of a vector in O(1) time
    // insert(position, value) inserts at the given position in O(N) time

    vector<char> v_char = {'a','b','c'};

    v_char.push_back('t');

    // the position in the insert method is given as a pointer
    v_char.insert(v_char.begin()+2,'f');

    //## vectors have two main pointers to reference position relative to them:
    // v.begin(), and v.end()

    cout<<"start of vector using pointer: "<<*v_char.begin()<<endl;
    cout<<"end of vector using pointer: "<<*v_char.end()<<endl;

    //## as you can see the end pointer is a nullpointer after all the elements in the vector
    // for the last element we would use -1 before dereferencing the pointer

    cout<<"last element using end pointer: "<<*(v_char.end()-1)<<endl;


    cout<<"Elements of the character vector: "<<endl;

    for(auto x : v_char){
        cout<<x<<" ";
    }
    cout<<endl;

    // you can also access the vector elements using at(i)
    // it will throw an exception if i is out of range

    // cout<< v_char.at(10);

    // update element using [] operator

    v_char[0] = 'z';

    for(auto x : v_char){
        cout<<x<<" ";
    }
    cout<<endl;

    // get the vector size using size() method like array

    cout<<"size of the vector: "<<v_char.size()<<endl;


    // delete elements using v.erase()
    // used in conjunction with the find() function it can find and delete a particular element
    // takes O(n) time

    v_char.erase(find(v_char.begin(),v_char.end(),'f'));


    // v.pop_back method takes O(1) time and deletes the last element

    v_char.pop_back();

    for(auto x: v_char){
        cout<<x<<" ";
    }
    cout<<endl;

    // check if vector is empty using .empty()

    if(v_char.empty()){
        cout<<"char vector is empty"<<endl;
    }
    else{
        cout<<"char vector is not empty"<<endl;
    }

    // you can also make multi dimentional vectors like arrays

    return 0;
}   
