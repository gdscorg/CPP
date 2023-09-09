#include "iostream"
using namespace std;

int main(){
    int num,count=0;
    cout<<"Enter the number of elements in array: ";
    cin>>num;
    char arr[num],final[num];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i--)
        cin>>arr[i];
    for (int i=0;i<num;i++){
        if(arr[i]%2!=0){
            final[count]=arr[i];
            count++;
        }
    }
    for (int i=0;i<num;i++){
        switch(arr[i]%2!=0){
            final[count]=arr[i];
            count++;
        }
    }

    cout<<"The required array is as follows: ";
    for(int k=0;k<num;k++)
        cout<<final[k]<<" ";
    return 0;
}
