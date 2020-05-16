#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(void)
{
    string s1("hello world!!!");
    decltype(s1.size()) pun_counts = 0;
    for(auto c:s1){
        if(ispunct(c))
            pun_counts ++;
    }
    cout << pun_counts << endl;
    return 0;
}