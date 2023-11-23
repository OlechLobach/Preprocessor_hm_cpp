
#include "func.h"

int main() {
    const int size = 10;
    int intArr[size];
    char charArr[size];
    double doubleArr[size];

    FillArray(intArr, size);
    FillArray(charArr, size);
    FillArray(doubleArr, size);

    cout << "Int Array: ";
    ShowArray(intArr, size);
    cout << "Char Array: ";
    ShowArray(charArr, size);
    cout << "Double Array: ";
    ShowArray(doubleArr, size);

    int intMin = MinValue(intArr, size);
    double doubleMin = MinValue(doubleArr, size);
    char charMin = MinValue(charArr, size);

    cout << "Min Value (Int): " << intMin << endl;
    cout << "Min Value (Double): " << doubleMin << endl;
    cout << "Min Value (Char): " << charMin << endl;

    int intMax = MaxValue(intArr, size);
    double doubleMax = MaxValue(doubleArr, size);
    char charMax = MaxValue(charArr, size);

    cout << "Max Value (Int): " << intMax << endl;
    cout << "Max Value (Double): " << doubleMax << endl;
    cout << "Max Value (Char): " << charMax << endl;

    SortArray(intArr, size);
    SortArray(charArr, size);
    SortArray(doubleArr, size);

    cout << "Sorted Int Array: ";
    ShowArray(intArr, size);
    cout << "Sorted Char Array: ";
    ShowArray(charArr, size);
    cout << "Sorted Double Array: ";
    ShowArray(doubleArr, size);

    EditArray(intArr, size);
    EditArray(charArr, size);
    EditArray(doubleArr, size);

    cout << "Edited Int Array: ";
    ShowArray(intArr, size);
    cout << "Edited Char Array: ";
    ShowArray(charArr, size);
    cout << "Edited Double Array: ";
    ShowArray(doubleArr, size);

    return 0;
}
