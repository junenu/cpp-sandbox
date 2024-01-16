#include <iostream>
using namespace std;

void BirthMonth() {
    int month;

    cout << "あなたは何月生まれですか？" << flush;
    cin >> month;

    if(1 <= month && month <= 12 ){
        cout << "ほお＾＾ " << month << "月生まれなんですね" << endl;
    } else {
        cout << "ありゃ " << month << "月は存在しないみたいよ" << endl;
    }
}

int main() {
    BirthMonth();
    BirthMonth();
}