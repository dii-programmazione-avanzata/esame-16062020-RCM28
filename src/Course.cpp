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

    stringstream stream;
    stream << day_ << '/' << month_ << '/' << year_ ;
    return stream.str();

}

string Hour::printHour() const {

    stringstream stream;
    stream << hour_ << ':' << minutes_;
    return stream.str();

}

void Course::addProfessors(const Professor &professor) {

    auto* addProfessor = new Professor[professorsCounter_];
    for (int i = 0; i < professorsCounter_; i++)
        addProfessor[i] = professors_[i];
    addProfessor[professorsCounter_ - 1] = professor;
    delete[] professors_;
    professors_ = addProfessor;
    professorsCounter_ ++;

}

void Course::addStudents(const Student &student) {

    auto* addStudent = new Student[studentsCounter_];
    for (int i = 0; i < studentsCounter_; i++)
        addStudent[i] = students_[i];
    addStudent[studentsCounter_ - 1] = student;
    delete[] students_;
    students_ = addStudent;
    studentsCounter_ ++;

}

void Course::addLessons(const Lesson &lesson) {

    auto* addLesson = new Lesson[lessonsCounter_];
    for (int i = 0; i < lessonsCounter_; i++)
        addLesson[i] = lessons_[i];
    addLesson[lessonsCounter_ - 1] = lesson;
    delete[] lessons_;
    lessons_ = addLesson;
    lessonsCounter_ ++;

}

void Course::SeatsController(const Course &course) const {

    for (int i = 0; i < lessonsCounter_; i++)
        assert(this->lessons_[i].getClassroom()->getSeats() >= studentsCounter_);

}



