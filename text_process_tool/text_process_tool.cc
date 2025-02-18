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

    void printSorted()
    {
        using namespace std;
        vector<pair<string, int>> vec(wordCount.begin(), wordCount.end());
        sort(vec.begin(), vec.end(), [](auto &a, auto &b)
             { return a.second > b.second; });
        for (const auto &item : vec)
        {
            cout << item.first << ":" << item.second << endl;
        }
    }
};

WordCounter::WordCounter(/* args */)
{
}

WordCounter::~WordCounter()
{
}

int main()
{
    WordCounter counter;
    counter.loadFile("test.txt");
    counter.printSorted();
    return 0;
}