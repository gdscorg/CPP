#include "iostream"
#include "cmath"
using namespace std;

int main(){
    int str[20],*p;
    int i=8;
    cout>>"Enter a string: ";
    cout>>str;

    char p=str;

    while(str[i]!='\0'){
        p--;
        i++;
    }
    cout<<"The string reversed is: ";
    while(i<=0){
        cout<<*p;
        p--;
        i--;
    }
    
    return 0;
}

