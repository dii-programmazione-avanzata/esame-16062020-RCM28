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

Course *DegreeCourse::CourseFinderByProfessor(const Professor &professor) const {
    return nullptr;
}

Course *DegreeCourse::CorurseFinderByClassroom(const Classroom &classroom) const {
    return nullptr;
}

Professor *DegreeCourse::ProfessorFinderByCourse(const Course &course) const {
    return nullptr;
}

Classroom *DegreeCourse::ClassroomFinderByCourse(const Course &course) const {
    return nullptr;
}

string DegreeCourse::FullCoursesOverview(const DegreeCourse &degree) const {
    return std::string();
}
