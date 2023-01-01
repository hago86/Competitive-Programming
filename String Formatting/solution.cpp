/*
  Reformat string in alphanumeric blocks of 3 characters delimited with spaces.
  At the end of resulting string may contain 1 or 2 blocks with length of two.
*/

#include <iostream>

using namespace std;

int main()
{
    string s = "AAA -CDE --G FFF";
    //string s = "000444455877-63";
    //string s = "02  4444 55 --877-631";
    
    string temp1, temp2;
    int idx = 0;
    
    while (idx < s.size()) {
        char ch = s[idx];
        //if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z') or (isdigit(ch)))
        if (isalnum(ch))
            temp1 += ch;
        idx++;
    }
    cout<<temp1<<endl;
    if (temp1.size() <= 3) {
        cout<<temp1<<endl;
        return 0;
    }
    int count = 0;
    int balance = temp1.size()%3;
    string temp3, temp4;
    if (balance == 1) {
        temp3 = temp1.substr(0, temp1.size()-balance-1);
        temp4 = temp1.substr(temp1.size()-balance-1);
        cout<<"if temp3 "<<temp3<<"temp4 "<<temp4<<endl;
    }
    else if (balance == 2) {
        temp3 = temp1.substr(0, temp1.size()-balance);
        temp4 = temp1.substr(temp1.size()-balance);
        cout<<"else temp3 "<<temp3<<"temp4 "<<temp4<<endl;
    } else {
        temp3 = temp1;
        cout<<"temp3 "<<temp3<<endl;
    }
    
    for (idx = 0; idx < temp3.size();) {
        if (count < 3) {
            temp2 += temp3[idx];
            count++;
            idx++;
        }
        else {
            count = 0;
            temp2 += ' ';
        }
    }
    cout<<"idx "<<idx<<endl;
    cout<<"Ans is "<<temp2+' '+temp4<<endl;

    return 0;
}
