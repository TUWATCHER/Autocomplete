#include <iostream>
#include <algorithm>
#include "Trie.h"


int main()
{   
    struct TrieNode* root = getNewNode();
    insert(root, "ok");
    insert(root, "okej");
    insert(root, "okay");
    insert(root, "cat");
    insert(root, "catarpilar");
    insert(root, "catastrophy");
    insert(root, "dog");
    insert(root, "man");

    string input;   
    
    while(true)
    {
        std::cout << "Press Ctrl + C to exit\n";
        std::cout << "Enter prefix: ";
        cin >> input;
        std::transform(input.cbegin(), input.cend(), input.begin(), [](unsigned char c) {return std::tolower(c); });

        int complete = printPrefixes(root, input);

        if (complete == -1)
        {
            std::cout << "No other was found\n";
        }
        else if (complete == 0)
        {
            std::cout << "No complition were found\n";
        }
       
    }
    
    return 0;
}

