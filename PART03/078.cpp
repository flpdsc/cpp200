//078 const포인터

#include <iostream>
using namespace std;
int main()
{
    int num1 = 10;
    int num2 = 20;

    //const int를 가리키는 의미로 가리키는 대상 변경 가능하지만 const int이므로 값을 직접 변경할 수 없음.
    //가리키는 대상을 변경할 수 있지만, 가리키는 대상의 값을 변경할 수 없음
    int const *ptr1; 
    ptr1 = &num1;
    // ptr1 = num1;
    ptr1 = &num2;

    //int를 가리키는 const 포인터로 초기값이 반드시 필요하며, 가리키는 대상 변경 불가
    int *const ptr2 = &num1;
    *ptr2 = num2;
    // *ptr2 = &num2;
    
    return 0;
}