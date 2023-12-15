#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    int n;
    cout << "Wprowadź ilość elementów wektora: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Wprowadź elementy wektora, oddziel je spacją:" << endl;
        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
        }

    int maxElement = vec[0];
    int maxIndex = 0;

        for (int i = 1; i < n; ++i) {
            if (vec[i] > maxElement) {
                maxElement = vec[i];
                maxIndex = i;
            }
        }
     
     cout << "Największy element: " << maxElement << endl;
     cout << "Numer indexu największego wektora: " << maxIndex << endl;

        return 0;
}

