#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1("i like some one!");
    for(auto c : s1){
        cout << c << endl;
    }
    return 0;
}