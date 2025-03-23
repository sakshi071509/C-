#include <iostream>
using namespace std;

int main()
{
    int number = 60;
    if (number > 0) {
        cout << "The number is positive." << endl;
        if (number % 2 == 0) {
            cout << "The number is even." << endl;
        } else {
            cout << "The number is odd." << endl;
        }
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
