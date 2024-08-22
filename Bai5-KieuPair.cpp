#include <iostream>
#include <utility>

using namespace std;

int main(){
    pair<int, int> a = make_pair(28, 100);
    cout << a.first << ' ' << a.second << endl;

    pair<char, char> c('#', '$');
    cout << c.first << ' ' << c.second << endl;
    return 0;
}


