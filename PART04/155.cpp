//155 반복자 iterator
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> data({1, 2, 3});
    
    //벡터의 반복자 생성
    for(vector<int>::iterator iter=data.begin(); iter!=data.end(); ++iter)
    {
        cout << *iter << ", "; //1, 2, 3, 
    }

    //c는 const로 반복자를 통해 값을 수정할 수 없도록 설정
    for(auto iter=data.cbegin(); iter!=data.cend(); ++iter)
    {
        cout << *iter << ", "; //1, 2, 3, 
    }

    //r은 reverse(?)
    for(auto iter=data.rbegin(); iter!=data.rend(); ++iter)
    {
        cout << *iter << ", "; //3, 2, 1, 
    }

    data.clear(); //벡터 내부 데이터 모두 삭제 

    return 0;
}