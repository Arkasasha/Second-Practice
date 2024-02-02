/*
///Initialization of hte functions

#include "Functions.h"

void readTheData(ifstream& file, string identifier) {
    int n;
    cin >> n;
    for (int id = 0; id < n; id++) {
        string username, password, name, surname;
        string variable;
        cin >> username >> password >> name >> surname;
        if (identifier == "student" || identifier == "lector") {
            cin >> variable;
        }

        if (identifier == "administrator") {
            Administrator admin(username, password, name, surname);
            admins.push_back(admin);
        }
        else if (identifier == "lector") {
            Lector lector(username, password, name, surname, variable);
            lectors.push_back(lector);
        }
        else {
            Student student(username, password, name, surname, variable);
            students.push_back(student);
        }
    }
}

bool login(string& username, string& password, string identifier) {
    if (identifier == "student") {
        for (auto student : students) {
            if (student.getUsername() == username && student.getPassword() == password) return true;
        }
    }
    else if (identifier == "lector") {
        for (auto lector : lectors) {
            if (lector.getUsername() == username && lector.getPassword() == password) return true;
        }
    }
    else {
        for (auto admin : admins) {
            if (admin.getUsername() == username && admin.getPassword() == password) return true;
        }
    }
    return false;
}

void addStudent() {
    ofstream record("Student");
    if (!record) {
        cout << "Connection error!";
        return;
    }
    string username, name, surname, group;
    cout << "Write a username: \n";
    cin >> username;
    cout << "Write a name of a student: \n";
    cin >> name;
    cout << "Write a surname of a student: \n";
    cin >> surname;
    cout << "Write a student's group: \n";
    cin >> group;

    Student student(username, surname, name, surname, group);
    students.push_back(student);


}

void createGroup() {

}
*/