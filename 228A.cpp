#include <iostream>
#include <map>

using namespace std;

int main() {
    
    int c;
    map<int,int> cores;

    for(int i=0; i<4; i++){
        cin >> c;
        cores.insert(make_pair(c, c));
    }

    cout << 4-cores.size() << endl;
    return 0;
}