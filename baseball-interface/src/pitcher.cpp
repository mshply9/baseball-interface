#include <string>

#include "Player.cpp"

class Pitcher : public Player {
 protected:
  // FIP constant for 2019 MLB season
  const int FIP_CONSTANT = 3.214;
  int wins;
  int losses;
  int games;
  int gamesStarted;
  int completeGames;
  int saves;
  double inningsPitched;
  int runs;
  int earnedRuns;
  int hits;
  int walks;
  int intentionalWalks;
  int homeRuns;
  int strikeouts;
  int hitByPitch;
  int battersFaced;

 public:
  // Constructor
  Pitcher(const std::string& name, const std::string& position, int number,
          const std::string& team, int age, int wins, int losses, int games,
          int gamesStarted, int completeGames, int saves, double inningsPitched,
          int runs, int earnedRuns, int hits, int walks, int intentionalWalks,
          int homeRuns, int strikeouts, int hitByPitch, int battersFaced)
      : Player(name, position, number, team, age),
        wins(wins),
        losses(losses),
        games(games),
        gamesStarted(gamesStarted),
        completeGames(completeGames),
        saves(saves),
        inningsPitched(inningsPitched),
        runs(runs),
        earnedRuns(earnedRuns),
        hits(hits),
        walks(walks),
        intentionalWalks(intentionalWalks),
        homeRuns(homeRuns),
        strikeouts(strikeouts),
        hitByPitch(hitByPitch),
        battersFaced(battersFaced) {}

  // Getters
  int getWins() { return wins; }
  int getLosses() { return losses; }
  int getGames() { return games; }
  int getGamesStarted() { return gamesStarted; }
  int getCompleteGames() { return completeGames; }
  int getSaves() { return saves; }
  double getInningsPitched() { return inningsPitched; }
  int getRuns() { return runs; }
  int getEarnedRuns() { return earnedRuns; }
  int getHits() { return hits; }
  int getWalks() { return walks; }
  int getIntentionalWalks() { return intentionalWalks; }
  int getHomeRuns() { return homeRuns; }
  int getStrikeouts() { return strikeouts; }
  int getHitByPitch() { return hitByPitch; }
  int getBattersFaced() { return battersFaced; }

  // Setters
  void setWins(int wins) { this->wins = wins; }
  void setLosses(int losses) { this->losses = losses; }
  void setGames(int games) { this->games = games; }
  void setGamesStarted(int gamesStarted) { this->gamesStarted = gamesStarted; }
  void setCompleteGames(int completeGames) {
    this->completeGames = completeGames;
  }
  void setSaves(int saves) { this->saves = saves; }
  void setInningsPitched(double inningsPitched) {
    this->inningsPitched = inningsPitched;
  }
  void setRuns(int runs) { this->runs = runs; }
  void setEarnedRuns(int earnedRuns) { this->earnedRuns = earnedRuns; }
  void setHits(int hits) { this->hits = hits; }
  void setWalks(int walks) { this->walks = walks; }
  void setIntentionalWalks(int intentionalWalks) {
    this->intentionalWalks = intentionalWalks;
  }
  void setHomeRuns(int homeRuns) { this->homeRuns = homeRuns; }
  void setStrikeouts(int strikeouts) { this->strikeouts = strikeouts; }
  void setHitByPitch(int hitByPitch) { this->hitByPitch = hitByPitch; }
  void setBattersFaced(int battersFaced) { this->battersFaced = battersFaced; }

  // Calculators
  double getEarnedRunAverage() {
    if (inningsPitched == 0) {
      return 0;
    }
    return (earnedRuns / inningsPitched) * 9;
  }
  double getRunsPerNine() {
    if (inningsPitched == 0) {
      return 0;
    }
    return (runs / inningsPitched) * 9;
  }
  double getStrikeoutsPerNine() {
    if (inningsPitched == 0) {
      return 0;
    }
    return (strikeouts / inningsPitched) * 9;
  }
  double getWalksPerNine() {
    if (inningsPitched == 0) {
      return 0;
    }
    return (walks / inningsPitched) * 9;
  }
  double getFieldIndependentPitching() {
    if (inningsPitched == 0) {
      return 0;
    }
    return (((13 * homeRuns) + (3 * (walks + hitByPitch)) - (2 * strikeouts)) /
            inningsPitched) +
           FIP_CONSTANT;
  }
  double getWalksAndHitsPerInningPitched() {
    if (inningsPitched == 0) {
      return 0;
    }
    return (walks + hits) / inningsPitched;
  }

  // Get all info
  std::string getInfo() {
    return std::string(
        "Pitcher Information:\n"
        "Name: " + name + "\n"
        "Position: " + position + "\n"
        "Number: " + std::to_string(number) + "\n"
        "Team: " + team + "\n"
        "Age: " + std::to_string(age) + "\n"
        "ERA: " + std::to_string(getEarnedRunAverage()) + "\n"
        "RA/9: " + std::to_string(getRunsPerNine()) + "\n"
        "K/9: " + std::to_string(getStrikeoutsPerNine()) + "\n"
        "BB/9: " + std::to_string(getWalksPerNine()) + "\n"
        "FIP: " + std::to_string(getFieldIndependentPitching()) + "\n"
        "WHIP: " + std::to_string(getWalksAndHitsPerInningPitched()) + "\n");
  }
};