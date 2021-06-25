map <int, int> m;
    int currSum = 0, maxLen = 0;
    for (int i=0; i<n; i++) {
        if (a[i] == 0)
            maxLen = max(1, maxLen);
        currSum += a[i];
        if (currSum == 0)
            maxLen = i+1;
        if (m.find(currSum) != m.end()) {
            maxLen = max (maxLen, i - m[currSum]);
        }
        else
            m.insert (make_pair(currSum, i));
    }
    return maxLen;