#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0, c = 0;  // initialize variables

    // Initialize pointers
    int *p = nullptr, *q = nullptr, *r = nullptr;

    // Ask user for input
    cout << "Enter 3 integer values: " << endl;
    cin >> a >> b >> c;

    // Allocate memory for the pointers
    p = new int;  // allocate memory for one integer
    q = new int;
    r = new int;

    // Assign the values from the variables to the pointers
    *p = a;
    *q = b;
    *r = c;

    // Output the values of the variables and what the pointers point to
    cout << "a: " << a << endl;  // print the value of a
    cout << "b: " << b << endl;  // print the value of b
    cout << "c: " << c << endl;  // print the value of c

    cout << "p: " << *p << endl;  // print the value that p points to
    cout << "q: " << *q << endl;  // print the value that q points to
    cout << "r: " << *r << endl;  // print the value that r points to

    // Free the memory
    delete p;
    delete q;
    delete r;

    return 0;  // end the program
}
