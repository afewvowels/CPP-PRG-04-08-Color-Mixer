//
//  main.cpp
//  PRG-4-8-Color-Mixer
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  The colors red, blue, and yellow are known as primary colors because the cannot be
//  made by mixing other colors. When you mix two primary colors, you get a secondary
//  color, as shown here:
//
//  When you mix red and blue, you get purple.
//  When you mix red and yellow, you get orange.
//  When you mix blue and yellow, you get green.
//
//  Write a program that prompts the user to enter the names of two primary colors to
//  mix. If the user enters anything other than "red," "blue," or "yellow," the program
//  should display an error message. Otherwise, the program should display the name of
//  the secondary color that results by mixing two primary colors.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string strUserString01,
           strUserString02;
    
    string const STR_COLOR_RED = "red",
                 STR_COLOR_BLUE = "blue",
                 STR_COLOR_YELLOW = "yellow";
    
    cout << "Please enter red, blue, or yellow:\n";
    getline(cin, strUserString01);
    cout << "Please enter red, blue, or yellow:\n";
    getline(cin, strUserString02);
    
    if(strUserString01 != strUserString02)
    {
        if((strUserString01 == STR_COLOR_RED || strUserString02 == STR_COLOR_RED)
           &&(strUserString01 == STR_COLOR_BLUE || strUserString02 == STR_COLOR_BLUE))
        {
            cout << "You mixed " << strUserString01 << " and " << strUserString02 << " which makes purple.\n";
        }
        
        if((strUserString01 == STR_COLOR_YELLOW || strUserString02 == STR_COLOR_YELLOW)
           &&(strUserString01 == STR_COLOR_BLUE || strUserString02 == STR_COLOR_BLUE))
        {
            cout << "You mixed " << strUserString01 << " and " << strUserString02 << " which makes orange.\n";
        }
        
        if((strUserString01 == STR_COLOR_RED || strUserString02 == STR_COLOR_RED)
           &&(strUserString01 == STR_COLOR_YELLOW || strUserString02 == STR_COLOR_YELLOW))
        {
            cout << "You mixed " << strUserString01 << " and " << strUserString02 << " which makes green.\n";
        }
    }
    else if(strUserString01 == strUserString02 && (strUserString01 == STR_COLOR_RED || strUserString02 == STR_COLOR_RED) && (strUserString02 == STR_COLOR_RED || strUserString02 == STR_COLOR_RED))
    {
        cout << "Please choose two different colors.\n";
    }
    else
    {
        cout << "ERROR PLEASE ENTER RED, BLUE, OR YELLOW\n";
    }
    
    return 0;
}


