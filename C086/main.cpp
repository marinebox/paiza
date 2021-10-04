#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;

    string ans = "";
    for(auto c : s){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') continue;
        else ans.push_back(c);
    }

    cout << ans << endl;
    return 0;
}