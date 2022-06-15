//158 list (merge, splice)
//merge : 오름차순으로 자동정렬, 인자로 사용되는 컨테이너는 merge 이후 데이터가 삭제됨
//splice : 이어붙임, 인자로 사용되는 컨테이너는 splice 이후 데이터 삭제됨

#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> data1;
    list<int> data2({3,4,5});

    data1.push_back(2); //data1={2}
    data2.push_back(7); //data2={3,4,5,7}

    data1.merge(data2); //data1={2,3,4,5,7}

    cout << "== List Merge ==" << endl;
    for(list<int>::iterator it=data1.begin(); it!=data1.end(); ++it)
        cout << ' ' << *it; // 2 3 4 5 7
    cout << endl;

    data2 = {3,4,5};
    data1.splice(data1.begin(), data2); //data1={3,4,5,2,3,4,5,7}

    cout << "== List Splice ==" << endl;
    for(auto it=data1.begin(); it!=data1.end(); ++it)
        cout << ' ' << *it; // 3 4 5 2 3 4 5 7
    cout << endl;

    return 0;
}