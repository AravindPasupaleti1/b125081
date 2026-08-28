
#include <iostream>
#include <cstring>
using namespace std;

// Find length
int information(char str[])
{
    return strlen(str);
}

// Count character in complete array
int information(char str[], char ch)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            count++;
    }

    return count;
}

// Count character in first k positions
int information(char str[], char ch, int k)
{
    int count = 0;

    for (int i = 0; i < k && str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            count++;
    }

    return count;
}

int main()
{
    char str[100], ch;
    int k;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Length = " << information(str);

    cout << "\nEnter character to count: ";
    cin >> ch;

    cout << "Total occurrence = " << information(str, ch);

    cout << "\nEnter k: ";
    cin >> k;

    cout << "Occurrence in first " << k << " positions = "
         << information(str, ch, k);

    return 0;
}