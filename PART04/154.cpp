//154 컨테이너와 배열 복사(copy)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> num1({1,2,3,4,5});
    vector<int> num2;
    copy(num1.begin(), num1.end(), back_inserter(num2)); //back_inserter : num2의 마지막

    for(auto i:num2)
        cout << i << endl; //1 2 3 4 5


    double num3[5] = {1.2,3.4,4.5,5.6,6.77};
    double num4[5];
    copy(begin(num3), end(num3), begin(num4));

    for(auto i:num4)
        cout << i << endl; //1.2 3.4 4.5 5.6 6.77

    return 0;
}