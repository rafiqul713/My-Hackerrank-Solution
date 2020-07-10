#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Person{
    protected:
        string name;
        int age;
    public:
        virtual void getdata(){

        }
        virtual void putdata(){

        }
};

class Professor: public Person{
        int publication;
        static int cur_id_prof;
    public:
        void getdata(){
           cin>>name>>age>>publication;
                
        }

        void putdata(){
            ++cur_id_prof;
            cout<<name<<" "<<age<<" "<<publication<<" "<<cur_id_prof<<endl;
            
            
        }
};


int Professor:: cur_id_prof=0;

class Student: public Person{
        int marks[6];
        static int cur_id_std;
        int sum=0;
    public:
        void getdata(){
           cin>>name>>age;
           for(int i=0;i<6;i++){
               cin>>marks[i];
               sum+=marks[i];
           }

        }

        void putdata(){
            ++cur_id_std;
            cout<<name<<" "<<age<<" "<<sum<<" "<<cur_id_std<<endl;            
        }
};

int Student::cur_id_std=0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

