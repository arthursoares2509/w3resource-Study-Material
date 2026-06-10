#include <iostream>
using namespace std;

int test(int x, int y){
    return (x >= 10 && x <= 20) || (y >= 10 && y <= 20) ? 18 : x + y;
}

int main() {
    cout << test(3, 7) << endl;  
    cout << test(10, 11) << endl;   
    cout << test(10, 20) << endl;   
    cout << test(21, 220) << endl;  

    return 0; 
}
