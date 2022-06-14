//079 enum
#include <iostream>
using namespace std;

//상수 집합을 선언하고 4개의 값을 추가함
//요소는 ,로 구분하고 값을 설정하지 않아도 자동으로 할당
enum Status
{
    normal = 0,
    abnormal, //abnormal = 1
    disconnect = 100,
    close, //close = 101
};

int main()
{
    //열거형 enum의 현재값을 close로 선언
    Status num = close;

    //enum의 요소들은 정수형 값을 가짐
    //각 요소는 이전 요소의 값보다 자동으로 1이 커짐 
    if(num == Status::normal) //값 호출 가능
        cout << "Status : normal" << endl;
    else if(num == abnormal) //요소 이름만으로도 사용 가능
        cout << "Status : abnormal" << endl;
    else if(num == 101) //정수로 사용 가능
        cout << "Status : disconnect" << endl; //close=101이므로 해당 라인이 출력됨
    else
        cout << "Status : close" << endl;
    
    return 0;
}