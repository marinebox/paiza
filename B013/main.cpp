#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int n; cin >> n;
    vector<int> train(n);
    for(int i = 0; i < n; i++){
        int h, m;
        cin >> h >> m;
        int minute = h * 60 + m;
        train[i] = minute;
    }

    const int deadline = 9 * 60;
    int ans = 300;
    for(int i = 0; i < n; i++){
        int t = train[i];
        int departure = t - a;
        int arriveGino = t + b;
        int eta = arriveGino + c;
        if(eta < deadline){
            ans = max(ans, departure);
        }
    }

    int hour, minute;
    hour = ans / 60;
    minute = ans % 60;
    cout << '0' << hour << ':';
    if(minute < 10){
        cout << '0';
    }
    cout << minute << endl;
    return 0;
}