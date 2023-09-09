#include <iostream>
using namespace std;
struct student
{
    int rollno;
    struct student *next;
};
struct student *first, *last, *newrec;
first = NULL;
last = NULL;
void insert()
{
    newrec = new struct student;
    cout<<"Enter your roll no: ";
    cin>>newrec->rollno;
    if(first == NULL)
    {
        first = newrec;
    }
    else
    {
        first->next = newrec;
        newrec->next = NULL;

    }
    last = newrec;

}
void display()
{
    cout<<first->rollno;
    newrec = first->next;
    while(newrec->next != NULL)
    {
        cout<<newrec->rollno;
        newrec = newrec->next;
    }
}
int main()
{
    insert();
    insert();
}

