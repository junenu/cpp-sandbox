#include <iostream>
using namespace std;

int main() {
    char  a;
    char* p;

    p = &a;
    cout << " p = " << (size_t) p << endl
         << "&a = " << (size_t)&a << endl;
}

//  p = 6160789823
// &a = 6160789823