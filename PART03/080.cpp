//080 enum class
//enum의 한계 : enum 요소에 속하는 상수들은 일반 변수들처럼 이름이 겹치면 안 되기 때문에 부득이 비슷한 이름으로 대체해 사용했음
//enum class를 통해 같은 이름의 enum 요소 사용 가능함

#include <iostream>
using namespace std;

enum Status
{
    normal = 0,
    abnormal,
    disconnect = 100,
    close
};

//enum은 정수형 값을 가질 수 있어 int, char 형태로 선언 가능
//자료형을 명시하지 않으면 기본적으로 int 형태로 사용 가능
enum class MachineStatus : char
{
    normal = 'n', //110, n
    abnormal, //111, o
    disconnect = 100, //100, d
    close, //101, e
};

int main()
{
    //enum과 다르게 반드시 enum class 요소를 사용하려면 enum class 이름을 먼저 기입해야 함
    //enum class는 같은 이름의 요소를 여러 곳에서 사용할 수 있도록 지원하기 때문에 어느 열거형의 어느 요소인지 명확히 기입해야 함
    MachineStatus machine = MachineStatus::abnormal; 
    // MachineStatus machine = abnormal; (X) 

    if(machine == MachineStatus::normal)
        cout << "Status : normal" << endl;
    else if(machine == MachineStatus::abnormal)
        cout << "Status : abnormal" << endl; //Status : abnormal 출력
    else if(machine == MachineStatus::disconnect)
        cout << "Status : disconnect" << endl;
    else
        cout << "Status : close" << endl;

    cout << "machine : " << static_cast<int>(machine) << ", " << static_cast<char>(machine) << endl; //machine : 111, o

    return 0;
}