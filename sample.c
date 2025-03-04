/**
* @brief get point differential per game for one team
* @param teamID the team being analyzed
* @param homeIDs the homeIDs for all games
* @param awayIDs the awayIDs for all games
* @param homeScores the ptsHome values for all games
* @param awayScores the ptsAway values for all games
* @param num_games the number of games being analyzed (the length of the parallel arrays)
* @return the point differential per game across all game for the team
* The differential will be positive if the team has gotten more points per game than their opponents, and vice versa
*/
double pointDifferentialPerGameOneTeam(int teamID, int* homeIDs, int* awayIDs, int* homeScores, int* awayScores, int num_games){
    double total=0.0;
    int relevantGames=0;
    for(int game=0; game<num_games; game++){
       if (homeIDs[game]==teamID){
            total += (homeScores[game]-awayScores[game]);
            relevantGames+=1;
        } else if(awayIDs[game]==teamID){
            total += (awayScores[game]-homeScores[game]);
            relevantGames+=1;
        }
    }
    double avg=total/relevantGames;
    return avg;
}