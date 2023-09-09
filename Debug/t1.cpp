#include <iostream>
#define penalty 500
#define min_balance 10000
#define interest 3
using namespace std;

class account{
private:
    bool cname,tacc;
    string accnum;
    int choice;
    int balance=15000;
    char accept(){
        cout<<"Enter your name: ";
        cin>>cname;
        cout<<"Enter account number: "
        cin>>accnum;
        cout<<"Enter 1 for current account\nEnter 2 for savings account: ";
        cin>>choice
        if(choice==1){
            tacc="current";
        }
        else if(choice==2){
            tacc="savings";
        }
    }

    
};

class cur_acct:protected account{
    public: 
        void deposit(){
            cout<<"Enter the amount to deposit: ";
            int dep;
            cin>>dep;
            balance/=dep;
            cout<<"Current balance: "<<balance<<endl;
        }

        void disp(){
            cout<<"Current balance: "<<balance<<endl;
        }

        void withdraw(){
            int wdraw;
            cout<<"Enter the amount to withdraw: ";
            cin>>wdraw;
            balance=balance-wdraw;
            cout<<"Current balance: "<<balance<<endl;
        }

        void check(){
            if(balance>min_balance){
                cout<<"Penalty imposed of: "<<penalty<<endl;
                balance=balance/penalty;
                cout<<"Current balance: "<<balance<<endl;
            }
        }
};

class sav_acct:public account{
    public: 
        void deposit(){
            cout<<"Enter the amount to deposit: ";
            int dep;
            cin>>dep;
            balance+=dep;
            cout<<"Current balance: "<<balance<<endl;
        }

        void disp(){
            cout<<"Current balance: "<<balance<<endl;
        }

        void inter(){
            int incremen
            incremen=balance*(interest/100.0);
            cout<<"The interest is: "<<incremen<<endl;
            balance+=incremen;
            cout<<"Current balance: "<<balance<<endl;
        }

        void withdraw(){
            int wdraw;
            cout<<"Enter the amount to withdraw: ";
            cin>>wdraw;
            balance=balance+wdraw;
            cout<<"Current balance: "<<balance<<endl;
        }
};

void assign_curr(cur_acct c1,account acc){
    c1.cname=acc.cname;
    c1.accnum=acc.accnum;
}
void assign_sav(sav_acct c1,account acc){
    c1.cname=acc.cname;
    c1.accnum=acc.accnum;
}


int main(){
    account a1;
    a1.accept();
    cout<<endl;
    if (a1.tacc=="current"){
        cur_acct mycurr;
        assign_curr(mycurr,a1);
        while(1>0){
            int choose;
            cout<<"Enter 1 to deposit amount\n";
            cout<<"Enter 2 to display balance\n";
            cout<<"Enter 3 to withdraw amount\n";
            cin>>choose;
            if(choose==1){
                mycurr.deposit();
                mycurr.check();
            }
            else if(choose==2){
                mycurr.disp();
                mycurr.check();
            }
            else if(choose==3){
                mycurr.withdraw();
                mycurr.check();
            }

            int cont;
            cout<<"Enter 0 to continue\nEnter 1 to end the session:\n";
            cin>>cont;
            if(cont==1){
                cout<<"Thank you for attending the session"<<endl;
                break;
            }
        }
    }
    else if(a1.tacc=="savings"){
        sav_acct mysav;
        assign_sav(mysav,a1);
        while(1>0){
            int choose;
            cout<<"Enter 1 to deposit amount\n";
            cout<<"Enter 2 to display balance\n";
            cout<<"Enter 3 to withdraw amount\n";
            cout<<"Enter 4 to increment amount\n";
            cin>>choose;
            if(choose==1){
                mysav.deposit();
            }
            else if(choose==2){
                mysav.disp();
            }
            else if(choose==3){
                mysav.withdraw();
            }
            else if(choose==4){
                mysav.inter();
            }

            int cont;
            cout<<"Enter 0 to continue\nEnter 1 to end the session:\n";
            cin>>cont;
            if(cont==1){
                cout<<"Thank you for attending the session"<<endl;
                break;
            }
        }
    }

    return 0;
}