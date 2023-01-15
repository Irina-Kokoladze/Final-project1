/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class AbstractLecturer {
    protected:
       string Name;
       string Lastname;
       string CourseName;
       
AbstractLecturer (string Name, string Lastname, string CourseName){
    this->Name = Name;
    this->Lastname = Lastname;
    this->CourseName= CourseName;
    };

string getName(){
    return Name;
    };

void setName(string Name){
    this->Name = Name;
    };

string getLastname(){
    return Lastname;
    };

void setLastname(string Lastname){
    this->Lastname = Lastname;
    };

string getCourseName(){
    return CourseName;
    };

void setCourseName(string CourseName){
    this->CourseName = CourseName;
    };

void conducts(){
    cout << "ლექტორი ატარებს ლექციას" <<endl;
    };
};

class SkillwillLecturer: public AbstractLecturer {
    public:
    SkillwillLecturer(string Name, string LastName, string CourseName): AbstractLecturer
    
    (Name, LastName, CourseName) {}
    void conducts(){
        cout <<"ლექტორი  ატარებს რბილი უნარების ლექციას"<<  endl;
    };

};


int main()
{
    SkillwillLecturer Lecturer1("სულხანი", "სახვაძე", "რბილი უნარები");

    return 0;
}