#include <iostream>
using namespace std;

int LabTask6A() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    double* arr = new double[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double min = arr[0];
    double max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max << endl;

    delete[] arr;
    return 0;
}

