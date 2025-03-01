/** 
 * @brief combine field goal percentage 3-pt percentage, and free throw percentage into one shooting stat
 * @param fgPct the team's field goal percentage
 * @param threePtPct the team's 3-point field goal percentage
 * @param ftPct the team's free throw percentage
 * @return the team's shooting effectiveness - this will be a number between 0 and 1.
 */ 
double getShootingEffectivenessFromAverages(double fgPct, double fg3Pct, double ftPct){
    return 0.3 * fgPct + 0.5 * fg3Pct + 0.2 * ftPct;
}

/** 
 * @brief get the shooting effectiveness of a team - this stat combines averages of field goal percentage, 3-point percentage, and free throw percentage
 * @param teamID the team to get the shooting effectiveness for
 * @param homeIDs the homeIDs for all games
 * @param awayIDs the awayIDs for all games
 * @param homeFgPcts the field goal percentages for the home teams for all games
 * @param awayFgPcts the field goal percentages for the away teams for all games
 * @param homeFg3Pcts the 3-point field goal percentages for the home teams for all games
 * @param awayFg3Pcts the 3-point field goal percentages for the away teams for all games
 * @param homeFtPcts the free throw percentages for the home teams for all games
 * @param awayFtPcts the free throw percentages for the away teams for all games
 * @return the shooting effectiveness of the team in question - 
 * The return value should be the result of the function getShootingEffectivenessFromAverages() given the team's fgPct, fg3Pct, and ftPct across all games
 */ 
double shootingEffectivenessOneTeam(int teamID, int* homeIDs, int* awayIDs, double* homeFgPcts, double* awayFgPcts, double* homeFg3Pcts, double* awayFg3Pcts, double* homeFtPcts, double* awayFtPcts, int num_games){
    double fgSum = 0;
    double fg3Sum = 0;
    double ftSum = 0;
    int gamesCounted = 0;

    for(int i=0;i<num_games;i++){
        if (teamID == homeIDs[i]){
            fgSum += homeFgPcts[i];
            fg3Sum += homeFg3Pcts[i];
            ftSum += homeFtPcts[i];
            gamesCounted++;
        }else if (teamID == awayIDs[i]){
            fgSum += awayFgPcts[i];
            fg3Sum += awayFg3Pcts[i];
            ftSum += awayFtPcts[i];
            gamesCounted++;
        }
    }

    double avgFgPct = fgSum/(double)gamesCounted;
    double avgFg3Pct = fg3Sum/(double)gamesCounted;
    double avgFtPct = ftSum/(double)gamesCounted;

    return getShootingEffectivenessFromAverages(avgFgPct,avgFg3Pct,avgFtPct);
}