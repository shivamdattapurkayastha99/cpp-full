#include<iostream>
using namespace std;
class Student
{
protected:
    int rollno;

public:
    void set_number(int a){
        rollno=a;


    }
    void printNumber(){
        cout<<rollno<<endl;

    }
};
class Test:virtual public Student{
    protected:
        float maths,physics;
        public:
        void set_marks(float m1,float m2){
            maths=m1;
            physics=m2;

        }
        void print_marks(void){
            cout<<"maths is "<<maths<<"phy is "<<physics<<endl;

        }
};
class Shivam:virtual public Student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score=sc;

    }
    void print_score(void){
        cout<<"Your PI score is "<<score<<endl;

    }
    
};
class Result:public Test,Shivam{
    private:
        float total;
    public:
        void display(void){
            total=maths+physics+score;
            printNumber();
            print_marks();
            print_score();
            cout<<total<<endl;

        }
};
int main(){
    Result shivamdatta;
    shivamdatta.set_number(100);
    shivamdatta.set_marks(23.4,45.5);
    // shivamdatta.set_score(9);
    shivamdatta.display();

    // shivamdatta.print_score();



    
    return 0;
}