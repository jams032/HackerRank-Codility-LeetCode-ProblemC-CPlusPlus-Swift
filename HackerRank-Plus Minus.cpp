//
//  main.cpp
//  Plus Minus
//
//  Created by Jamshed on 10/12/19.
//  Copyright © 2019 Jamshed. All rights reserved.
//

#include <stdio.h>
#include<string>
#include<cstdio>
#include <iostream>

using namespace std;

#define maxsize = 100

bool is_number(const std::string &s) {
  return !s.empty() && std::all_of(s.begin(), s.end(), ::isdigit);
}

void removeDupWord(string str)
{
   string word = "";
    
    int positive = 0 , negatie =  0 , zeros = 0;
    
   for (auto x : str)
   {
       if (x == ' ')
       {
          // cout << word << endl;
           
           if (is_number(word)) {
               int myint = stoi(word);
               
              //  printf("haha found something:%d",myint);
               
           }
          // cout << word << endl;
           word = "";
       }
       else
       {

           word = word + x;
       }
   }
    
   cout << word << endl;
}


int main() {
    
    int size;
    float positive, negative, zeros;
    string My_string;
    
    scanf("%d",&size);
    
    string name;

     getline(cin, name);
     getline(cin, name, '\n');
     cout << name << "\n";
    
 //   removeDupWord(name);

      int n = name.length();
    
      // declaring character array
      char char_array[n + 1];

    
    int j=0, ctr =0 ;
    string word = "";

    for(int i=0;i<=name.length();i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if(char_array[i]==' '||char_array[i]=='\0')
        {
      
            cout << word << "\n";
            word = "" ;

            //newString[ctr][j]='\0';
            ctr++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else
        {
            //newString[ctr][j]=str1[i];
            j++;
            word = word + char_array[i];

        }
        
        cout << char_array[i] << "\n";

        
    }
    
    return 0;
}

