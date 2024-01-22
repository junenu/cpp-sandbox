#include <iostream>
using namespace std;

// 先に関数を宣言する。内容は後ほど
int f(int x, int y);

// main関数を実行この中でf関数を実行。先に関数宣言をしないとエラーになる
int main() {
    cout << "f(1,2) = " << f(1,2) << endl;
    cout << "f(182, 144) = " << f(182, 144) << endl; 
}

// f関数の内容を宣言
int f(int x, int y) {
    return x * 2 + y;
}
