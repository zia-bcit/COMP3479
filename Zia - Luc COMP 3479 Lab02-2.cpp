#include <iostream>
#include <sstream>
#include <iomanip>


//Lecture #2 lab #2
//Write a program that:
//1. adds integers entered by the user (ignoring input that is not an integer) until the EOF is entered
//2. prints the sum.
using namespace std;
int main() {

    int sum = 0;
    cout << "Enter an integer: ";
    //cin >> Input;
    string theInput;
    int input;
    //uint sum = 0;

    while (true) {
        cin >> theInput;
        if (cin.eof()) {
            break;
        } else if (cin.fail() || theInput.find_first_not_of("0123456789") != string::npos) {
            cout << "This is not integer, input again! " << endl;
            cin.clear();
            input = 0;
            cin.ignore(256, '\n');
        } else {
            string::size_type st;
            input = stoi(theInput, &st);
            sum = sum + input;
            streamsize prec = cout.precision();
            cout << "the Sum is: " << sum << setprecision(prec) << endl;
        }

    }

    //system("pause");
    return 0;
}