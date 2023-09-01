#include<iostream>
using namespace std;
class hero{
 private:
 int health;
 public:
 char level;
 hero(){
   cout<<"Constructor is called";
 }
 hero(int health){
    this->health=health;

 }
 int gethealth(){
return health;
 }
 char getlevel(){
    return level;
 }
 void sethealth(int h){
    health=h;
 }
void setlevel(char l){
    level=l;
}

};



int main(){
    //cout<<"Hi";
     hero ramesh(10);
    //  ramesh.gethealth();
     ramesh.print();
// ramesh.health=70;
// dynamic alllocation
// hero *b= new hero;
// ramesh.sethealth(70);

// cout<<"health is :"<<(*b).gethealth();
// cout<<"Ramesh health is:"<<ramesh.gethealth()<<endl;
// ramesh.level='A';
// // cout<<"health is:"<<ramesh.health<<endl;
// cout<<"level is:"<<ramesh.level<<endl;


return 0;
}