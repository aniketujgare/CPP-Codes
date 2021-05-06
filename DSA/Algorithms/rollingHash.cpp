//Rolling Hash for searching pattern in String
#include <bits/stdc++.h>
using namespace std;
#define alphabet 26 //No of characters in alphabet
int hshAlBet[alphabet + 1];
const int p = 5381; // random prime number for modulo hash

int hashFunc(string ptr)
{
    //hash alphabets a-z in hshAlphabet array
    for (int i = 1; i <= 26; i++)
        hshAlBet[i] = i;
        
    int hshValue = 0;
    int lenPtr = ptr.size() - 1; //len of pattern
    for (int i = 0; i < ptr.size(); i++)
    {
        hshValue += (hshAlBet[ptr[i] - 'A' + 1]) * pow(26, lenPtr);
        hshValue %= p;
        lenPtr--;
    }
    return hshValue;
}
int SearchPattern(string str, string ptr)
{
    const int ptrHash = hashFunc(ptr); //hash value of pattern
    int strLen = str.length();
    int ptrLen = ptr.length();
    int maxPowerOfPtr = ptrLen-1;
    //Traversing string
    for (int i = 0; i < strLen - ptrLen; i++)
    {
        // sliding window of size ptr
        string window = str.substr(i, ptrLen);
        // hash value of selected window
        int windowHash = hashFunc(window);
        if (windowHash == ptrHash)
        {
            return i;
        }
        else
        {
            //omitting last char of window 
            windowHash -= str[i] * pow(alphabet, maxPowerOfPtr);
            //shfting rem 2 val to left of base alphabet ~ 26
            windowHash *= alphabet;
            //Adding hsh val of next char in window
            windowHash += hshAlBet[str[i + ptrLen] - 'A' + 1];
        }
    }
    return -1;
}
int main()
{
    string str = "AABAACBAA"; //Given String
    string ptr = "CBA";       // Pattern to search

    int index = SearchPattern(str,ptr);
    index>=0 ? cout<<"Found at index "<<index : cout<<"Not Found";
    
    return 0;
}