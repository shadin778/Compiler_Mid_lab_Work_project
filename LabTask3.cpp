#include <iostream>
#include <string>
using namespace std;

int LabTask3A() {


    cin.ignore();

    string line;
    cout << "Enter a line: ";
    getline(cin, line);
    int start = 0;
    while (start < line.length() && line[start] == ' ')
        start++;
    if (line[start] == '/' && line[start + 1] == '/')
        cout << "It's a single line comment." << endl;
    else if (line[start] == '/' && line[start + 1] == '*') {
        if (line.find("*/", start + 2) != string::npos)
            cout << "It's a multi-line comment (in one line)." << endl;
        else
            cout << "It's the start of a multi-line comment." << endl;
    } else
        cout << "It's not a comment." << endl;
    return 0;
}


