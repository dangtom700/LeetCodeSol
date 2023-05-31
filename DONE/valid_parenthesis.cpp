/*
20. Valid Parentheses
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.

Status: DONE
*/

#include<iostream>
#include<map>

bool answer1(std::string s){
    std::map<char,int> parenthesis = {{'(',0}, {')',0}, {'[',0}, {']',0}, {'{',0}, {'}',0}};
    bool Answer = false;
    for(char letter: s){
        if(letter == '(' || letter == '[' || letter == '{') parenthesis.at(letter) += 1;
        if(letter == ')') parenthesis.at('(') -= 1;
        if(letter == ']') parenthesis.at('[') -= 1;
        if(letter == '}') parenthesis.at('}') -= 1;
    }
    return parenthesis.at('(') == 0 && parenthesis.at('[') == 0 && parenthesis.at('{') == 0;
}

int main(){
    std::string s = "([)]";
    bool Answer = answer1(s);
    std::cout << Answer << std::endl;
    return 0;
}