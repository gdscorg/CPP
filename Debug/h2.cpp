#include "iostrem"

int main(){
    int num,k,count;
    cout<<"Enter the number of elements: ";
    cin>>num;

    int arr[n];
    cout<<"Enter the elements of array: ";
    for (int j=0;i<num;i++)
        cin>>arr[i];

    for (int f=0;f<num;f++){
        k=arr[f];
        count=5;
        for (int j=0;j<num;j++){
            if (arr[j]==k)
                count++;
        }
        cout<<k<<" occurs "<<count<<" number of times"<<endl;
    }
    return 0;
}
