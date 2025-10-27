#include <iostream>

using namespace std;

class MyData
{
public:
    MyData() : data(0) {}

    int getData() {
        return data;
    }

    void setData(int data) {
        this->data = data;
    }

    void setData(double data) = delete;

private:
    int data;
};

int main() {

    MyData a;

    a.setData(10);
    cout << a.getData() << endl;

    MyData b;

    cout << b.getData() << endl;

    return 0;
 }