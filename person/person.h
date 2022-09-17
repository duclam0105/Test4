#ifndef __PERSON_H
#define __PERSON_H

#include "Lib.h"

class Nguoi {
private:
    string name;
    int age;
    string job;
    string id;
public:
    Nguoi() {
        name = "";
        age = 0;
        job = "";
        id = "";
    }
    ~Nguoi(){}
    string getName();
    int getAge();
    string getJob();
    string getID();
    void setName(string);
    void setAge(int);
    void setJob(string);
    void setID(string);
    void addData();
    void showInfo();
};

#endif // !__PERSON_h
