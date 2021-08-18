#include "Student.h"
#include <iostream>
#include <cstring.h>

// Assign studentId and name
void Student::assignDetails(int no , char Name[]) {
  studentId = no ;
  strcpy(name , Name);
  
}

// Display StudentId and Name
void Student::display() {

cout<<"Student Id :"<<studentId<<endl;
cout<<"Student Name : "<<name<<endl;

  
}
