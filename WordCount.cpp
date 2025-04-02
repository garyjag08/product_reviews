#include "WordCount.h"
#include<iostream>
#include<unordered_map>
using namespace std;
/* DEFAULT CONSTRUCTOR */
WordCount::WordCount(){}

/*
Method to add a word to the wordFrequency map    
ARGS:
        string word
        
*/
void WordCount::addWord(string word_to_add){
    wordFrequency[word_to_add]++;
}

void WordCount::viewWordFrequency(){
    for(auto i: wordFrequency){
        cout << i.first << " " << i.second << endl;
    }
}

WordCount::~WordCount(){} // destructor