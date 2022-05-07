#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class Student 
{
    protected:
      char name[50];
      int roll;
    public:
      Student(char *n,int r){
          strcpy(name,n);
          roll=r;
      }
      void display(){
          cout<<"Name:"<<name<<endl;
          cout<<"Rollnum:"<<roll<<endl;
      }
};
class Test: virtual public Student{
    protected:
      float sub1,sub2;
    public:
      Test(char *n,int r,float S1,float S2):Student(n,r){
          sub1=S1;
          sub2=S2;
      }
      void display(){
          cout<<"marks in subject 1 :"<<sub1<<endl;
          cout<<"marks in subject 2:"<<sub2<<endl;
      }
};
class Sports: virtual public Student
{
    protected:
      float score;
    public:
      Sports(char *n,int r,float S):Student(n,r){
          score=S;
      }
      void display(){
          cout<<"score is :"<<score<<endl;
      }
};
class Result: public Test,public Sports{
    float total;
     public:
       Result(char *n,int r,float S1,float S2,float S):Student(n,r),Test(n,r,S1,S2),Sports(n,r,S){
total=S1+S2+S;
       }
       void display(){
           cout<<"total="<<total<<endl;
       }
};
int main(){
    Result R("ram",1234567,33.33,33.33,33.33);
    R.Student::display();
    R.Test::display();
    R.Sports::display();
    R.display();
    getch();
    return 0;
}