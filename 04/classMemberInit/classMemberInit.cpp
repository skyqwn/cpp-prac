#include <iostream>

using namespace std;

class Test
{
    public:
        Test(): data1(10), data2(20) {
            data2 = 300; // 생성자의 안에 정의한게 제일 나중에
        }

        int data1, data2;

        void printData();
};

void Test::printData() {
    cout << data1 << endl;
    cout << data2 << endl;
}

int main() {
    Test test;
    test.printData();

    return 0;
}