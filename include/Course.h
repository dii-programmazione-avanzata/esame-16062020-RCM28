//
// Created by Rachele on 16/06/2020.
//

#ifndef ESAME_16062020_RCM28_COURSE_H
#define ESAME_16062020_RCM28_COURSE_H

#include <string>

using namespace std;

class User {

private:

    string name_;
    string surname_;
    int number_;

public:

    string getName() { return name_; } const;
    string getSurname() { return surname_; } const;
    int getNumber() { return number_; } const;

};

class Professor : public User {};

class Student : public User {};

class Date {

private:

    int day_;
    string month_;
    int year_;

public:

    int getDay() { return day_; } const;
    string getMonth() { return month_; } const;
    int getYear() { return year_; } const;
    string printDate() const;

};

class Hour {

private:

    int hour_;
    int minutes_;

public:

    int getHour() { return hour_; } const;
    int getMinutes() { return minutes_; } const;
    string printHour() const;

};

class Classroom {

private:

    string ID_;
    int seats_;

public:

    string getID() { return ID_; } const;
    int getSeats() { return seats_; } const;

};

class Lesson {

private:

     Date* date_;
     Hour* start_;
     Hour* duration_;
     Classroom* classroom_;

public:

    Date* getDate() { return date_; } const;
    Hour* getStart() { return start_; } const;
    Hour* getDuration() { return duration_; } const;
    Classroom* getClassroom() { return classroom_; } const;

};

class Course {

private:

    Professor* professors_;
    int year_;
    int studentsCounter_;
    Student* students_;
    Lesson* lessons_;

public:

    Professor* addProfessors( const Professor &professor);
    Student* addStudents( const Student &student);
    Lesson* addLessons( const Lesson &lesson);
    Professor* getProfessors() { return professors_; } const;
    Student* getStudents() { return students_; } const;
    int getYear() { return year_; } const;
    Lesson* getLessons() { return lessons_;} const;
    void SeatsController( const Course &course) const;
    void NoOverlapController( const Course &course) const;

};


#endif //ESAME_16062020_RCM28_COURSE_H
