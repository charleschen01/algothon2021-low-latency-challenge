#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    while (cin >> s) {
        size_t start = s.find_last_of(',')+1;
        cout << (stod(s.substr(start,s.size()-start)) < 0.000342) << endl;
    }
    return 0;
}
