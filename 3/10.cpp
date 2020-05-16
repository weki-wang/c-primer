#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(void)
{
    string s1_origin;
    getline(cin, s1_origin);
    if(!s1_origin.empty()){
        for(auto c : s1_origin){
            if(!ispunct(c)){
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}