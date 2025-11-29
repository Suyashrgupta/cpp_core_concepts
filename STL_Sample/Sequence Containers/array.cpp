// Advantage of stl arrays over c style arrays:
// - Knows its own size unlike classical arrays
// - Prevents array decay such as when passing pointer into a function
// - More efficient and light weight

#include <iostream>
#include <array>
#include <tuple> // for overloaded get() function for arrays

using namespace std;

int main()
{
    // initialization
    array<int,6> arr = {1,2,3,4,5,6};

    // using different ways of accessing elements

    cout<<"using at(): ";
    cout<< arr.at(3)<<endl;

    cout<<"using get: ";
    cout<< get<2>(arr) <<endl;

    cout<<"using operator [ ]: ";
    cout<< arr[1]<<endl;

    // front and back methods to return references to the front and back of the array respectively

    int &a = arr.front();
    int &b = arr.back();

    cout<<"front of the array: "<< a <<endl;
    cout<<"back of the array: "<< b << endl;

    // changing these referenced values changes the front and back as they are references through pointers

    a = 10;
    b = 60;
    
    cout<<"array after updating first and last elements: "<<endl;
    for (int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;

    // size and max size

    cout<<"Size of array: "<<arr.size()<<endl;

    cout<<"Max elements array can hold: "<<arr.max_size()<<endl;

    array<int,6> arr1 = {6,5,4,3,2,1};

    // swap the elements of one array with another using swap method

    arr.swap(arr1);

    cout<<"array elements after swapping: "<<endl;

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // empty function returns true if array is empty

    cout<<"Is the array empty: "<<arr.empty()<<endl;

    // fill function fills the array with the given element

    arr.fill(1);

    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}