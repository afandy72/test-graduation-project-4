#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include<string>
using namespace std;

class Student{
    public:
        Student();
        Student( string , int , string , string , string , string );
        ~Student();
    
        string name;
        int deg;
        string first_interest;
        string sec_interest;
        string the_interest;
        string fourth_interest;
        int prop=1;
        void set_name(string);
        void set_first_interest(string);
        void set_sec_interest(string);
        void set_the_interest(string );
        void set_fourth_interest(string);
        void set_seg(int);
        string get_name()const;
        string get_first_interest()const;
        string get_sec_interest()const;
        string get_the_interest() const;
        string get_fourth_interest() const;
        int get_deg() const;

};
#endif