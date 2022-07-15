#ifndef Sports_h
#define Sports_h
#include <iostream>
using namespace std;
class Sports
{
    private:
      string name, roll_number,department;
      char gender;
      int age;              //if greater than 25 wont be selected in sports(for operator overloading)
                            
                            //we will know the sport by the class(operator overloading by 
                            // selection of domains of sports)

    public:
       void display_all();      //display each and everything
       void search();          //display particular record of student
       //registration
       //login(friend function) 
        void update_record();
        void delete_record();

};
#endif