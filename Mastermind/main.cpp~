#include <iostream>
#include <string>
#include <algorithm>
#include "mastermind.h"
using namespace std;


int main()
{
  // an array of the winning colors
  string winningColors[] = {"green", "orange", "purple", "yellow"};

  // initializing our myGame object to start the game 
  mastermind myGame(4, winningColors);

  // an array of type 'string' to hold the player's moves
  string play[4];

  int determineGame, gold, silver;
  bool flag = false;

  // get the number of columns and set it to numCols
  const int numCols = myGame.getNumberOfColumns();

  // an array of type string to hold the user's colors
  string playerMoves[10];

  // a while loop that executes as long as flag is false
  while(!flag)
    {
      // lets the user know what turn it is and how many colors to enter
      cout << "Turn: " << myGame.getMoveIndex() << " Enter " << numCols << " colors: ";
      for(int i = 0; i < numCols; i++)
        {
          cin >> playerMoves[i];

          // lowercase each individual string in the array playerMoves using alorithm library
          std::transform(playerMoves[i].begin(), playerMoves[i].end(), playerMoves[i].begin(), ::tolower);
        }

      cout << endl;
      
      // checks the states of the game from the member function 'move'
      determineGame = myGame.move(playerMoves, gold, silver);

      // if the above function returns -1 then the user lost
      if(determineGame == -1)
        {
	  // display the amount of correct colors in the correct place
          cout << "Gold pegs: " << gold << endl;

	  // display the amount of correct colors in the wrong place
          cout << "Silver pegs: " << silver << endl;

          cout << endl;

	  // let the user know that they lost
          cout << "You lose!" << endl;

          flag = true; // set flag to true
          return 0; // end the program
        }
      else if(determineGame == 1) // if above function returns 1 then user won
        {
	  // display the amount of correct colors in the correct place
          cout << "Gold pegs: " << gold << endl;

	  // display the amount of correct colors in the wrong place
          cout << "Silver pegs: " << silver << endl;

          cout << endl;

	  // let the user know that they won
          cout << "Congratulations you won!" << endl;

          flag = true; // set flag to true
          return 0; // end the program
        }
      else if(determineGame == 0)
        {
          ; // if above functino returned 0 then do nothing
        }

      // display the amount of correct colors in the correct place
      cout << "Gold pegs: " << gold << endl;

      // display the amount of correct colors in the wrong place
      cout << "Silver pegs: " << silver << endl;
      cout << endl;
    }
}
