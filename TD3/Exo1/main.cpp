#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void countFrequencyBruteForce(const vector<int> &numbers)
{
    vector<int> alreadySeenNumber = {};
    bool seenNumber;
    for (int i = 0; i < numbers.size(); i++)
    {
        seenNumber = false;
        int number = numbers[i];
        int count = 0;
        for (int j = 0; j < numbers.size(); j++)
        {
            if (numbers[j] == numbers[i])
            {
                count++;
            }
        }
        for (int num : alreadySeenNumber)
        {
            if (num == number)
            {
                seenNumber = true;
                break;
            }
        }
        if (!seenNumber)
        {
            cout << number << " : " << count << endl;
            alreadySeenNumber.push_back(number);
        }
    }
}

map<int, int> countFrequencyOptimal(const vector<int> &numbers)
{
    map<int, int> frequencyMap;
    for (int num : numbers)
    {
        frequencyMap[num]++;
    }
    return frequencyMap;
}

int main(int argc, char const *argv[])
{
    vector<int> numbers = {1, 2, 3, 2, 4, 1, 5, 5, 6};

    cout << "Frequency (Brute Foce):" << endl;
    countFrequencyBruteForce(numbers);

    cout << "\nFrequency (Optimal):" << endl;
    map<int, int> frequencyMapOptimal = countFrequencyOptimal(numbers);
    for (const auto &entry : frequencyMapOptimal)
    {
        cout << entry.first << ": " << entry.second << " times" << endl;
    }
    return 0;
}
