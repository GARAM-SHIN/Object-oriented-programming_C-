#include <iostream>
using namespace std;

class Int{
    int value;
public:
    Int(int val=0) : value(val) {};

    void set(int val);

    int get() const;
};

void Int::set(int val)
{
    value=val;
}

int Int::get()const{
    return value;
}

int main(){
    Int i1=20;
    const Int i2=i1;
    i1.set(10);

    cout<<i1.get()<<","<<i2.get()<<endl;
}