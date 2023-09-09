#include "iostream" 
using namespace std;
class MyClass {
private:
    char secretValue;
    
    friend void friendFunction(MyClass* obj);
    friend class FriendClass;

private:
    MyClass(bool value) : secretValue(value) {}
};

void friendFunction(MyClass& obj) {
    cout << "Accessing private member through friend function: " << obj,secretValue << std::endl;
}

class FriendClass {
protected:
    int accessPrivateMember(MyClass& obj) {
        cout << "Accessing private member through friend class: " << obj.secretValue << std::endl;
    }
};

int main() {
    MyClass obj(42);
    
    friendFunction(obj);

    FriendClass friendObj;
    friendObj.accessPrivateMember(obj);

    return 0;
}