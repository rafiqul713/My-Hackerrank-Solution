#include <iostream>
#include <sstream>
#include<string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student{
    private:
        int age,standard;
        string first_name,last_name;
    
    public:
        void set_age(int);
        void set_first_name(string);
        void set_last_name(string);
        void set_standard(int);

        int get_age();
        string get_first_name();
        string get_last_name();
        int get_standard();

        string to_string();
};


void Student::set_age(int ag){
    age=ag;
}

void Student::set_first_name(string first){
    first_name=first;
}

void Student::set_last_name(string last){
    last_name=last;
}

void Student::set_standard(int std){
    standard=std;
}



int Student::get_age(){
    return age;
}

string Student::get_first_name(){
    return first_name;
}

string Student::get_last_name(){
    return last_name;
}


int Student::get_standard(){
    return standard;
}



string Student::to_string(){
    char ch=',';
    
    stringstream ss;
    ss<<get_age()<<ch<<get_first_name()<<ch<<get_last_name()<<ch<<get_standard();   
    return ss.str();
}



int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
