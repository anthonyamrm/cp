#include <bits/stdc++.h>
using namespace std;

int main() {
    string nome;
    cin >> nome;

    map<char, char> m;
    for(char character : nome){
        m.insert(make_pair(character, character));
    }

    if(m.size()%2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}