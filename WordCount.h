#ifndef WORDCOUNT_H
#define WORDCOUNT_H
#include<unordered_map>

class WordCount {
public:
    WordCount(); // constructor
    void addWord(std::string word_to_add); // Method to add 
                                            //  word to wordFrequency map
    void viewWordFrequency(); // Method to view 
                            // count of each word in wordFrequency map and its respective count
    ~WordCount(); // destructor

private:
    int wordCount;
    std::unordered_map<std::string, int> wordFrequency; // map to store word count
};

#endif // WORDCOUNT_H
