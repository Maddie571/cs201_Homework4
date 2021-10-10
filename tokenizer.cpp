//
// Created by Maddie on 10/6/2021.
//

#include "tokenizer.hpp"
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;


string getLine()
{
    string s;
    cout << "Enter a word, or a keyboard smash, enter 'end' to end";
    cin >> s;
    return s;
}
bool readLine(string & str){
    if (str.size() > 0){
        return true;
    }
    return false;
}
unsigned stringToTokensWS(const string & input,vector<string> & tokens){

}