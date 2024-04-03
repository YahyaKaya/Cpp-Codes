#include <iostream>
using namespace std;

int main() 
{
    int a = 1;
    cout << "Factoriel alınacak sayiyi giriniz";
    int b;
    cin >> b; 
    for(int i=1; i <= b; i++)
    {
         a *=i;
     }
     cout << a;
}