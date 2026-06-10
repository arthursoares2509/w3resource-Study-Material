#include <iostream>
using namespace std;

string test(string str) {

    if ((str.substr(0, 1) == "F") && (str.substr(str.length() - 1, 1) == "B"))
    {
        return "FizzBuzz"; 
    }
    
    else if (str.substr(0, 1) == "F")
    {
        return "Fizz"; 
    }
    
    else if (str.substr(str.length() - 1, 1) == "B")
    {
        return "Buzz"; 
    }
    else
    {
        return str; 
    }
}

int main() {
    cout << test("FB") << endl;
    cout << test("Fsafs") << endl;  
    cout << test("AuzzB") << endl;  
    cout << test("founder") << endl;
    return 0;      
}