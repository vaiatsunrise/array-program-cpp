#include <iostream>
using namespace std;

int main() {
    int marks[5] = {12, 4, 16, 22, 9};
    int searchValue;

    cout << "Enter the mark to search: ";
    cin >> searchValue;

    bool found = false;

    for (int i = 0; i < 5; i++) {
        if (marks[i] == searchValue) { 
            cout << "Marks found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Marks not found in the array." << endl;
    }

    return 0;
}
