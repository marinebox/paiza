#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m, n, k;
    cin >> m >> n >> k;

    vector<int> supporter(m, 0);
    for(int i = 0; i < k; i++){
        int a;
        cin >> a; a--;
        if(n != 0){
            n--; supporter[i]++;
        }
        for(int j = 0; j < m; j++){
            if(i == j) continue;
            if(supporter[j] > 0){
                supporter[j]--;
                supporter[i]++;
            }
        }
    }
    
    int maxSup = 0;
    for(auto sup : supporter){
        maxSup = max(maxSup, sup);
    }
    for(int i = 0; i < m; i++){
        if(supporter[i] == maxSup) cout << i + 1 << endl;
    }

    return 0;
}