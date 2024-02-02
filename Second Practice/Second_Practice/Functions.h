///All the functions

#ifndef SYSTEM_FUNCTIONS_H
#define SYSTEM_FUNCTIONS_H

#include "User.h"
#include <fstream>

vector <Administrator> admins;
vector <Lector> lectors;
vector <Student> students;

void readTheData(ifstream& file, string identifier);

bool login(string& username, string& password, string identifier);

void addStudent();
void deleteStudent();
void addLector();
void deleteLector();
void createGroup();
void deleteGroup();
void createSubject();
void deleteSubject();

void addGrade();
void editGrade();

void seeGrade();

#endif //SYSTEM_FUNCTIONS_H
#pragma once
