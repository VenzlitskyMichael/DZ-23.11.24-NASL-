#include <iostream>
#include <string>
using namespace std;

class Person { // Базовый класс родитель
protected:
    string name;
    int age;
public:
    Person() = default;
    Person(const char* n, int a) {
        name = n;
        age = a;
    }
    virtual void Input() {
        cout << "Enter name  ";
        cin >> name;
        cout << "Enter age  ";
        cin >> age;
    }
    virtual void Output() const {
        cout << "Name: " << name << "  Age: " << age << endl;
    }
};

class Teacher : public Person {
    string school;
    string subject;
public:
    Teacher() : Person() {}
    Teacher(const char* n, int a, const char* sch, const char* subj) : Person(n, a) {
        school = sch;
        subject = subj;
    }
    void Input() override {
        Person::Input();
        cout << "Enter School  ";
        cin >> school;
        cout << "Enter Subject  ";
        cin >> subject;
    }
    void Output() const override {
        Person::Output();
        cout << "School: " << school << "  Subject: " << subject << endl;
    }
};

class Student : public Person {
    string academy;
    int course;
public:
    Student() : Person(), course(0) {}
    Student(const char* n, int a, const char* ac, int cr) : Person(n, a), course(cr) {
        academy = ac;
    }
    void Input() override {
        Person::Input();
        cout << "Enter Academy  ";
        cin >> academy;
        cout << "Enter Course  ";
        cin >> course;
    }
    void Output() const override {
        Person::Output();
        cout << "Academy: " << academy << " Course: " << course << endl;
    }
};

class Doctor : public Person {
    string hospital;
    int salary;
public:
    Doctor() : Person(), salary(0) {}
    Doctor(const char* n, int a, const char* hos, int sal) : Person(n, a), salary(sal) {
        hospital = hos;
    }
    void Input() override {
        Person::Input();
        cout << "Enter Hospital  ";
        cin >> hospital;
        cout << "Enter Salary  ";
        cin >> salary;
    }
    void Output() const override {
        Person::Output();
        cout << "Hospital: " << hospital << "  Salary: " << salary << endl;
    }
};

class Director : public Person {
    string school;
    int salary;
public:
    Director() : Person(), salary(0) {}
    Director(const char* n, int a, const char* sch, int sal) : Person(n, a), salary(sal) {
        school = sch;
    }
    void Input() override {
        Person::Input();
        cout << "Enter School ";
        cin >> school;
        cout << "Enter Salary ";
        cin >> salary;
    }
    void Output() const override {
        Person::Output();
        cout << "School: " << school << "  Salary: " << salary << endl;
    }
};

int main() {
    Teacher teacher1("Irina", 30, "Itstep school", "Math");
    Student student1("Mike", 20, "IT Academy", 2);
    Doctor doctor1("Anna", 35, "Hospital num 5", 2000);
    Director director1("Sarah", 45, "School number 37", 3000);

    teacher1.Output();
    cout << endl;
    student1.Output();
    cout << endl;
    doctor1.Output();
    cout << endl;
    director1.Output();

    cout << "\nManual Input" << endl;

    Teacher teacher2;
    teacher2.Input();
    teacher2.Output();

    return 0;
}
