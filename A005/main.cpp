#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a, b, n;
    cin >> a >> b >> n;
    vector<pair<int, int>> score(a);
    vector<pair<int, int>> pin(a);
    int frameNumber = 0;
    bool isFirst = true;
    for(int i = 0; i < n; i++){
        string tmp;
        cin >> tmp;
        int t;
        if(tmp == "G") t = 0;
        else if(tmp.size() != 1){
            t = atoi(tmp.c_str());
        }
        else t = tmp[0] - '0';

        if(t == b && isFirst){
            // Strike
            
        }
    }
}