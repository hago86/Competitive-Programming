string isValid(string s) {
    unordered_map<char, int> ump;
    vector<int> counts;
    int idx, firstvalue, secondvalue, secondlastvalue, lastvalue;
    
    
    for (idx = 0; idx < s.size(); idx++) {
        ump[s[idx]]++;
    }
    for (auto it = ump.begin(); it != ump.end(); it++) {
        counts.push_back(it->second);
    }

    for (idx = 0; idx < counts.size(); idx++) 
        cout<<counts[idx]<<endl;

    if (counts.size() == 1)
        return "YES";
    sort(counts.begin(), counts.end());
    firstvalue      = counts[0];
    secondvalue     = counts[1];
    lastvalue       = counts[counts.size()-1];
    secondlastvalue = counts[counts.size()-2];
    //if all the chars in the string has equal frequency then
    if (firstvalue == lastvalue) return "YES";
    // if freq of one single char is 1 and rest all are x
    if ((firstvalue == 1) &&(secondvalue == lastvalue)) return "YES";
    // if freq of all chars are x and only one char is x+1
    if ((firstvalue == secondvalue) && (secondlastvalue == secondvalue) && (secondlastvalue == lastvalue-1)) return "YES";

    return "NO";
}
