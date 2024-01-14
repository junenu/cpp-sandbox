#include <iostream>
using namespace std;

int main() {
    for (int i=0; i < 10; ++i){
        if(i % 2 == 0){
            cout << i << "は偶数です" << endl;
        }
        else {
            cout << i << "は奇数です" << endl;
        }
    }
}