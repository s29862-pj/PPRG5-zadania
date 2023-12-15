#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    cout << "Wprowadź liczbę elementów tablicy: ";
    cin >> size;

    if (size % 2 != 0) {
        cerr << "Liczba musi być podzielna przez 2!" << endl;
        return 1;
    }

    vector<int> array(size);
    cout << "Wpisz elementy tablic oddzielając je spacją: " << endl;
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    cout << "Dane wejściowe: " << endl;
    for (int i = 0; i < size; i += 2) {
        cout << array[i] << "\t" << array[i + 1] << endl;
    }

    for (int i = 0; i < size; i += 2) {
        swap(array[i], array[i + 1]);
    }

    cout << "Dane po zmianie: " << endl;
    for (int i = 0; i < size; i += 2) {
        cout << array[i] << "\t" << array[i + 1] << endl;
    }

    return 0;
}
