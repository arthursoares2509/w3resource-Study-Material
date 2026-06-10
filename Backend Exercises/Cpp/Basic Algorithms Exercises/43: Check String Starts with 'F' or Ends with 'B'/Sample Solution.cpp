#include <iostream>
using namespace std;

// Function to process a string according to specific conditions
string test(string str)
{
    // Check if the string starts with 'F' and ends with 'B'
    if ((str.substr(0, 1) == "F") && (str.substr(str.length() - 1, 1) == "B"))
    {
        return "FizzBuzz"; // Return "FizzBuzz" if conditions are met
    }
    // Check if the string starts with 'F'
    else if (str.substr(0, 1) == "F")
    {
        return "Fizz"; // Return "Fizz" if the string starts with 'F'
    }
    // Check if the string ends with 'B'
    else if (str.substr(str.length() - 1, 1) == "B")
    {
        return "Buzz"; // Return "Buzz" if the string ends with 'B'
    }
    else
    {
        return str; // Return the original string if none of the conditions are met
    }
}

int main() 
{
    // Test cases for the test function
    cout << test("FB") << endl;     // Output: FizzBuzz (starts with 'F' and ends with 'B')
    cout << test("Fsafs") << endl;  // Output: Fizz (starts with 'F')
    cout << test("AuzzB") << endl;  // Output: Buzz (ends with 'B')
    cout << test("founder") << endl;// Output: founder (no condition met)
    return 0;      
}