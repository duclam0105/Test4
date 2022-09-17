#ifndef __FAMILY_H
#define __FAMILY_H

#include "Lib.h"
#include "person.h"

class HoGiaDinh {
    friend class Nguoi;
private:
    int SoThanhVien;
    int SoNha;
    vector<Nguoi*> v;
public:
    HoGiaDinh() {
        SoThanhVien = 0;
        SoNha = 0;
    }
    ~HoGiaDinh() {
        if (!v.empty()) {
            for (Nguoi* i : v) {
                delete(i);
            }
        }
    }
    int getSoThanhVien();
    int getSoNha();
    void setSoThanhVien(int);
    void setSoNha(int);
    bool checkID(int, string);
    void addMember();
    void showMember();
};

#endif // !__FAMILY_H

