#include <iostream>
#include <vector>

class Course{
 public:
   std::string name;
   std::string section;
   int totalcredits;
   std::string grade;
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
 public:
   std::string firstname;
   std::string lastname;
   std::string contact;
   std::string startdate;
   int id;
   double gpa;
   int totalCredits;
   std::vector <Course> courses;
   Student(std::string fn, std::string ln, 
           std::string con, std::string sd);
   void addCourse(Course course);
   void addGrade(std::string cn, std::string grade);
   
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


void Student::addGrade(std::string cn, std::string grade)
{
   int i = 0;
   while(courses[i].name!=cn){i++;}
   courses[i].changeGrade(grade);
   
}
