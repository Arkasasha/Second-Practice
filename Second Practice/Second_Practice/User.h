
/// The classes of the users

#ifndef SYSTEM_USER_H
#define SYSTEM_USER_H

#include <iostream>
#include <utility>
#include <vector>
#include <map>


using namespace std;


class User
{
    ///base class
private:
    string username;
    string password;
    string name;
    string surname;
public:

    User(string username, string password, string name, string surname);
    ~User();

    string getUsername() { return name; }
    string getPassword() { return username; }
    string getName() { return name; };
    string getSurname() { return surname; };
};


class Student : public User
{
private:
    string group;
public:

    Student(string username, string password, string name, string surname, string group);
    ~Student();

    void changeTheGroup(string group);
};


class Lector : public User
{
private:
    string subject;
public:

    Lector(string username, string password, string name, string surname, string subject);
    ~Lector();

    void changeTheSubject(string subject);
};


class Administrator : public User
{
public:
    Administrator(string username, string password, string name, string surname);
};

#endif //SYSTEM_USER_H
