#include <stdio.h>

//For now, you'll test your function using the 10 games listed in main().  This will need to change to 1075 when you read from the file
#define NUM_GAMES 10
#include "lab22.h"

int main(){

    //These are the IDs for the teams for the game we are predicting
    int team1 = 48;
    int team2 = 39;

    // These parallel arrays contain SOME game information to test your function
    // Later the lab, you will replace this with the contents of the file games.csv
    int homeIDs[NUM_GAMES]        = {48,    37,    38,    48,    45,    38,    51,    61,    59,    39};
    int awayIDs[NUM_GAMES]        = {50,    46,    65,    39,    42,    63,    48,    65,    58,    66};
    int homeScores[NUM_GAMES]     = {104,   112,   114,   117,   100,   120,   107,   106,   112,   98};
    int awayScores[NUM_GAMES]     = {113,   106,   103,   105,   113,   107,   113,   108,   115,   119};
    int homeAssists[NUM_GAMES]    = {23,    28,    23,    28,    29,    33,    24,    12,    28,    21};
    int awayAssists[NUM_GAMES]    = {21,    22,    21,    25,    20,    24,    27,    25,    26,    32};
    int homeRebounds[NUM_GAMES]   = {53,    47,    47,    42,    39,    51,    30,    41,    40,    37};
    int awayRebounds[NUM_GAMES]   = {46,    36,    42,    40,    47,    44,    35,    42,    49,    45};
    int homeTeamWins[NUM_GAMES]   = {0,     1,     1,     1,     0,     1,     0,     0,     0,     0};
    double homeFgPcts[NUM_GAMES]  = {0.398, 0.478, 0.467, 0.477, 0.477, 0.517, 0.47,  0.434, 0.495, 0.468};
    double awayFgPcts[NUM_GAMES]  = {0.422, 0.488, 0.422, 0.443, 0.455, 0.424, 0.519, 0.452, 0.459, 0.506};
    double homeFg3Pcts[NUM_GAMES] = {0.333, 0.29,  0.188, 0.314, 0.2,   0.432, 0.387, 0.269, 0.375, 0.323};
    double awayFg3Pcts[NUM_GAMES] = {0.357, 0.375, 0.294, 0.32,  0.306, 0.325, 0.333, 0.297, 0.313, 0.447};
    double homeFtPcts[NUM_GAMES]  = {0.76,  0.895, 0.8,   0.889, 0.632, 0.8,   0.773, 0.75,  0.5,   0.667};
    double awayFtPcts[NUM_GAMES]  = {0.875, 0.824, 0.958, 0.931, 0.786, 0.769, 0.821, 0.75,  0.844, 0.727};


    // ----------------------------------------------------------------------------------
    // Step 1:  Read the the contents of games.csv into the parallel arrays above
    // ----------------------------------------------------------------------------------
    printf("The final output is 3.14, which means team 48 is predicted to win the game.");

    // ----------------------------------------------------------------------------------
    // Step 2:  Call the 5 functions and gather their data
    // ----------------------------------------------------------------------------------
    // Call pointDifferentialPerGameOneTeam 2x – once for the home team and once for the away time

    // Subtract the home team from the away team to get the pointDifferentialStat

    // Call shootingEffectivenessOneTeam 2x – once for the home team and once for the away time
    
    // Subtract the home team from the away team to get the shootingDifferentialStat

    // Call reboundsPerGameComparison once to get the reboundingStat

    // Call assistsPerGameComparison once to get the assistStat

    // Call headToHeadWL once to get the headToHeadStat


    // ----------------------------------------------------------------------------------
    // Step 3:  Use the following formula to predict the winner
    // (pointDifferentialStat * 0.6) + headToHeadStat + (shootingDifferentialStat * 120) + reboundingStat + (assistStat * 0.75)
    // ----------------------------------------------------------------------------------


    // ----------------------------------------------------------------------------------
    // Print out the output
    // ----------------------------------------------------------------------------------
    // If the value is > 0, then the home team is predicted to win; if the value is <= 0, then the away team is predicted to win
  
    return 0;

}