#include<iostream>
using namespace std;

int main()
{
    char alpha;
    cout<<"Enter any Alphabet: ";
    cin>>alpha;

    if (alpha=='a'|| alpha=='e'|| alpha=='i'|| alpha=='o'|| alpha=='u')

        cout<<"Alphabet is Vowel";


/*    if (alpha=='e')
        cout<<"Alphabet is Vowel";
    if (alpha=='i')
        cout<<"Alphabet is Vowel";
    if (alpha=='o')
        cout<<"Alphabet is Vowel";
    if (alpha=='u')
        cout<<"Alphabet is Vowel";
*/
    else
        cout<<"Alphabet is Constant";
}

