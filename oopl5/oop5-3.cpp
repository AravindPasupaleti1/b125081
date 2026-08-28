
#include <iostream>
using namespace std;

// Check integer
void check(int n)
{
    if (n > 0)
        cout << "The number is Positive";
    else if (n < 0)
        cout << "The number is Negative";
    else
        cout << "The number is Zero";
}

// Check character
void check(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        cout << "The character is Uppercase";
    else if (ch >= 'a' && ch <= 'z')
        cout << "The character is Lowercase";
    else
        cout << "The character is not an alphabet";
}

// Search character in array
void check(char arr[], int n)
{
    char target;
    bool found = false;

    cout << "Enter character to search: ";
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Character found in the array";
    else
        cout << "Character not found in the array";
}

int main()
{
    int n, number;
    char ch;

    cout << "Enter an integer: ";
    cin >> number;
    check(number);

    cout << "\n\nEnter a character: ";
    cin >> ch;
    check(ch);

    cout << "\n\nEnter size of character array: ";
    cin >> n;

    char arr[n];

    cout << "Enter characters: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    check(arr, n);

    return 0;
}
