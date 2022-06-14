//074 Call by Value
//인자로 넘어온 값을 내부적으로 복사해 사용
#include <iostream>
using namespace std;

void Func(int arg)
{
    cout << "변경 전 : " << arg << endl; //10
    arg += 10;
    cout << "변경 후 : " << arg << endl; //20
}

int main()
{
    int year = 10;
    Func(year);
    cout << "함수 종료 후 : " << year << endl; //10
    return 0;
}