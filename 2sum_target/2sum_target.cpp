#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <climits>

using namespace std;

vector<int> twosum(vector<int>& vec, int target) {
    vector<int> res ={-1, -1};
    //cout<<res.first<"";
    int maxval = INT_MIN;
    unordered_map<int, int> mp;
    size_t idx;

    for (idx = 0; idx < vec.size(); idx++) {
        int temp = target - 30 - vec[idx];
        //cout<<temp<<endl;
        auto it = mp.find(temp);
        if (it != mp.end()) {
            if (max(temp, vec[idx]) > maxval) {
                maxval = max(temp, vec[idx]);
                res[1] = idx;
                res[0] = mp[temp];
            }
        }
        mp.insert({vec[idx], idx});
    }
    return res;
}

int main() {
    vector<int> v1 = {1, 10, 25, 35,60};
    int target1 = 90;
    vector<int> res1(twosum(v1, target1));
    cout<<res1[0]<<" "<<res1[1]<<endl;

    vector<int> v2 = {20, 50, 40, 25, 30, 10};
    int target2 = 90;
    vector<int> res2(twosum(v2, target2));
    cout<<res2[0]<<" "<<res2[1]<<endl;

    vector<int> v3 = {0,0};
    int target3 = 30;
    vector<int> res3(twosum(v3, target3));
    cout<<res3[0]<<" "<<res3[1]<<endl;

    vector<int> v4 = {50, 20, 10, 40, 25, 30};
    int target4 = 90;
    vector<int> res4(twosum(v4, target4));
    cout<<res4[0]<<" "<<res4[1]<<endl;

    vector<int> v5 = {-1, -2, -3};
    int target5 = 25;
    vector<int> res5(twosum(v5, target5));
    cout<<res5[0]<<" "<<res5[1]<<endl;

    return 0;
}
