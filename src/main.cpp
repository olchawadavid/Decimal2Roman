#include "converter.h"

using std::cout, std::tuple, std::string, std::cin, std::vector, std::endl;

void opcje( void ) {
    cout << "\nWybierz opcje:" << endl;
    cout << "1) Rzymska do Arabskiej." << endl;
    cout << "2) Arabska do Rzymskiej." << endl;
    cout << "3) Zakoncz" << endl;
}

int main() {
    cout << "=== Program konwertujacy liczbe Arabska na system Rzymski ====\n"
         << endl;
    int wybor{};
    do {
        opcje();

        if ( !( cin >> wybor ) ) {
            cin.clear();
            cin.ignore( 1000, '\n' );
            continue;
        }

        switch ( wybor ) {
        case 1:
            Roman2Decimal();
            break;
        case 2:
            Decimal2Roman();
            break;
        case 3:
            cout << "Koniec programu!" << endl;
            break;
        default:
            cout << "Niepoprawny wybor." << endl;
        }

    } while ( wybor != 3 );

    // cout << conveter( 20 ) << endl;

    return 0;
}