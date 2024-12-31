/**
 * @brief A dynamic array (vector) class in C++
 *
 * @details This class implements a dynamic array (vector) in C++.
 *          It includes methods to add elements, print the array, get
 *          an element at a specific index, and remove an element.
 */
#include<iostream>
using namespace std;

class Vector{
    public:
    int size;
    int capacity;  ///< The current capacity of the vector
    int* arr;      ///< The array to store the elements

    /**
     * @brief Constructor for Vector
     *
     * @details Initializes the size and capacity of the vector to 0 and 1
     *          respectively, and allocates memory for the array.
     */
    Vector(){
        size=0;
        capacity=1;
        arr=new int[1];
    }

    /**
     * @brief Adds an element to the vector
     *
     * @details If the vector is full, it doubles its capacity and copies
     *          the existing elements to the new array.
     *
     * @param ele The element to add to the vector
     */
    void add(int ele){
        if(size==capacity){
            capacity*=2;
            int* newarr=new int[capacity];
            for(int i=0;i<size;i++){
                newarr[i]=arr[i];
            }
            delete [] arr;
            arr=newarr;
        }
        arr[size]=ele;
        size++;
    }

    /**
     * @brief Prints the elements of the vector
     *
     * @details Prints the elements of the vector to the console.
     */
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
         cout<<endl;
    }

    /**
     * @brief Gets an element at a specific index
     *
     * @details Returns the element at the specified index, or -1 if the
     *          index is invalid.
     *
     * @param idx The index of the element to retrieve
     * @return The element at the specified index, or -1 if the index is invalid
     */
    int get(int idx){
        if(size==0){
            cout<<"Array is empty"<<endl;
            return -1;
        }
        if(idx>=size || idx<0){
            cout<<"Invalid index"<<endl;
            return -1;
        }
        return arr[idx];
    }

    /**
     * @brief Removes an element from the vector
     *
     * @details Decreases the size of the vector by 1.
     */
    void remove(){
        size--;
    }
};

int main()
{
    Vector v;
    v.add(10);
    v.print();
    v.add(20);
    v.print();
    v.add(30);
    v.print();

    v.remove();
    v.print();  
}