#include <iostream>
using namespace std;
// Define constants NIL and MAX
#define NIL -1
#define MAX 100
// Declare a global integer array of size MAX
int Array[MAX];
// Function to initialize the array with NIL value
void initialize() {
    for (int i = 0; i < MAX; i++) {
        Array[i] = NIL;
    }
}
// Function to calculate the Fibonacci number of a given integer n
int fib(int n) {
    if (Array[n] == NIL) {
        if (n <= 1) {
            Array[n] = n;
        }
        else {
            Array[n] = fib(n - 1) + fib(n - 2);
        }
    }
    return Array[n];
}
// Main function where the program execution starts
int main()
{
    int n;
    cout << "Enter a number to calculate his fibonacci: " << endl;
    cin >> n;
    initialize();
    cout << "Fibanacci number is " << fib(n)<<endl;
    system("pause");
}
