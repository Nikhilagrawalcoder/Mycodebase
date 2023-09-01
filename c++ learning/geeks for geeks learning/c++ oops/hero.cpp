class hero{
 private:
 int health;
 public:
 char level;
 hero(){
   cout<<"Constructor is called";
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