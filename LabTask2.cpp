#include <iostream>
#include <string>
using namespace std;

void Operators()
{
    char operators[] = {'+', '-', '*', '/', '#', '=', '%'};
    string input;

    cout << "Enter an expression: ";
    cin >> input;

    int opCount = 1;
    for (char c : input) {
        for (char op : operators) {
            if (c == op) {
                cout << "operator" << opCount << ": " << c << endl;
                opCount++;
                break;
            }
        }
    }

    if (opCount == 1) {
        cout << "No operators found in the input." << endl;
    }
}

int LabTask2A() {
    Operators();
    return 0;
}
