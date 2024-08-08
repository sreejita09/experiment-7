// Sreejita Bhardwaj 
// 23070123130 
// B2- EnTC
// Experiment 7: arrays and strings 

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    cout << "Enter a string: ";
    cin >> a;
    int n = a.length();
    int var = 1;
    
    for(int i = 0; i < n / 2; i++)
    {
        if(a[i] != a[n - i - 1])
        {
            var = 0;
            break;
        }
    }
    
    if (var == 1)
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}