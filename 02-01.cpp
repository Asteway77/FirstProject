#include <iostream>

using namespace std;


int main() {
    int number = 17;
    // postincrement
    cout << "postincrement: " << number++ << endl;
    cout << "number before exit: " << number << endl;
    // preincrement
    int number2 = 17;
    cout << "preincrement: " << ++number2 << endl;
    cout << "number before exit: " << number2 << endl;
}
