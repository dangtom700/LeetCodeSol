/*
20. Valid Parentheses
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
*/

#include<iostream>
#include<map>

bool answer(std::string s){
    std::map<char,int> parenthesis = {{'(',0}, {')',0}, {'[',0}, {']',0}, {'{',0}, {'}',0}};
    bool Answer = false;
    for(char letter: s){
        parenthesis.at(letter) += 1;
        if(letter == '('){
            parenthesis.at(letter) == parenthesis.at(')')+1 ? Answer = true: Answer = false;
        }
        if(letter == '['){
            parenthesis.at(letter) == parenthesis.at(']')+1 ? Answer = true: Answer = false;
        }
        if(letter == '{'){
            parenthesis.at(letter) == parenthesis.at('}')+1 ? Answer = true: Answer = false;
        }
        if(Answer == false) return Answer;
    }
    return parenthesis.at('(') == parenthesis.at(')') 
            && parenthesis.at('[') == parenthesis.at(']') 
            && parenthesis.at('{') == parenthesis.at('}');
}
int main(){
    std::string s = "(]";
    
    bool Answer = answer(s);
    std::cout << Answer;
    return 0;
}