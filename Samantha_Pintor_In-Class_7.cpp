#include <iostream> 
#include <fstream> 
#include <string> 

using namespace std; 

int main ()
{
    ifstream inFile; //input file stream variable 
    ofstream outFile; //output file stream variable 

    inFile.open("games_scores.txt"); //open the file 
    outFile.open("average_scores.txt"); //open the file 

    //creating variables 
    int scoreOne, scoreTwo, scoreThree; //variable for scores  
    int average; //variable for average score 
    string playerName; //variable for the name of the player

    while (inFile >> playerName >> scoreOne >> scoreTwo >> scoreThree) //reads the player name and scores 
    {
        average = scoreOne + scoreTwo + scoreThree; //calculating the average given the three scores 
        scoreOne = 0.2 * average; //given score one is 20% of the average
        scoreTwo = 0.3 * average; //given score two is 30% of the average
        scoreThree = 0.5 * average; //given score three is 50% of the average


        if (average < 1000) //when the average is less than 1000
        {
            outFile << "Player: " << playerName << endl << "Score: " << average << endl << "Beginner - Keep Practicing!" << endl << endl; 
        }

        else if (average >= 1000 && average <= 1500) //when the average is between 1000 and 1500 
        {
            outFile << "Player: " << playerName << endl << "Score: " << average << endl << "Intermediate." <<  endl << endl;
        }    

        else if (average >=1500 && average <= 1800) //when the average is between 1500 and 1800
        {
            outFile << "Player: " << playerName << endl << "Score: " << average << endl << "Advanced - Good Job!" << endl << endl; 
        }

        else if (average >= 1800 && average <= 2000) //when the average is between 1800 and 2000
        {
            outFile << "Player: " << playerName << endl << "Score: " << average << endl  << "Master - Good Job!" << endl << endl; 
        }

        else if (average > 2000) //when the average is greater than 2000
        {
            outFile << "Player: " << playerName << endl << "Score: "<< average << endl << "Congrats! You are an Expert!" << endl << endl; 
        }


    }

    inFile.close(); //close the file
    outFile.close(); //close the file

    return 0; 
}
/*
Player: John
Score: 1600
Advanced - Good Job!

Player: Mark
Score: 600
Beginner - Keep Practicing!

Player: James
Score: 1900
Master - Good Job!
*/
