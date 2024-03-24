#include <iostream>
using namespace std;

double height; // 身長
double weight; // 体重
double bmi; // BMI

int main() {
    cout << "身長を入力してください(m):";
    cin >> height;
    cout << "体重を入力してください(kg):";
    cin >> weight;
    bmi = weight / (height * height);
    cout << "BMIは" << bmi << "です" << endl;
    if(bmi < 18.5){
        cout << "痩せすぎです" << endl;
    }else if(bmi < 25){
        cout << "標準です" << endl;
    }else if(bmi < 30){
        cout << "太り気味です" << endl;
    }else{
        cout << "肥満です" << endl;
    }
}

/*
❯ ./bmi
身長を入力してください(m):1.792
体重を入力してください(kg):84.2
BMIは26.2202です
太り気味です
*/