#include<iostream>

using namespace std;
string stringReplacement(string sentence, int n, int i)
{
    if(i==n-1)
        return sentence;
    if(sentence[i] == 'p' & sentence[i+1] =='i')
        sentence = sentence.replace(i, 2, "3.14");
        return stringReplacement(sentence, sentence.length(), i+1);
    
}
int main() 
{
    int n;
    cin >> n;
    
    string sentence;
    cin >> sentence;

    cout << stringReplacement(sentence, n, 0);
}