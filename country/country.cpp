#include "country.h"

//=============KHU PHO FUNCTION=================
int KhuPho::getSoGiaDinh() { return this->SoGiaDinh; }
void KhuPho::setSoGiaDinh(int numFam) { this->SoGiaDinh = numFam; }
void KhuPho::addFamily() {
    int temp = vec.size();
    cout << "So gia dinh trong khu pho hien tai: " << temp << endl;
    cout << "Nhap so gia dinh can them trong khu pho: "; cin >> this->SoGiaDinh;
    for (int i = temp; i < temp + SoGiaDinh; i++) {
        cout << "Nhap thong tin cua gia dinh " << i + 1 << " :\n";
        HoGiaDinh* p = new HoGiaDinh;
        p->addMember();
        // p->showMember();
        vec.push_back(p);
    }
}
void KhuPho::showFamily() {
    if (vec.empty()) {
        cout << "No data to show!" << endl;
        return;
    }
    for (int i = 0; i < vec.size(); i++) {
        cout << "Gia dinh " << i + 1 << " :\n";
        vec[i]->showMember();
    }
}
