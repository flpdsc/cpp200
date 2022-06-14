//077 const변수
//상수로, C언어의 #define을 대체하는 C++ 문법으로 해당 변수는 변경되지 않기 때문에 코드 최적화에 효과가 있음
//일반적으로 변경되지 않을 변수들을 const로 선언해 따로 관리하는데, 이럴 경우 매번 변수 선언하는 행위를 생략할 수 있어서 업무에 효율적
//const는 함수 인자, 변수, 포인터 등에도 사용할 수 있음

#include <iostream>
#include <string>
using namespace std;
int main()
{
    const string kMyJob = "developer";

    string question = "Who are you : ";
    string answer = "My job is : ";

    cout << question << kMyJob << endl; //Who are you : developer
    cout << answer << kMyJob << endl; //My job is : developer
    return 0;
}