#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;



int main() {
	vector<string> v = {"345366", "029323", "38239"};
	/*vector<int> temp(v.size());
	for (int idx = 0; idx < v.size(); idx++)
	    temp[idx] = stoi(v[idx]);*/
	//sort(v.begin(), v.end(), greater1());
	sort(v.begin(), v.end(), [](string s1, string s2) -> bool {
    return atoi(s1.c_str()) > atoi(s2.c_str()); 
    });
	for (auto it = v.begin(); it != v.end(); it++) 
        cout << *it << " "; 
	//sort(v.begin(), v.end(), [](const int a, const int b) {return a > b; });
	//cout<<v[0]<<" "<<v[1]<<" "<<v[2];
	
	/*for (const auto &i: v) {
	    cout << i << ' '<<endl;
	}*/
		
	//for (const auto &i: v)
    //		cout << i << ' '<<endl;
	return 0;
}
