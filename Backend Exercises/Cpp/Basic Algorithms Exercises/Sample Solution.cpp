#include <iostream>
using namespace std;

// Function to determine the result based on conditions involving two integers x and y
int test(int x, int y)
{
    // If x or y is between 10 and 20 (inclusive), return 18, else return the sum of x and y
    return (x >= 10 && x <= 20) || (y >= 10 && y <= 20) ? 18 : x + y;
}

int main() 
{
    // Testing the test function with different input values
    cout << test(3, 7) << endl;     // Output: 10 (sum of 3 and 7)
    cout << test(10, 11) << endl;   // Output: 18 (within the range 10-20)
    cout << test(10, 20) << endl;   // Output: 18 (within the range 10-20)
    cout << test(21, 220) << endl;  // Output: 241 (sum of 21 and 220, neither in the range 10-20)

    return 0; // Return 0 to indicate successful completion
}