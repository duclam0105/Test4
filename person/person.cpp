#include "person.h"
extern set<string> listID;
//=============NGUOI FUNCTION=================
string Nguoi::getName() { return this->name; }
int Nguoi::getAge() { return this->age; }
string Nguoi::getJob() { return this->job; }
string Nguoi::getID() { return this->id; }
void Nguoi::setName(string name) { this->name = name; }
void Nguoi::setAge(int age) { this->age = age; }
void Nguoi::setJob(string job) { this->job = job; }
void Nguoi::setID(string id) { this->id = id; }
void Nguoi::addData() {
    // autoSetID();
    string str, str1;
    cin.ignore();
    do {
        cout << "Name: ";
        getline(cin, str);
        //cin.ignore();
        chuanhoaTen(str);
        if (str == "0") break;
    } while (!checkValidName(str));
    setName(str);
    // cin.ignore();
    cout << "Age: "; cin >> this->age;
    cout << "Job: "; cin >> this->job;
    string str_id;
    do {
        cout << "ID (10 chu so): "; cin >> str_id;
        if (str_id == "0") break;
    } while ((!checkSameID(listID, str_id)) || (!checkValidID(str_id)));
    listID.insert(str_id);
    setID(str_id);
}
void Nguoi::showInfo() {
    cout << "Name: " << this->name << " - Age: " << this->age << " - Job: " << this->job << " - ID: " << this->id << endl;
}
