#ifndef __COUNTRY_H
#define __COUNTRY_H

#include "Lib.h"
#include "family.h"

class KhuPho {
    int SoGiaDinh;
    vector<HoGiaDinh*> vec;
public:
    KhuPho() {
        SoGiaDinh = 0;
    }
    ~KhuPho() {
        if (!vec.empty()) {
            for (HoGiaDinh* i : vec) {
                delete(i);
            }
        }
    }
    int getSoGiaDinh();
    void setSoGiaDinh(int);
    void addFamily();
    void showFamily();
};

#endif // !__COUNTRY_H
