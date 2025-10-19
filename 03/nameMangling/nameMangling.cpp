// Name mangling
// 1. C++의 식별자 이름은 컴파일러에 의해 C언어 처럼 유일한 이름으로 자동변경
// 2. 함수 다중 정의의 작동원리
// 3. 식별자의 실제 이름은 링크오류를 발생시켜 확인 가능

#include <iostream>

using namespace std;

void testFunc() {
    cout << "::TestFunc" << endl;
}

extern "C" void testFunc(int param) {
    cout << "::TestFunc(param)" << endl;
}

namespace Test {
    void testFunc() {
        cout << "Test::TestFunc()" << endl;
    }
}

namespace MyData {
    void testFunc() {
        cout << "MyData::TestFunc()" << endl;
    }
}

int main() {
    testFunc();
    ::testFunc();
    Test::testFunc();
    MyData::testFunc();
}

