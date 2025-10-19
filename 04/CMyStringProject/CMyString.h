#pragma once
#include <iostream>
using namespace std;

class CMyString
{
public:
    CMyString();
    ~CMyString();

    char* getData() {
        return m_pszData;
    }

    void setData(const char* pParam);

private:
    char* m_pszData = nullptr;
};
