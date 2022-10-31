// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 2 Question 3
// October 30, 2022


#include <iostream>  

using namespace std;

int *ReverseMultiply (int *list, int size); // return pointer integer
int *ReverseAdd (int *list, int size);


int main(){
    int size;
    int *listArray = new int[size];

    cout << "Enter the number of entries: ";
    cin >> size;

    for (int i = 0; i < size; i++){
        cout << "Entry " << i << " is:   ";
        cin >>  listArray[i];
    }
    cout << "*****" << endl;

    int *multArray = ReverseMultiply(listArray, size);
    int *addArray = ReverseAdd(listArray, size);


    // Print the original, first and second array
    cout << "Original array is: ";
    for (int i = 0; i < size; i++){
        cout << listArray[i] << " ";
    }
    cout << "and the address of the zero element is: " << &listArray << endl;
    
    cout << "One array is: ";
    for (int i = 0; i < size*2+1; i++){
        cout << multArray[i] << " ";
    }
    cout << "and the address of zero element is: " << &multArray << endl;

    cout << "Two array is: ";
    for (int i = 0; i < size*2-1; i++){
        cout << addArray[i] << " ";
    }
    cout << "and the address of zero element is: " << &addArray << endl;


    delete []listArray;
    delete []multArray;
    delete []addArray;

    return 0;
}


int *ReverseMultiply(int *listArray, int size){
    int *mult = new int[size*2+1];
    int i = 0;
    int i2 = size-1;
    int multTotal = 1;

    for(; i < size;){
        mult[i] = listArray[i];     // move all of the listArray into add array
        i++;
    }
    for(; i2 >= 0; i2--){
        mult[i] = listArray[i2];
        // cout << i << " " << mult[i] << endl;
        i++;
    }

    // Multiply all in mult array
    for(int j = 0; j < (size*2); j++){
        multTotal *= mult[j];
        // cout << mult[j] << endl;
    }

    mult[i] = multTotal;


    return mult;
    // delete []mult;
}


int *ReverseAdd(int *listArray, int size){
    int *add = new int[size*2-1];
    int i = 0;
    int j = size-1;

    for(; i < size; i++){
        add[i] = listArray[i];
    }
    for(; i < size*2-1; i++){
        add[i] = listArray[j] + listArray[j-1];
        j--;
    }

    return add;
    // delete []add;
}