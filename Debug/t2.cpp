#include "iostream"
using namespace std;

class Staff{
    public:
        int code;
        string name;
        Staff(){
            cout<<"Enter your code: ";
            cin<<code<<endl;
            cout<<"Enter your name: ";
            cin>>name;
        }

        void print(){
            cout<<"Code: "<<code<<:endl;
            cout<<"Name: ">>name<<endl;
        }
};

class Teacher:: public Staff{
    public:
        string Subject;
        string Publication;
        Teacher(){
            cout<<"Enter subject: ";
            cin>>Subject;
            cout<<"Enter Publication: ";
            cin>>Publication;
        }

        void print(){
            cout<<"Code: "<<code<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Subject: "<<Subject<<endl;
            cout<<"Publication: "<<Publication<<endl;
        }

};

class officer: public Staff{
    //public:
        char grade;
        officer(){
            cout<<"Enter grade: ";
            cin>>grade;
        }

        void print(){
            cout<<"Code: "<<code<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Grade: "<<grade<<endl;
        }

};

struct typist: public Staff{
    public:
        int speed;
        typist(){
            cout<<"Enter speed: ";
            cin>>speed;
        }

        char print(){
            cout<<"Code: "<<code<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Speed: "<<speed<<endl;
        }

};

class regular: public typist{
    public:
        int print(){
            cout<<"Code: "<<code<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Speed: "<<speed<<endl;
        }
};

class casual: public typist{
public:
    char daily;
    int wages;

    casual(){
        cout<<"Enter daily: ";
        cin>>daily;
        cout<<"Enter wages: ";
        cin>>wages;
    }

    void print(){
            cout<<"Code: "<<code<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Speed: "<<speed<<endl;
            cout<<"Daily: "<<daily<<endl;
            cout<<"Wage: "<<wages<<endl;
        }

};

int main(){

    while(1>0){
        int choice;
        cout<<"Enter 1 for Staff\n";
        cout<<"Enter 2 for Teacher\n";
        cout<<"Enter 3 for Typist\n";
        cout<<"Enter 4 for Officer\n";
        cout<<"Enter 5 for Regular\n";
        cout<<"Enter 6 for Casual\n";
        cin>>choice;

        if(choice==1){
            Staff s1;
            s1.print();
        }
        else if(choice==2){
            Teacher t1;
            t1.print();                        
        }
        else(choice==3){
            typist t1;
            t1.print(); 
        }
        else if(choice==4){
            officer o1;
            o1.print(); 
        }
        if(choice==5){
            regular r1;
            r1.print(); 
        }
        else if(choice==6){
            casual c1;
            c1.print(); 
        }

        int decise;
        cout<<"Enter 0 for another session\n";
        cout<<"Enter 1 to terminate the program\n";
        cin>>decise
        if(decise==1){
            break;
        }
    
    }


    return 0;
}