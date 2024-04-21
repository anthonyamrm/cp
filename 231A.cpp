#include <iostream>
using namespace std;

int main(){

int n,r=0;
bool a,b,c;

cin >> n;
for(int i=0;i<n;i++){
    cin >> a >> b >> c;
    if(a && b && c){
       r++; 
    }

    else if((a && b) || (a && c) || (b && c)){
        r++;
    }
}
    cout << r << endl;
    return 0;
}