#include <iostream>


using namespace std;



int main() {
    double n, i, ind;

    cout << "quanti studenti ci sono in classe?" << endl;
    cin >> n;
    string nomi[n];
    string voti[n];
    double v;

    while (i < n) {
        cout << "qual è il tuo nome?" << endl;
        cin >> nomi[i];
        cout << "qual è il tuo voto?" << endl;
        cin >> voti[n];
        if (i == 0) {
            v = voti[i];
        } else {
            if (v < voti[i]) {
                v = voti[i];
            }
        }
        i = i + 1;
    }
    cout << " i dati della classe sono i seguenti:" << endl;
    i = 0;
    while (i < n) {
        cout << "nome:" << nomi[i] << "voto:" << voti[i] << endl;
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        if (voti[i] == v) {
            ind = 1;
        }
        i = i + 1;
    }
    if (ind >= 0) {
        cout << "nome:" << nomi[ind] << "voto:" << voti[ind] << endl;
    }
    return 0;
}

