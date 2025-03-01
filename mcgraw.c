/** 
 * @brief compare assists per game for two teams
 * @param team1 the ID for team1 for the game being analyzed
 * @param team2 the ID for team2 for the game being analyzed
 * @param homeIDs the homeIDs for all games
 * @param awayIDs the awayIDs for all games
 * @param homeAssists the homeAssist values for all games
 * @param awayAssists the awayAssist values for all games
 * @param num_games the number of games being analyzed (the length of the parallel arrays)
 * @return the difference in assists per game between team 1 and team 2
 * The differential will be positive if team 1 averages more assists per game, and vice versa
 */ 
double assistsPerGameComparison(int team1, int team2, int* homeIDs, int* awayIDs, int* homeAssists, int* awayAssists, int num_games){
    //test edit
    int assistHomeSum = 0;
    int assistAwaySum = 0;
    int gamesCountedHome = 0;
    int gamesCountedAway = 0;


    for (int i = 0; i < num_games; i++) {
        if (team1 == homeIDs[i]) {
            assistHomeSum += homeAssists[i];
            gamesCountedHome++;

        }else if(team1 == awayIDs[i]) {
            assistHomeSum += awayAssists[i];
            gamesCountedHome++;
        }

        if (team2 == homeIDs[i]) {
            assistAwaySum += homeAssists[i];
            gamesCountedAway++;
        } else if (team2 == awayIDs[i]) {
            assistAwaySum += awayAssists[i];
            gamesCountedAway++;
        }

        
        
    }
    double homeAssistsAvg = (double)assistHomeSum / (double)gamesCountedHome;
        double awayAssistsAvg = (double)assistAwaySum / (double)gamesCountedAway;
    return homeAssistsAvg - awayAssistsAvg;
}
