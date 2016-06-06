#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <typeinfo>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/ 
 

 
int main()
{
    string MESSAGE;
    getline(cin, MESSAGE);
    
    string text = MESSAGE; 
    string bit_string = "";
    for(int i=0; i<text.length(); i++) {
    char s = text[i];
    bitset<7> bs(s);
    bit_string += bs.to_string(); 
    }


/*
*how to approach the problem. 
*read the binary value. 


*/

    //
    vector<string> vecint;
    //so every index of 'vecint' is when binary respresentation changes (0 to 1, visavers)
    /*
        ex: 1 1 0 0 1 1 1
        vecint[0]: 0 00 ; two 1s at start
        vecint[1]: 00 00 ;two 0s following
        vecint[2]: 0 000 ; three 1s following
    */
    string ofzero = "00 ";
    string ofone = "0 ";
    int counter0 = 0;
    int counter1 = 0;
    int vecindex = 0;
    for(int i = 0; i<7; i++)
    {
        //now convert
        //3 case. first 1, 0, 1, 0... 

        if(bit_string[i]=='1')
        {
         counter1++; 
         counter0 = 0;
        }
        else if(bit_string[i]=='0')
        {
            
         counter0++;
         counter1 = 0;   
        }

        
    }
    
    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    
/*
//http://static1.squarespace.com/static/55767a9ae4b0307eeda83889/t/55e7ea9ee4b0f7efbac5eeac/1441262240855/

*/
 
 
 
}
