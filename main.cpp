#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    char znak;
    time_t t;
    srand((unsigned) time(&t));
    int liczby[50];
    int liczba;

    // Wyswietlenie wylosowanych liczb.
    cout << "Wylosowane liczby: ";
    for (int i = 0; i < 50; i++) {
        liczby[i] = rand() % 10;
        cout << liczby[i];
        if (i != 49) {
            cout << ", ";
        }
    }
    cout << endl;

    do {
        cout << "Jaka wartosc wyszukac? ";
        cin >> liczba;

        // Policzenie ile razy wystapila dana liczba.
        int calc = 0;
        for(int i = 0; i <= 49; i++) {
            if (liczby[i] == liczba) {
                calc++;
            }
        }

        // Rozwiazanie.
        cout << "Liczba " << liczba << " wystapila " << calc << " razy." << endl;

        cout << "Przeszukiwac ponownie (t/T)? ";
        cin >> znak;
    } while (znak == 't' || znak == 'T');
    return 0;
}
