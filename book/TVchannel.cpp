#include <iostream>
#include <string>
using namespace std;

int main() {
    int channel;
    string channel_name;

    cout << "チャンネル番号を入力してください:";
    cin >> channel;


    switch (channel)
    {
    case 1:
        channel_name = "NHK総合";
        break;
    case 2:
        channel_name = "NHK Eテレ";
        break;
    case 4:
        channel_name = "日本テレビ";
        break;
    case 5:
        channel_name = "テレビ朝日";
        break;
    case 6:
        channel_name = "TBS";
        break;
    case 7:
        channel_name = "テレビ東京";
        break;
    case 8:
        channel_name = "フジテレビ";
        break;
    default:
        channel_name = "割り当てなし";
        break;
    }

    cout << "チャンネル名は" << channel_name << "です" << endl;

    return 0;
}