#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;


int twosum(vector<int>& nums, int target) {

    unordered_set<int> ump;
    unordered_set<int> visited;
    for (auto&it1 : nums)
        ump.insert(it1);
    //cout<<"len of set is "<<ump.size()<<endl;
    int temp, idx, cnt = 0;
    vector<int> res(2);
    for (idx = 0; idx < nums.size(); idx++) {
        temp = target - nums[idx];
        auto it = ump.find(temp);
        if (it != ump.end()){
            cnt++;
            ump.erase(temp);
            ump.erase(nums[idx]);
        }
    }
    return cnt;
}

int main(void) {
    vector<int> nums1 = {1, 1, 2, 45, 46, 46};
    int target1 = 47;
    vector<int> nums2 = {1,1};
    int target2 = 2;
    vector<int> nums3 = {1,5,3,3,3};
    int target3 = 6;
    vector<int> nums4 = {1,5,1,5};
    int target4 = 6;
    //vector<int> nums5 = {1,5,1,5};
    //int target5 = 2;
    cout<<twosum(nums1, target1)<<endl;
    cout<<twosum(nums2, target2)<<endl;
    cout<<twosum(nums3, target3)<<endl;
    cout<<twosum(nums4, target4)<<endl;
    //cout<<twosum(nums5, target5)<<endl;
    return 0;
}
