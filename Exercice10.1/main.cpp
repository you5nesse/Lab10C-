
#include <iostream>
using namespace std;

int main() {
    int n;


    cout << "Donner la taille du tableau : ";
    cin >> n;

    int* T = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "T[" << i << "] = ";
        cin >> T[i];
    }

    cout << "\nLes valeurs du tableau sont : ";
    for (int i = 0; i < n; i++) {
        cout << T[i] << " ";
    }

    delete[] T;
    T = nullptr;

    return 0;
}
