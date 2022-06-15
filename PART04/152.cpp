//152 vector (assign, at, front, back, empty, size)

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> data;

    //assign : 일괄적으로 특정 영역에 데이터 설정 시 사용하며, 기존의 데이터는 삭제됨 
    data.assign(5, 100); // 0~4까지 정수 100 저장

    for(int i=0; i<data.size(); ++i)
        cout << "data " << i << " : " << data.at(i) << endl; //at : 벡터 내부 인덱스

    //front(), back() => 설정도 가능
    data.front() = 1;
    data.back() = 2;

    if(data.empty())
        cout << "벡터가 비어있습니다." << endl;
    else
        for(int i=0; i<data.size(); ++i)
            cout << "data " << i << " : " << data.at(i) << endl;
    
    return 0;
}