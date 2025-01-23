#include<iostream>
using namespace std;
class student{
     //public:
    string name;
    int age,rollno;
    string grade;
    public:
    void setname(string s){
        name=s;
    }
    void setage(int u)
    {
        age = u;
    }
    void setroll(int k)
    {
        rollno=k;

    }
    void setgrade(string s){
        grade=s;
    }

    void getname(){
        cout<<name;
    }
    void getroll()
    {
        cout << rollno;
    }
    void getgrade(){

        cout<<grade;

    }
    void getage(){
        cout<<age;
    }
};


int main(){
    student s1;
    // cin>>s1.name;
    // cin>>s1.age;
    // cin>>s1.rollno;
    // cin>>s1.grade;
    // cout<<s1.grade;
    s1.setname("nikhil");
    s1.getname();
    s1.setage(27);
    s1.getage();
}