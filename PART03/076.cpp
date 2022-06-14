//076 Call by Address
#include <iostream>
using namespace std;

//함수는 인자로 포인터를 받는데, 이 경우 함수를 호출하는 곳에서는 주소를 명시적으로 전달해야 함
void Func1(bool *is_on)
{
    cout << "Call by Address : " << sizeof(is_on) << endl; // 4 or 8
}

//함수는 인자로 주소를 받는데, 이 경우 함수 호출하는 곳에서는 값을 그대로 넘김. 하지만 받는 측에서는 포인터로 받음
void Func2(bool &is_on)
{
    cout << "Call by Reference : " << sizeof(is_on) << endl; // 1
}

int main()
{
    bool is_tmp = true;

    Func1(&is_tmp); //변수의 주소를 명시적으로 알려주면 포인터의 크기(4 혹은 8바이트)로 인자가 넘어가지만
    Func2(is_tmp); //넘어오는 값을 포인터로 받으면 자료형만큼의 바이트(1바이트) 사용

    return 0;
}