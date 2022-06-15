//157 list(remove, reverse)
#include <iostream>
#include <list>
using namespace std;

void Print(const list<int> &data)
{
    cout << "== Print ==" << endl;
    for(auto iter=data.begin(); iter!=data.end(); ++iter)
        cout << *iter << ", ";
    cout << endl;
}

bool IsOdd(int arg)
{
    return arg%2 == 0 ? 0 : 1;
}

int main()
{
    list<int> data1({1,2,4,2,7,10,13,14});
    data1.remove(2); //data1 요소 중 2 모두 삭제 {1,4,7,10,13,14}
    data1.remove_if(IsOdd); //data1 요소 중 홀수 모두 삭제 {4, 10, 14}
    Print(data1); //4, 10, 14, 
    data1.reverse(); //역순 재배치
    Print(data1); //14, 10, 4, 
    return 0;
}