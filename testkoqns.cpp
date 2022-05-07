//to add and subs two time (inheritance)
#include<iostream>
#include<conio.h>
using namespace std;
class base{
    protected: 
        int hrs,min,sec;
    public: 
        void getdata(){
            cout<<"Enter time in hrs min and sec: ";
            cin>>hrs>>min>>sec;
        }
        void display(){
            cout<<"time of base class is : "<<endl;
            cout<<hrs<<"hours "<<min<<" minutes and "<<sec<<"seconds"<<endl;

        }
};
class derived :public base{
    int h,m,s,hr,mi,se;
    public: 
          void getdata(){
            cout<<"Enter time in hrs min and sec of derived class : ";
            cin>>h>>m>>s;
        }
        void display(){
            cout<<"time of derived class is : "<<endl;
            cout<<h<<"hours "<<m<<" minutes and "<<s<<"seconds"<<endl;

        }
        void add(){
            se=s+sec;
            mi=se/60;
            se=se%60;
            mi=mi+m+min;
            hr=mi/60;
            mi=mi%60;
            hr=h+hr+hrs;
            h=hr;
            m=mi;
            s=se;
        }
        friend class fren;
};
class fren{
   int hours,minutes,seconds,hr,mi,se;
    public: 
          void getdata(){
            cout<<"Enter time in hrs min and sec of friend class : ";
            cin>>hours>>minutes>>seconds;
        }
        void display(){
            cout<<"time of friend class is : "<<endl;
            cout<<hours<<"hours "<<minutes<<" minutes and "<<seconds<<"seconds"<<endl;

        }
        void diff(derived d){
            se=d.sec-seconds;
            mi=se/60;
            se=se%60;
            mi=d.min-minutes+mi;
            hr=mi/60;
            mi=mi%60;
            hr=d.hrs-hours+hr;
            hours=hr;
            minutes=mi;
            seconds=se;
        }


};
int main(){
    derived o1;
    o1.base::getdata();
    o1.getdata();
    fren o2;
    o2.getdata();
    o1.base::display();
    o1.display();
    o2.display();

    cout<<"after addition of base class with derived class : "<<endl;
    o1.add();
    o1.display();

    cout<<"after substraction of base class with friend class: "<<endl;
    o2.diff(o1);
    o2.display();

}