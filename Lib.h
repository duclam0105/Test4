#ifndef __LIBRARY_H
#define __LIBRARY_H

#include <iostream>
#include <sstream>
#include <vector>
#include <set>

using namespace std;
/*Để quản lý các hộ dân cư trong một khu phố, người ta cần các thông tin sau:
Số thành viên trong gia đình, Số nhà, thông tin mỗi cá nhân trong gia đình.
Với mỗi cá nhân, người ta quản lý các thông tin sau: Họ tên, Tuổi, Nghề nghiệp, số chứng minh nhân dân(duy nhất cho mỗi người).
Yêu cầu 1: Hãy xây dựng lớp Nguoi để quản lý thông tin của mỗi cá nhân.
Yêu cầu 2: Xây dựng lớp HoGiaDinh để quản lý thông tin của từng hộ gia đình.
Yêu cầu 2: Xây dựng lớp KhuPho để quản lý các thông tin của từng hộ gia đình.
Yêu cầu 3: Nhập n hộ dân. (n nhập từ bàn phím), hiển thị thông tin của các hộ trong khu phố.*/

#define yes 1
#define no 0
typedef enum { cmd_exit, cmd_add, cmd_showlist }comand;
// typedef enum { exit_t, khoiA_t, khoiB_t, khoiC_t}type_t;

bool checkValidName(string name);
bool checkValidID(string id);
bool checkSameID(set<string> list, string id);
void chuanhoaTen(string& a);

class myException :public exception {
    string msg;
public:
    myException(string mess) {
        msg = mess;
    }
    string what() {
        return msg;
    }
};

#endif