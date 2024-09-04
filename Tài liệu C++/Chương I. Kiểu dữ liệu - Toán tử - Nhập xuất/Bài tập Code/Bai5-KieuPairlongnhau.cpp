#include <iostream>
#include <utility>

using namespace std;

int main(){
    pair<int, pair<char, int> > p1 = make_pair(28, make_pair('@', 100));
    cout << p1.first << endl;
    cout << p1.second.first << ' ' << p1.second.second << endl;

    return 0;
}
