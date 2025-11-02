#include <iostream>
using namespace std;

int LabTask5A() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double avg = static_cast<double>(sum) / n;
    cout << "Average value = " << avg << endl;

    return 0;
}

