//
// Created by Rachele on 16/06/2020.
//
#include <cassert>
#include <ios>
#include <iomanip>
#include <string>
#include <sstream>
#include <iostream>
#include <math.h>
#include <vector>

#include "../include/Course.h"

using namespace std;

string Date::printDate() const {
    return std::string();
}

string Hour::printHour() const {
    return std::string();
}

Professor *Course::addProfessors(const Professor &professor) {
    return nullptr;
}

Student *Course::addStudents(const Student &student) {
    return nullptr;
}

Lesson *Course::addLessons(const Lesson &lesson) {
    return nullptr;
}

void Course::SeatsController(const Course &course) const {

}

void Course::NoOverlapController(const Course &course) const {

}
