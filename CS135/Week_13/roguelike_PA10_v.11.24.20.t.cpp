// nick_3471@yahoo.com
// thenriod@gmail.com



////////////////////////////////////////////////////////////////////////////////
// Header Files ////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
   #include "formatted_console_io_v18.h"
   #include <fstream>
   using namespace std ;


////////////////////////////////////////////////////////////////////////////////
// Global Constant Definitions /////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// instruction screen dimensions

// main menu dimensions

// difficulty/name entry screen dimensions 

// game object constants
const char PLAYER    = '*';
const char CLOAK     = char(247);
const char HOLE      = char(178); 
const char TREASURE  = char(232);
const char SWORD     = char(157);
const char MONSTER   = char(206);
const char SPELL     = char(234);
const char INT_WALL  = char(176);
const char OUT_WALL  = char(176);
const char UP_STAIR  = 'U';
const char DWN_STAIR = 'D';

// typical character constants
const char NULL_CHAR = '\0';
const char SPACE     = ' ';
const char NEW_LINE  = '\n';

// game area constants
const int PLAY_AR_H    = 62;
const int PLAY_AR_W    = 32;
const int SCOREBOARD_W = 15;
const int SCOREBOARD_H = 30;
const int MESSAGE_W    = 10;
const int MESSAGE_H    = 15;

// probabilities
const int P_HOLE      = 35;
const int P_CLOAK     = 10; 
const int P_TREASURE  = 5;
const int P_SWORD     = 10;
const int P_MONSTER   = 25;
const int P_SPELL     = 10;

// c-style string lengths
const int NAME_LEN = 15;

// file names
char FLOOR1[ NAME_LEN ] = strcpy( FLOOR2, "lowlevel.txt" ); // work on these
char FLOOR2[ NAME_LEN ] = strcpy( FLOOR2, "midlevel.txt" );
char FLOOR3[ NAME_LEN ] = strcpy( FLOOR2, "highlevel.txt" );
char SCORES[ NAME_LEN ] = strcpy( FLOOR2, "scores.txt" );

////////////////////////////////////////////////////////////////////////////////
// Global Function Prototypes //////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

    // none

/* 
Name: 
Process: 
Function Input/Parameters: none
Function Output/Parameters: none
Function Output/Returned: none
Device Input: none
Device Output: none
Dependencies: none
*/


////////////////////////////////////////////////////////////////////////////////
// Main Program Definition /////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

int main()
   { 
// initialize variables
   
   // screen position variables
   int xLoc = 25, yLoc = 5;
 
   // user input variables
   int userInput;
   char userName[ NAME_LEN ];

   // score related variables 
   int score = 0;

   // extra credit flag
   bool XCmode = false;

   // random seed
   srand( time( NULL ) );  


// initialize program

   // initialize curses
      // functions: startCurses, setColor
      startCurses();
      setColor( COLOR_WHITE, COLOR_BLACK, SET_BRIGHT );

// display splash screen
   // function: dispSplash
   dispSplash();

// display instructions screen (the plan is to run the game in extra credit mode by default)
   // function: dispInstructions
   dispInstructions( XCmode );

// display menu loop
   // clear screen
      // function: clearScreen, setColor

   // display options
      // function: printStringAt

   // prompt for user input
      // function: promptForCharAt

// implement menu options  
   // operation: switch

      // case: set difficulty
         // function: setDiff

      // case: play the game
         // function: executeGame

      // case: show high scores
         // function: showHiScores

      // case: quit program  
 
         // end the program immediately, return 0            
            return 0;
   }


////////////////////////////////////////////////////////////////////////////////
// Supporting function implementations /////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

    // none



