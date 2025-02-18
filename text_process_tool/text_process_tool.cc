#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <algorithm>

class WordCounter
{
private:
    std::map<std::string, int> wordCount;

public:
    WordCounter(/* args */);
    ~WordCounter();

    void loadFile(const std::string &filename)
    {
        std::ifstream file(filename);
        std::string word;
        while (file >> word)
        {
            wordCount[word]++;
        }
    }

    void printSorted(){
        
    }
};

WordCounter::WordCounter(/* args */)
{
}

WordCounter::~WordCounter()
{
}
