//
// Created by Rachele on 16/06/2020.
//

#ifndef ESAME_16062020_RCM28_DEGREECOURSE_H
#define ESAME_16062020_RCM28_DEGREECOURSE_H

#include <string>
#include "Course.h"

class DegreeCourse {

private:

    Course* courses_;
    Professor* professors_;
    Classroom* classrooms_;

public:

    Course* CourseFinderByProfessor( const Professor &professor) const;
    Course* CorurseFinderByClassroom( const Classroom &classroom) const;
    Professor* ProfessorFinderByCourse( const Course &course) const;
    Classroom* ClassroomFinderByCourse( const Course &course) const;
    string FullCoursesOverview( const DegreeCourse &degree) const;

};


#endif //ESAME_16062020_RCM28_DEGREECOURSE_H
