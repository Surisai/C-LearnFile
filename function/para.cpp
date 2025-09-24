// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

class Student {
    string m_name ;
    int m_age;
public:
    Student(string name, int age) : m_name(name), m_age(age){}
    
    void setAge(int age) {m_age = age;}
    int getAge() const{return m_age;}
    
    void display () const {
        cout << "This is "<< m_name << ", "<<m_age<< " !" << endl;
    }
    
    
};
//passing by value from Student class
void showByValue(Student s){
    cout << "Display by value : ";
    cout <<endl;
    s.display();
    s.setAge(100);
}
////Passing parameter by Reference
void showByRef(Student & s){
    cout << "Diplay by reference : ";
    s.display();
    cout << "You will turn to 27 in 2026"<<endl;
    s.setAge(27);///modifies original
}
//passing Parameter by Const Reference
void showByConstRef(const Student &s){
    cout <<" ByConst Reference : ";
    cout << "Shut up this is you 2025 so";
    s.display();
}
int main() {
    
    ///defind value to display
    //Passing by value
    Student st("Mhork", 26);
    cout << "Showing without change value!" << endl;
    showByValue(st);
    st.display();
    cout << endl;
    cout << "--------------------------"<<endl;
    cout << "Showing without change value from passing parametr by reference ! " << endl;
    showByRef(st);
    st.display();
    cout << endl;
    cout << "--------------------------"<<endl;
    showByConstRef(st);
    
    st.display();
    
    
    
    
    
    
    return 0;
}