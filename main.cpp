#include <iostream>
using namespace std;

void check(){
    char character;
    bool isLowerCaseVowel, isUppercaseVowel;
    
    cout << "Enter a character: ";
    cin >> character;
    
    //check if the character is lowercase vowel
    isLowerCaseVowel = (character == 'a' || character =='e' || character =='i' || character == 'o' || character == 'u'); 
    
    //check if the character is uppercase vowel
    isUppercaseVowel = (character == 'A' || character =='E' || character =='I' || character == 'O' || character == 'U'); 
    
    //If the character entered by user is not an alphabet
    if(!isalpha(character)){
        cout << "Error! You have entered a non-alphabetical character." << endl;
    }
    else if (isLowerCaseVowel || isUppercaseVowel){
        cout << "\"" << character << "\"" << " is a vowel." << endl;
    }
    else{
        cout <<  "\"" << character << "\""  << " is a consonant." << endl;
    }
}

int main()
{
    char choice;
    
    do{
        check();
        cout << "Would you like to continue checking? \n";
        cout << "Press Y if you would like to continue. \n";
        cin >> choice;
    }while(choice=='Y'||choice=='y');

    return 0;
}
