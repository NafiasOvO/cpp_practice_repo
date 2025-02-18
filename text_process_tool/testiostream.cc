#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream file("test.txt");
    if (!file.is_open())
    {
        cout << "file input error!" << endl;
    }
    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }
    
    
    return 0;
}