#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hello World" << endl;
    string words[4] = {"This ", "is", "a", "test!"};
    
    for(int i = 0; i < sizeof(words); i++)
    {
        cout << words[i] << endl;
    }
    return 0;
}