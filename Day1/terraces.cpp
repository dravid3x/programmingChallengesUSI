#include <iostream>

using namespace std;

int main() {

    int size, max = 0;
    int oldOldValue, oldValue, value, incValue = 0;

    cin >> size;

    if (size == 1 || size == 2) {
        cout << 0;
        return 0;
    } else if (size == 3){
        cin >> oldOldValue >> oldValue >> value;
        if (oldOldValue == value && (oldValue <= value)){
            cout << 1;
            return 0;
        }
    }

    cin >> oldOldValue >> oldValue;

    for (int i = 0; i < size - 1; i++){
        cin >> value;

        if (oldOldValue == value && (oldValue <= value)){
            incValue += 1;
        }

        max += incValue;

        oldOldValue = oldValue;
        oldValue = value;

    }

    cout << max;
    return 0;
}
