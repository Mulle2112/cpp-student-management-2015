#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    float gpa;

public:
    void setData(int _id, string _name, float _gpa);
    void showData();
    int getId();
};

#endif
