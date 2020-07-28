#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(int argc, char* argv[])
{
    int substrSum = 0;
    string key = argv[1], substr;
    
    for(int i = 11; i < 18; i++)
        substr += key[i];

    for(int i = 0; i < 7; i++)
        substrSum += substr[i];

    if(!(substrSum%7))
    {
        if(regex_match(key, regex("^(([0-3][0-6])|([0-2][0-9]))[0-9]((0[1-3])|(9[5-9]))-OEM-0.......-.....$")))
            cout << "This key is correct\n";
        else
            cout << "This key isn't correct\n";
    }
    else
        cout << "This key isn't correct\n";

    return 0;
}
