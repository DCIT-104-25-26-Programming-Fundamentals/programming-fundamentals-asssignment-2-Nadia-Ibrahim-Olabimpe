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

int total(int numbers[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }

    return sum;
}

float mean(int numbers[], int size)
{
    int sum = total(numbers, size);

    return (float)sum / size;
}

int maximum(int numbers[], int size)
{
    int max = numbers[0];

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    return max;
}

int minimum(int numbers[], int size)
{
    int min = numbers[0];

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }

    return min;
}

int main()
{
    int size;

    cout << "How many numbers? ";
    cin >> size;

    
    if (size <= 0)
    {
        cout << "Error: Number of values must be a positive integer." << endl;
        return 0;
    }

    int numbers[100];


    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }


    cout << "\nResults:" << endl;
    cout << "Sum: " << total(numbers, size) << endl;
    cout << "Average: " << mean(numbers, size) << endl;
    cout << "Maximum: " << maximum(numbers, size) << endl;
    cout << "Minimum: " << minimum(numbers, size) << endl;

    return 0;
}
