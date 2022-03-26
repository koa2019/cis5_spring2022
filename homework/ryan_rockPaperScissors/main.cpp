/*
 * File:   main.cpp
 * Author: Ryan Baella
 * Created on March 22nd, 2022, 10:40 AM
 * Purpose:  Rock Paper Scissors
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <cstring>   //String Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

//Program Execution Begins Here!!!

int main(int argc, char** argv) {
    //Set the Random Number Seed

    //Declare Variables
    char P1, P2; //The 2 players in the game
    string WINNER; //Winner
    char ans;

    do {
        //Initial Variables
        cout << "Rock Paper Scissors Game" << endl;
        cout << "Input Player 1 and Player 2 Choices" << endl;
        cin>>P1;
        cin>>P2;

        // conditional checks if P1's input is lowercase and then
        // reassigns P1's value to its corresponding capital letter
        if (P1 == 'r') {
            P1 = 'R';
        } else if (P1 == 's') {
            P1 = 'S';
        } else if (P1 == 'p') {
            P1 = 'P';
        }

        // conditional checks if P2's input is lowercase and then
        // reassigns P2's value to its corresponding capital letter    
        if (P2 == 'r') {
            P2 = 'R';
        } else if (P2 == 's') {
            P2 = 'S';
        } else if (P2 == 'p') {
            P2 = 'P';
        }


        //Map the Inputs to the Outputs
        if (P1 == P2)WINNER = "Nobody wins.";

        else if ( (P1 == 'P') && P2 == 'S'){
            WINNER = "Scissors cuts paper.";
        }
    /*    else if (P1 == 'P') {
            if (P2 == 'S') WINNER = "Scissors cuts paper.";
            //else WINNER = "Paper covers rock.";
        } 
    */ 
         else if ( (P1 == 'P') && P2 == 'R'){
            WINNER = "Scissors cuts paper.";
        }
    /*    else if (P1 == 'P') {
            if (P2 == 'R') WINNER = "Paper covers rock.";
            //else WINNER = "Paper covers rock.";
        }
     */
        
        else if (P1 == 'R') {
            if (P2 == 'P') WINNER = "Paper covers rock.";
            //else WINNER = "Rock breaks scissors.";
        } 
        else if (P1 == 'R') {
            if (P2 == 'S') WINNER = "Rock breaks scissors.";
            //else WINNER = "Scissors cuts paper.";
        } 
        else if (P1 == 'S') {
            if (P2 == 'R') WINNER = "Rock breaks scissors.";
            //else WINNER = "Rock breaks scissors.";
        } 
        else if (P1 == 'S') {
            if (P2 == 'P') WINNER = "Scissors cuts paper.";
            //else WINNER = "Scissors cuts paper.";
        }

            // you can get rid of all your lowercase conditionals because you converted
            // the inputs into capital letters

            /*    else if (P1 == 's') {
                    if (P2 == 'p')WINNER = "Scissors cuts paper.";
                    else WINNER = "Scissors cuts paper.";
                } 
                else if (P1 == 's') {
                    if (P2 == 'r')WINNER = "Rock breaks scissors.";
                    //else WINNER = "Rock breaks scissors.";
                } 
                else if (P1 == 'p') {
                    if (P2 == 's')WINNER = "Scissors cuts paper.";
                    //else WINNER = "Paper covers rock.";
                } 
                else if (P1 == 'p') {
                    if (P2 == 'r')WINNER = "Paper covers rock.";
                    //else WINNER = "Paper covers rock.";
                } 
                else if (P1 == 'r') {
                    if (P2 == 'p')WINNER = "Paper covers rock.";
                    //else WINNER = "Rock breaks scissors.";
                } 
                else if (P1 == 'r') {
                    if (P2 == 's')WINNER = "Rock breaks scissors.";
                    //else WINNER = "Scissors cuts paper.";
                } 
             */
        else {
            cout << "Invalid entry";
        }

        //Display the Inputs and Outputs
        cout << WINNER;

        cout << "\nY to play again ";
        cin >> ans;
    } while (ans == 'y');
    //Exit the code
    return 0;
}