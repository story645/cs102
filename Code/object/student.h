#include <iostream>
#include <vector>
#include <fstream>

class Course{
 private:
   std::string grade;
 public:
   std::string name;
   std::string section;
   int totalcredits;
   Course(std::string n, std::string s, int tc);
   void changeGrade(std::string g);
};

Course::Course(std::string n, std::string s, int tc)
{
   name = n;
   section = s;
   totalcredits=tc;
   grade="NA";
}

void Course::changeGrade(std::string g)
{
   grade=g;
}        

class Student
{
 private:
   double gpa;
 public:
   std::string firstname;
   std::string lastname;
   std::string contact;
   std::string startdate;
   int id;
   int totalCredits;
   std::vector <Course> courses;
   Student(std::string fn, std::string ln, 
           std::string con, std::string sd);
   void addCourse(Course course);
   void addGrade(std::string cn, std::string grade);
   void setGPA(double newgpa);
   bool friend goodGrade(Student S);
   void friend toFile(std::string filename, vector <Student> slist);
};

Student::Student(std::string fn, std::string ln,
                 std::string con, std::string sd)
{
   firstname=fn;
   lastname=ln;
   contact=con;
   startdate=sd;
   id = 123;
   gpa = 0.0;
   totalCredits = 0;
}

void Student::addCourse(Course myCourse)
{
   courses.push_back(myCourse);
}

void Student::setGPA(double newgpa)
{
   if(newgpa>4.0 || newgpa<0)
     {
        throw -1;
     }
   gpa = newgpa;
}


void Student::addGrade(std::string cn, std::string grade)
{
   int i = 0;
   while(courses[i].name!=cn){i++;}
   courses[i].changeGrade(grade);
   
}

bool goodGrade(Student S)
{
   return S.gpa>3.0;
}

void toFile(std::string filename, std::vector <Student> slist)
{
   std::ofstream outFile;
   outFile.open(ofname.c_str());
   
   for (int i=0; i<slist.size(); i++)
     {
        std::cout<<slist[i].id<<" "<<slist[i].gpa<<std::endl;
     }
}
