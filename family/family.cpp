#include "family.h"

//=============HO GIA DINH FUNCTION=================
int HoGiaDinh::getSoThanhVien() {/*return this->SoThanhVien;*/ return this->v.size(); }
int HoGiaDinh::getSoNha() { return this->SoNha; }
void HoGiaDinh::setSoThanhVien(int numMem) { this->SoThanhVien = numMem; }
void HoGiaDinh::setSoNha(int numHome) { this->SoNha = numHome; }
bool HoGiaDinh::checkID(int index, string id) {
    int count = 0;
    if (index > 0) {
        for (int j = 0; j < index; j++) {
            if (v[j]->getID() == id) {
                count++;
            }
        }
    }
    if (count > 0) return false;
    if (count == 0) return true;
}
void HoGiaDinh::addMember() {
    cout << "Nhap so nha: "; cin >> SoNha;
    cout << "Nhap so thanh vien: "; cin >> this->SoThanhVien;
    for (int i = 0; i < this->SoThanhVien; i++) {
        cout << "Nhap thong tin cua thanh vien: " << i + 1 << " :\n";
        Nguoi* p = new Nguoi;
        p->addData();
        p->showInfo();
        v.push_back(p);
    }
}
void HoGiaDinh::showMember() {
    if (v.empty()) {
        cout << "No data to show!" << endl;
        return;
    }
    for (int i = 0; i < v.size(); i++) {
        cout << i + 1 << ". ";
        v[i]->showInfo();
    }
}
