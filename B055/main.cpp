#include <iostream>
#include <vector>
using namespace std;

struct fee{
    int a, b, c, d;
};

int main(){
    int n, x;
    cin >> n >> x;
    vector<fee> taxi(n);
    for(auto &i : taxi) cin >> i.a >> i.b >> i.c >> i.d;

    int ansmax = 0, ansmin = 1e9;

    for(int i = 0; i < n; i++){
        int cost = 0;
        int presentDist = 0;
        auto car = taxi[i];
        presentDist += car.a;
        cost += car.b;
        while(presentDist <= x){
            presentDist += car.c;
            cost += car.d;
        }
        ansmax = max(ansmax, cost);
        ansmin = min(ansmin, cost);
    }

    cout << ansmin << ' ' << ansmax << endl;
    return 0;
}