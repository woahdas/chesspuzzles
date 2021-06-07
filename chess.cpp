#include <iostream>
#include <stdio.h>
#include <vector>
#include <fstream>
#include <thread>

using namespace std;

std::string stringline;

std::string ReadNthLine(const std::string& filename, int N)
{
   std::ifstream in(filename.c_str());

   //stringline.reserve(3);    

   //skip n lines
   for(int i = 0; i < N; ++i)
       std::getline(in, stringline);

   std::getline(in,stringline);
   cout<<stringline;

   return stringline; 
}

int main(){
    for(int linecounter2 = 1; linecounter2 < 1731229; linecounter2++)
    {

    
    ReadNthLine("lichess_db_puzzle.csv", linecounter2); //constantly reads every line
    //cout<<stringline;
    int stringcounter = 0; 
    for(int linecounter = 0; linecounter < 1731228; linecounter++)
    {
        char characterc = stringline[stringcounter];
        //lower bound check, rating 1600
        if(characterc == '1')
        {

            char url1 = stringline[stringcounter+1];
            if(url1 == '6')
            {
                char urlfound = stringline[stringcounter+2];
                if(urlfound == '1' || '2' || '3' || '4' || '5' || '6' ||'7' || '8' ||'9' || '0')
                {
                    cout<<stringline;
                }
            }
        
        }
    }
    //upper bound check, rating 1800
        for(int linecounter = 0; linecounter < 1731228; linecounter++)
    {
        char characterc = stringline[stringcounter];
        if(characterc == '1')
        {

            char url1 = stringline[stringcounter+1];
            if(url1 == '8')
            {
                char urlfound = stringline[stringcounter+2];
                if(urlfound == '1' || '2' || '3' || '4' || '5' || '6' ||'7' || '8' ||'9' || '0')
                {
                    cout<<stringline;
                }
            }
        
        }
    }
    }
    return 0;
}
