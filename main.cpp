#include "Lib.h"
//#include "person.h"
//#include "family.h"
#include "country.h"

set<string> listID;

//==============================//
// //====== MAIN ======//
int main() {
    int temp;
    KhuPho cs;
    while (true) {
        cout << "===================\n";
        cout << "1-Them moi du lieu\n2-Hien thi du lieu\n0-Thoat\nMoi ban nhap: ";
        cin >> temp;
        cout << "===================\n";
        switch (temp) {
        case cmd_exit: {
            cout << "Close the program..." << endl;
            system("cls");
            return 0;
        }
        case cmd_add:
            cs.addFamily();
            break;
        case cmd_showlist: {
            cs.showFamily();
            break;
        }
        default:
            break;
        }
    }
    cout << "Close the program..." << endl;
    system("cls");
    return 0;
}