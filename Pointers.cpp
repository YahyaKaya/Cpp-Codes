#include <iostream>
using namespace std;
int main()
{
    int X = 4;
    int *pX = &X;
    int Y = *pX;
    
    cout << X << "  " << pX << "  " << Y;
    
    
}