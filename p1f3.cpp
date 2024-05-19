/*
Write a function named numValidNotes that takes an arbitrary string and 
returns the number of notes expressed in valid SPN that are present within that string. 

Function Specifications:

Name: numValidNotes()
Parameters (Your function should accept these parameters IN THIS ORDER):
input (string): The string to be examined for the number of notes
Return Value: The number of valid notes in the string (int)
This function should make use of your isValidNote function from question 1.
The function should not print anything.

Paste ​ only your numValidNotes function​ in the answer box! A version of isValidNote
 has been provided for you to call. The main function has also already been written for you.
  Do not paste main or #includes, just the function.


*/
/*
CSCI 1300 Fall 2022
Author: Fedor Vlasov
Reatation: 104 - Lilac Intrater
Project 1 - Problem#3
*/
/*
1. create a new string wich wich will be cheking the main string
2.write a for loop for the new string  that will compare it to the input string and moove by fragments of 2 
3. if everything is true increase match counter by 1 and do it again
*/
#include <cassert>
#include <string>
 #include <iostream>
 using namespace std;



 int numValidNotes(string input) {
     int match = 0; //#of matches
    for(int i =0; i < input.length(); i+=2) {
        input.substr(i,2);            
          if (input.substr (i,2)) {   //creating the new subsring and adding 2 charectors next to it
match = match +1;  // increase match counter
    }
    }

return match;
 }

 int main(){
    assert(isValidNote("I love comp sci!") == 0);
    assert(isValidNote("ADB3M7G4F") == 2);
    assert(isValidNote("F4E2B0") == 3);
    assert(isValidNote("AC7B9") == 2 );
    assert(isValidNote("10D5879B6AFJ") ==2 );
}
