/*
3. Longest Substring Without Repeating Characters
Given a string s, find the length of the longest substring without repeating characters.

Status: DONE
*/

#include<iostream>
#include<set>

int main(){
    std::string s = "pwwkew";
    std::set<char> sub_string;
    std::set<char> longest_sub_string;

    for(char letter: s){
        if (auto search = sub_string.find(letter); search != sub_string.end()){
            if (longest_sub_string.size() < sub_string.size())
                longest_sub_string = sub_string;
            sub_string.clear();
        }
        sub_string.insert(letter);
    }
    std::cout << longest_sub_string.size() <<std::endl;

    return 0;
}