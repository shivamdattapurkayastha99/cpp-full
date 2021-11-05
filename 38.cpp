#include<iostream>
using namespace std;
class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);



};
void Student::set_roll_number(int r){
    roll_number=r;

}
void Student::get_roll_number(){
    cout<<"Roll no is "<<roll_number<<endl;

    
}
class Exam:public Student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void get_marks(void);

    



};
void Exam::set_marks(float m1,float m2){
    maths=m1;
    physics=m2;


}
void Exam::get_marks(){
    cout<<maths<<endl;
    cout<<physics<<endl;

    

}
class Result:public Exam{
    float percentage;
    public:
        void display(){
            get_roll_number();
            get_marks();

            cout<<"Percentage is "<<(maths+physics)/2<<endl;

        }

};
int main(){
    Result shivam;
    shivam.set_roll_number(12);
    shivam.set_marks(99.9,100);
    shivam.display();
    
    
    return 0;
}