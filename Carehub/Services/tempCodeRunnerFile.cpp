#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int arr[size];
    int sum = 0;

    cout << "Enter 10 integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / size;

    cout << "The average value of the array elements is: " << average << endl;

    return 0;
}