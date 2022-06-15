//156 list(sort, unique, merge)
//이중링크리스트로 구현되어 있으며 삽입, 삭제가 빠름
//특정 원소에 접근하지 못하고, 컨테이너 요소에 접근하기 위해서는 반드시 반복자를 이용해야 함
//랜덤엑세스 at(i), operator[] 지원하지 않으므로 랜덤하게 접근하지 않는 데이터는 list로 구현하는 것이 좋음

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

int main()
{
    list<int> data1({1,2,3,2});
    data1.push_back(3); //1, 2, 3, 2, 3

    data1.sort();
    Print(data1); //1, 2, 2, 3, 3,

    data1.unique();
    Print(data1); //1, 2, 3,

    //data1을 data2 내부로 합병 정렬
    list<int> data2 = {0,5,6};
    data2.merge(data1);
    Print(data2); //0, 1, 2, 3, 5, 6,

    return 0;
}