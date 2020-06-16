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

#include "../include/DegreeCourse.h"

void DegreeCourse::addCourses(const Course &course) {

    auto* addCourse = new Course[coursesCounter_];
    for (int i = 0; i < coursesCounter_; i++)
        addCourse[i] = courses_[i];
    addCourse[coursesCounter_ - 1] = course;
    delete[] courses_;
    courses_ = addCourse;
    coursesCounter_ ++;
}

Course* DegreeCourse::CourseFinderByProfessor(const Professor &professor) const {

    int addictionable = 0;
    Course* coursesofprofessor = new Course[addictionable];

    for (int i = 0; i < coursesCounter_; i++) {
        for (int j = 0; j < this->courses_[i].getProfessorsCounter(); j++) {
            if (this->courses_[i].getProfessors()[j].getNumber() == professor.getNumber()) {
                addictionable++;
                Course* newcourse = new Course[addictionable];
                for (int k = 0; k < addictionable; k++)
                    newcourse[k] = coursesofprofessor[k];
                newcourse[addictionable - 1] = courses_[i];
                delete[] coursesofprofessor;
                coursesofprofessor = newcourse;
            }
        }
    }
    return coursesofprofessor;

}

Course *DegreeCourse::CourseFinderByClassroom(const Classroom &classroom) const {

    int addictionable = 0;
    Course* coursesofclassroom = new Course[addictionable];

    for (int i = 0; i < coursesCounter_; i++) {
        for (int j = 0; j < this->courses_[i].getLessonsCounter(); j++) {
            if (this->courses_[i].getLessons()[j].getClassroom() == &classroom) {
                addictionable++;
                Course* newcourse = new Course[addictionable];
                for (int k = 0; k < addictionable; k++)
                    newcourse[k] = coursesofclassroom[k];
                newcourse[addictionable - 1] = courses_[i];
                delete[] coursesofclassroom;
                coursesofclassroom = newcourse;
            }
        }
    }
    return coursesofclassroom;

}

Professor *DegreeCourse::ProfessorFinderByCourse(const Course &course) const {

    //analoghi a sopra
    return nullptr;
}

Classroom *DegreeCourse::ClassroomFinderByCourse(const Course &course) const {

    //analoghi a sopra
    return nullptr;
}

string DegreeCourse::FullCoursesOverview(const DegreeCourse &degree) const {


    return std::string();
}

void DegreeCourse::NoOverlapController(const DegreeCourse &degree, int year) const {

    vector<int> courseoftheyear;
    for (int i = 0; i < coursesCounter_; i++) {
        if(this->courses_[i].getYear() == year) {
            courseoftheyear.push_back(i);
            for (int j = 0; j < this->courses_[i].getLessonsCounter(); j++) {
                for (int k = 0; k < courseoftheyear.size(); k++)
                    for (int l = 0; l < courses_[courseoftheyear[k]].getLessonsCounter(); l++)
                    assert(this->courses_[i].getLessons()[j].getDate() !=
                    this->courses_[courseoftheyear[k]].getLessons()[l].getDate() &&
                    this->courses_[i].getLessons()[j].getStart() !=
                    this->courses_[courseoftheyear[k]].getLessons()[l].getStart());
            }
        }
    }

}

