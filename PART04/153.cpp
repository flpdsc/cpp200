//153 vector 수정
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //C++11부터 초기화 리스트 사용 가능하여 아래처럼 초기화 가능
    vector<int> data1({1, 2, 3});
    vector<int> data2 = {10, 20, 40};

    //swap함수를 통해 data1 <-> data2 변경가능
    data1.swap(data2); //data1={10, 20, 40}, data2={1, 2, 3}
    //insert(벡터 내부 위치, 삽입할 내용)
    data1.insert(data1.begin()+1, 20); //data1={10, 20, 20, 40}

    cout << "== data1 ==" << endl;
    for(int i=0; i<data1.size(); ++i)
        cout << "data1 (" << i << ") : " << data1.at(i) << endl; //data1={10, 20, 20, 40}
    cout << endl << "== data2 ==" << endl;
    for(int i=0; i<data2.size(); ++i)
        cout << "data2 (" << i << ") : " << data2.at(i) << endl; //data2={1, 2, 3}

    //erase(시작점, 끝점+1), 즉 두번째 인자는 처음 기준점 +2일 경우 총 두개의 자료가 지워짐
    data2.erase(data2.begin(), data2.begin()+2); //data2={3}

    data2.push_back(100); //data2={3, 100}
    data2.push_back(200); //data2={3, 100, 200}
    data2.push_back(300); //data2={3, 100, 200, 300}

    data2.pop_back();  //data2={3, 100, 200}

    //다른 벡터의 데이터를 복사해 일괄적으로 추가 가능
    //insert(벡터 삽입 위치, 복사할 데이터 시작위치, 복사할 데이터 종료위치)
    data2.insert(data2.end(), data1.begin(), data1.end()); //data2={3, 100, 200, 10, 20, 20, 40}
    cout << endl << "== data2 ==" << endl;
    for(int i=0; i<data2.size(); ++i)
        cout << "data2 (" << i << ") : " << data2.at(i) << endl; //data2={3, 100, 200, 10, 20, 20, 40}

    return 0;
}