#include "Student.h"
Student::Student(){};
Student::Student(string n, int d, string f, string s, string t, string fh){
     
        this->name=n;
        this->deg=d;
        this->first_interest=f;
        this->sec_interest=s;
        this->the_interest=t;
        this->fourth_interest=fh;
    };
Student::~Student(){

    }
    void Student:: set_name(string nn){
        name=nn;
    }
    void Student:: set_first_interest(string fr){
        first_interest=fr;
    }
    void Student:: set_sec_interest(string se){
        sec_interest=se;
    }
    void Student:: set_the_interest(string th){
        the_interest=th;
    }
    void Student::set_fourth_interest(string fh){
        fourth_interest=fh;
    }
    void Student::set_seg(int d){
        deg=d;
    }
    string Student::get_name()const{
        return name;
    }
    string Student::get_first_interest()const{
        return first_interest;
    }
    string Student::get_sec_interest()const{
        return sec_interest;
    }
    string Student::get_the_interest()const{
        return the_interest;
    }
    string Student::get_fourth_interest()const{
        return fourth_interest;
    }
    int Student::get_deg()const{
        return deg;
    }
    

