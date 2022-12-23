/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    string word;
    getline(cin , word);
    for(char c:word){
        if(c == ' '){
            cout<<" ";
            continue;
            
        }
        int number=int(c)-97;
        int newAscii=(25-number)+97;
        cout<<char(newAscii);
        
    }
    return 0;
}
