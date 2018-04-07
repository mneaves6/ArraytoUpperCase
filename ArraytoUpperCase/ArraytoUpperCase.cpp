/*
 * Name: Maximiliano Neaves
 * Section: COSC/ITSE 1307
 * Homework: ArraytoUpperCase
 * This program prompts the user to input a string and outputs it in
 * uppercase letters.
 */
 
/*
 * Pseudocode
 * BEGIN
 * enter string
 * convert string to uppercase letters
 * display new string
 * END
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    //Variables
    const int INTMAXCHARS = 50;
    char chrArray[INTMAXCHARS];
    
    //User input
    cout << "Enter a string: ";
    cin.get(chrArray, INTMAXCHARS);
    
    //Conversion to uppercase letters
    for (int intI = 0; intI < INTMAXCHARS; intI++)
    {
        chrArray[intI] = toupper(chrArray[intI]);
    }
    
    //Display results
    cout << "The string in uppercase letters: ";
    cout << chrArray << endl;
    
    return 0;
}
