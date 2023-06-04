// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

// Example 1:
// Input: s = "leetcode"
// Output: 0

// Example 2:
// Input: s = "loveleetcode"
// Output: 2

// Example 3:
// Input: s = "aabb"
// Output: -1





#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int solve(string temp){
    int freq[26]={0};

    for(auto ch: temp) freq[ch-'a']++;

    for(int i=0;i<temp.size();i++){
        if(freq[temp[i]-'a']==1) return i;
    }
    return -1;
}

int main(){
     string temp="loveleetcode";
    cout<<solve(temp);
}