#include <iostream>
using namespace std;

int main()
{
    
    char str[100];

    
    cout << "Enter a string :" << endl;
    cin.get(str, 100);

    
    for (int i = 0; str[i] != '\0'; i++)
    {
        
        if (islower(str[i]))
        {
            str[i] = char(toupper(str[i]));
        }
        else
        {
            str[i] = char(tolower(str[i]));
        }
    }
    
    cout << "Final string " << str << endl;
}
