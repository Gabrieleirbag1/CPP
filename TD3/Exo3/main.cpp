#include <iostream>
#include <queue>
#include <stack>
#include <cctype>

using namespace std;

bool isPalindrome(const string &input)
{
    queue<string> inputQueue;
    stack<string> inputStack;
    for (int i = 0; i < input.length(); i++)
    {
        inputQueue.push(string(1, input[i]));
        inputStack.push(string(1, input[i]));
    }

    for (int i = 0; i < input.length(); i++)
    {
        if (inputQueue.front() != inputStack.top())
        {
            return false;
        }
        inputQueue.pop();
        inputStack.pop();
    }

    return true;
}

int main()
{
    cout << boolalpha;
    cout << "Is 'racecar' a palindrome? - "
         << isPalindrome("racecar") << endl;
    cout << "Is 'hello' a palindrome? "
         << isPalindrome("hello") << endl;
    cout << "Is 'kayak' a palindrome? "
        << isPalindrome("kayak") << endl;

    return 0;
}