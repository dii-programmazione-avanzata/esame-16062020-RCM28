//
// Created by Rachele on 16/06/2020.
//

#ifndef ESAME_16062020_RCM28_COURSE_H
#define ESAME_16062020_RCM28_COURSE_H

#include <string>

using namespace std;

class User {

protected:

    string name_;
    string surname_;
    int number_;

public:

    string getName() const { return name_; };
    string getSurname() const { return surname_; };
    int getNumber() const { return number_; };

};

class Professor : public User {};

class Student : public User {};

class Date {

private:

    int day_;
    int month_;
    int year_;

public:

    int getDay() const { return day_; };
    int getMonth() const { return month_; };
    int getYear() const { return year_; };
    string printDate() const;

};

class Hour {

private:

    int hour_;
    int minutes_;

public:

    int getHour() const { return hour_; };
    int getMinutes() const { return minutes_; };
    string printHour() const;

};

class Classroom {

private:

    string ID_;
    int seats_;

public:

    string getID() const { return ID_; };
    int getSeats() const { return seats_; };

};

class Lesson {

private:

     Date* date_;
     Hour* start_;
     Hour* duration_;
     Classroom* classroom_;

public:

    Date* getDate() const { return date_; };
    Hour* getStart() const { return start_; };
    Hour* getDuration() const { return duration_; };
    Classroom* getClassroom() const { return classroom_; };

};

class Course {

private:

    Professor* professors_;
    int professorsCounter_ = 1;
    int year_;
    int studentsCounter_ = 1;
    Student* students_;
    Lesson* lessons_;
    int lessonsCounter_ = 1;

public:

    void addProfessors( const Professor &professor);
    void addStudents( const Student &student);
    void addLessons( const Lesson &lesson);
    Professor* getProfessors() const { return professors_; };
    int getProfessorsCounter() const { return professorsCounter_;};
    Student* getStudents() const { return students_; };
    int getYear() const { return year_; };
    Lesson* getLessons() const { return lessons_;};
    void SeatsController( const Course &course) const;

};


#endif //ESAME_16062020_RCM28_COURSE_H
