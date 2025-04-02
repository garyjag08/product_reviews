#include<iostream>
#include<fstream>
#include<string>
#include "WordCount.h"
using namespace std;

WordCount read_in_file(string filename){
    WordCount wc; // new object of WordClass count
    ifstream readFile(filename); // new object of ifstream
    string file_text; // string to store text (word(s))

    if(!readFile){
        cerr << "Error opening file " << filename << endl;
        return wc;
    }

    while(readFile >> file_text){
        wc.addWord(file_text);
    }
    return wc; 
}

int main(){
    WordCount good = read_in_file("good.txt"); // object of good review class
    WordCount bad = read_in_file("bad.txt"); // object of bad review class 

    good.viewWordFrequency();

    return 0;
}
