#include <iostream>
using namespace std;
class animal {
  private:
  string dob;
  public:
  int age;
  string name;
  long int Roll_No = 22118107;

  // constructor
  // 1st type --> Default constructor;
  animal(){
    // this->dob = "31/02/2002";
    // this->age = 19;
    // this->Roll_No = 2211;
    // cout<<"Mai Default constructor hun"<<endl;
  }
  // Paramaeterized constructor
 animal(string dob,int age,string name){
   this->dob = dob;
   this->age = age;
   this->name = name;
   //pvtorint();
   cout<<"Hi i am para"<<endl;
 }
 void pvtorint(animal you){
   cout<<this->name<<endl;
 }
};

int main() {
  // animal obj1,obj2;
  // int q;cin>>q;
  // obj1.takein(q);
  // obj1.giveout();
  // obj1.Roll_No;
  // animal* suresh = new animal;
  // (*suresh).Roll_No = 22118096;
  // cout<<suresh->Roll_No<<endl;

  animal you;
  animal("16/12/2004",18,"ujjwal");
  cout<<you.name<<endl;
  //out<<you->age<<endl;
  you.pvtorint();


 
}