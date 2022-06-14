//075 Call by Reference
//함수 인자를 복사해 사용하지 않고 인자의 주소를 가리키는 포인터를 사용하기 때문에 year변수값이 증가함
//포인터가 가리키는 곳(주소값) 직접 바꿈
#include <iostream>
#include <string>
using namespace std;

void Func1(int &arg)
{
    cout << "변경 전 : " << arg << endl; //10
    arg += 10;
    cout << "변경 후 : " << arg << endl; //20
}

void Func2(string &info)
{
    info += "981년";
}

int main()
{
    int year = 10;
    Func1(year);
    cout << "Func1 함수 종료 후 : " << year << endl; //20
    string king_info = "고려 성종 즉위년 : ";
    Func2(king_info);
    cout << king_info << endl; //고려 성종 즉위년 : 981년
    return 0;
}