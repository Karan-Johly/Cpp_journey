#include <iostream>
using namespace std;
int main()
{
    cout << "Printable ASCII [32..126]:\n";
    for (char c{' '}; c <= '~'; c++) 
    {
        cout<< c <<((c+1) % 32 ? ' ' : '\n');
    }
}