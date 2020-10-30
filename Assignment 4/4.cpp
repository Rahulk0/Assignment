#include<iostream>
using namespace std;
class person{
public:
    person(){
    cout<<"This is a person\n";
    }
};
class Student:public person{
public:
    Student(){
    cout<<"This is also a student\n";
    }
};
class Teacher:public person{
public:
    Teacher(){
    cout<<"This is also a teacher\n";
    }
};
int main(){
Student S1;
Teacher T1;
return 0;
}