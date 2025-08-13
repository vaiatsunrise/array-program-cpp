#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> array[i];
    }

    cout << "The reversed array is: " << endl;
    for (int j = n - 1; j >= 0; j--) {
        cout << array[j] << endl;
    }

    return 0;
}
