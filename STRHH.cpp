#include <iostream>
#include <string>
using namespace std;

void wordPrinter(string word);

int main()
{
    // Variables and declarations

    int cases;
    cin >> cases;

    string words;

    // Get the words and print the desired result using wordPrinter(string word)

    for(int i=0; i<cases ; i++)
        {
            cin >> words;
            wordPrinter(words);
        }

    return 0;
}

// Print the 2*n letter of a certain halved word.

void wordPrinter(string word)
{
    int j = 0;

    for(j; j<word.length()/2 ; j = j+2)
        {
            cout << word[j];
        }
    cout << endl;
}
