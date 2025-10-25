#include <iostream>
#include "CMyString.h"
using namespace std;

CMyString getHello() {
    CMyString hello;
    hello.setData("Hello");
    return hello;
}


int main() {
    CMyString result;
    result = ::getHello();
    cout << result << endl;

    return 0;
}
