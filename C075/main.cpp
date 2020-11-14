#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int f, c = n, p = 0;
    for(int i = 0; i < m; i++){
        cin >> f;
        if(f <= p){
            p -= f;
        }
        else{
            c -= f;
            p += f / 10;
        }
        cout << c << ' ' << p << endl;
    }

    return 0;
}