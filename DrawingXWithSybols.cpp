#include <iostream>
using namespace std;
int main() 
{
     for (int i = 0; i < 9; i++) 
     { 
     for (int j = 0; j < 9; j++) 
     { 
         if (i == j || i + j == 8) 
         { 
             cout << "*"; 
         } else 
         { 
             cout << " "; 
         } 
     } 
     cout << endl; 
     }
      return 0;
}