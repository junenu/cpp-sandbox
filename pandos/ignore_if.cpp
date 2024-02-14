#include <iostream>
using namespace std;

#define IGNORE_INTERFACES {"lo", "bond0", "dummy0", "tunl0", "sit0"}
#define IF_NAMESIZE 32

bool is_ignore_interface(const char *ifname)
{
    char ignore_interfaces[][IF_NAMESIZE] = IGNORE_INTERFACES;
    for(int i = 0; i < sizeof(ignore_interfaces) / IF_NAMESIZE; i++){
        if(strcmp(ignore_interfaces[i], ifname) == 0){
            return true;
        }
    }
    return false;
}
int main()
{
    cout << "lo is " << is_ignore_interface("lo") << endl;
    cout << "Eth1 is " << is_ignore_interface("Eth1") << endl;
}

/*
$ ./ignore_if                   
lo is 1
Eth1 is 0
*/