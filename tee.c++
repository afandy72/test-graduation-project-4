#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include"Student.h"
#include"student.cpp"
using namespace std;

void printVector(const vector<Student>&);
void printSections(const vector<Student>&);
bool compareInterval(Student i1, Student i2)
{
    return (i1.get_deg() > i2.get_deg());
}
int main ()
{
  vector<Student> myClass;
  Student newStudent("ali",88,"eng","mech","autot","ict");
  Student newStudent2("yasser",60,"mech","ict","autot","eng");
  Student newStudent3("zaki",55,"ict","autot","mech","eng");
  Student newStudent4("hani",99,"ict","autot","mech","eng");
  Student newStudent5("taha",80,"autot","ict","eng","mech");
  Student newStudent6("zain",84,"mech","ict","autot","eng");
  Student newStudent7("samer",70,"eng","ict","mech","autot");
  Student newStudent8("hassen",95,"ict","autot","eng","mech");
  myClass.push_back(newStudent);
  myClass.push_back(newStudent2);
  myClass.push_back(newStudent3);
  myClass.push_back(newStudent4);
  myClass.push_back(newStudent5);
  myClass.push_back(newStudent6);
  myClass.push_back(newStudent7);
  myClass.push_back(newStudent8);
  
  
  sort(myClass.begin(), myClass.end(), compareInterval);
  printVector(myClass);
  vector<Student> ict;
  vector<Student> mecha;
  vector<Student> autot;
  vector<Student> eng;
  for(int g=0;g<8;g++){
    if(myClass[g].prop==1){
      if(myClass[g].first_interest == "ict"){
        if(ict.size()<3){
          ict.push_back(myClass[g]);
        }
        else if (ict.size()>=3)
        {
          myClass[g].prop+=1;
        }
        
      }
      if(myClass[g].first_interest == "mech"){
        if(mecha.size()<2){
          mecha.push_back(myClass[g]);
        }
        else if (mecha.size()>=2)
        {
          myClass[g].prop+=1;
        }
        
      }
      if(myClass[g].first_interest == "autot"){
        if(autot.size()<2){
          autot.push_back(myClass[g]);
        }
        else if (autot.size()>=2)
        {
          myClass[g].prop+=1;
        }
        
      }
      if(myClass[g].first_interest == "eng"){
        if(eng.size()<2){
          eng.push_back(myClass[g]);
        }
        else if (eng.size()>=2)
        {
          myClass[g].prop+=1;
        }
        
      }
    }
    if(myClass[g].prop==2){
      if(myClass[g].sec_interest == "ict"){
        if(ict.size()<3){
          ict.push_back(myClass[g]);
        }
        else if (ict.size()>=3)
        {
          myClass[g].prop+=1;
        }
        
      }
      if(myClass[g].sec_interest == "mech"){
        if(mecha.size()<2){
          mecha.push_back(myClass[g]);
        }
        else if (mecha.size()>=2)
        {
          myClass[g].prop+=1;
        }
        
      }
      if(myClass[g].sec_interest == "autot"){
        if(autot.size()<2){
          autot.push_back(myClass[g]);
        }
        else if (autot.size()>=2)
        {
          myClass[g].prop+=1;
        }
        
      }
      if(myClass[g].sec_interest == "eng"){
        if(eng.size()<2){
          eng.push_back(myClass[g]);
        }
        else if (eng.size()>=2)
        {
          myClass[g].prop+=1;
        }
        
      }
    }
    if(myClass[g].prop==3){
      if(myClass[g].the_interest == "ict"){
        if(ict.size()<3){
          ict.push_back(myClass[g]);
        }
        else if (ict.size()>=3)
        {
          myClass[g].prop+=1;
        }
        
      }
      if(myClass[g].the_interest == "mech"){
        if(mecha.size()<2){
          mecha.push_back(myClass[g]);
        }
        else if (mecha.size()>=2)
        {
          myClass[g].prop+=1;
        }
        
      }
      if(myClass[g].the_interest == "autot"){
        if(autot.size()<2){
          autot.push_back(myClass[g]);
        }
        else if (autot.size()>=2)
        {
          myClass[g].prop+=1;
        }
        
      }
      if(myClass[g].the_interest == "eng"){
        if(eng.size()<2){
          eng.push_back(myClass[g]);
        }
        else if (eng.size()>=2)
        {
          myClass[g].prop+=1;
        }
        
      }
    }
    if(myClass[g].prop==4){
      if(myClass[g].fourth_interest == "ict"){
        if(ict.size()<3){
          ict.push_back(myClass[g]);
        }
        else if (ict.size()>=3)
        {
          myClass[g].prop+=1;
        }
        
      }
      if(myClass[g].fourth_interest == "mech"){
        if(mecha.size()<2){
          mecha.push_back(myClass[g]);
        }
        else if (mecha.size()>=2)
        {
          myClass[g].prop+=1;
        }
        
      }
      if(myClass[g].fourth_interest == "autot"){
        if(autot.size()<2){
          autot.push_back(myClass[g]);
        }
        else if (autot.size()>=2)
        {
          myClass[g].prop+=1;
        }
        
      }
      if(myClass[g].fourth_interest == "eng"){
        if(eng.size()<2){
          eng.push_back(myClass[g]);
        }
        else if (eng.size()>=2)
        {
          myClass[g].prop+=1;
        }
        
      }
    }
  }
  cout << "ICT :" << endl;
  printSections(ict);
  cout << "Mech :" << endl;
  printSections(mecha);
  cout << "Auto :" << endl;
  printSections(autot);
  cout << "Energy :" << endl;
  printSections(eng);
  return 0;
}

void printVector(const vector<Student>& newMyClass){
  unsigned int size=newMyClass.size();
  for(unsigned int i=0;i<size;i++){
    cout << "Student Name: "     << newMyClass[i].get_name() << endl;
    cout << "Student degree: " << newMyClass[i].get_deg() << endl;
    cout << "Student First: " << newMyClass[i].get_first_interest() << endl;
    cout << "Student Second: " << newMyClass[i].get_sec_interest() << endl;
    cout << "Student Third: " << newMyClass[i].get_the_interest() << endl;
    cout << "Student Fhorth: " << newMyClass[i].get_fourth_interest() << endl;
    cout << endl;



  }
}

void printSections(const vector<Student>& mysec){
  unsigned int size=mysec.size();
  for(unsigned int i=0;i<size;i++){
    cout << "Student Name: "     << mysec[i].get_name() << endl;
    cout << "Student degree: " << mysec[i].get_deg() << endl;
    switch (mysec[i].prop)
    {
    case 1:
      cout << "Student First: " << mysec[i].get_first_interest() << endl;
      break;
    case 2:
      cout << "Student Second: " << mysec[i].get_sec_interest() << endl;
      break;
      case 3:
      cout << "Student Third: " << mysec[i].get_the_interest() << endl;
     break;
      case 4:
     cout << "Student Fhorth: " << mysec[i].get_fourth_interest() << endl;
     break;
    
    }
    cout << endl;
  }
}