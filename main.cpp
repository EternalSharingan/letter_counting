#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

string letter_counting(string);

int main()
{
    cout << letter_counting("aaabbcddddeea");
    return 0;
}

string letter_counting(string input)
{
    string output = "";
    char buf[1];
    int c = 0;
    for(int i = 0; i < input.size()+1; i++)
    {
        if(buf[0] == input[i])
        {
            c++;
        }
        else
        {
            if(c != 0)
            {
                output += buf[0] + to_string(c);
                c = 0;
            }
            buf[0] = input[i];
            c++;
        }
    }
    return output;
}
