// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 3
// =============================================================================
//
// TASK: Array Statistics Calculator
//
// Write a C++ program that reads a collection of numbers from the user
// and computes key statistical values using separate functions.
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT / OUTPUT EXAMPLE
// -----------------------------------------------------------------------------
//
//   How many numbers? 5
//   Enter number 1: 4
//   Enter number 2: 7
//   Enter number 3: 2
//   Enter number 4: 9
//   Enter number 5: 1
//
//   Results:
//   Sum:     23
//   Average: 4.6
//   Maximum: 9
//   Minimum: 1
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - You MUST implement each calculation in its own function (see scaffold).
// - You may NOT use any standard library functions like accumulate(), max(),
//   or min(). Implement the logic yourself using loops.
// - N must be a positive integer. If the user enters 0 or a negative number,
//   print an error message and stop.
//

//
// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
using namespace std;

int total(int number){
    for (i=0; i<number.length; i++){
        total= total + number[i];
        return total;
    }
    return 0;
}

float mean(int number){
    total= total (int number);
    mean= total/ number;
    return mean;
    return 0;
}

int maximum(int number){
    maximum=[0]
    for (i=0; i<number; i++){
        if (maximum< number[i]){
            maximum= number[i];
            return maximum;
        }
    }
    return 0;
}

int minimum(int number){
    minimum=[0]
    for (i=0; i<number; i++){
        if (minimum< number[i]){
            minimum= number[i];
            return minimum;
        }
    }
    return 0;
}

int main(){
    number= []
    cout << "How many numbers?: "<< endl;
    cin<< num_of_numbers<< endl;

    for (i=0; i<num_of numbers+1; i++){
        cout<< "Enter number "+[i] + ":" "<<endl;
        cin<< number<<endl;
        number.append(num_of_numbers);
    }
    if (number<=0){
        cout<< "Error: Number must be a positive integer!"<<endl;
    }
    else{
        total(int)(int number)= Results
        cout<< Results<<endl;
    }

    return 0;
}
