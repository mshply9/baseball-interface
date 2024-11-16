#include <string>

#include "player.cpp"

class PositionPlayer : public Player {
 protected:
  int games;
  int plateAppearances;
  int atBats;
  int hits;
  int runs;
  int doubles;
  int triples;
  int homeRuns;
  int runsBattedIn;
  int stolenBases;
  int caughtStealing;
  int walks;
  int hitByPitch;
  int intentionalWalks;
  int strikeouts;
  int sacrifices;

 public:
  // Constructor
  PositionPlayer(const std::string& name, const std::string& position,
                 int number, const std::string& team, int age, int games,
                 int plateAppearances, int atBats, int hits, int runs,
                 int doubles, int triples, int homeRuns, int runsBattedIn,
                 int stolenBases, int caughtStealing, int walks, int hitByPitch,
                 int intentionalWalks, int strikeouts, int sacrifices)
      : Player(name, position, number, team, age),
        games(games),
        plateAppearances(plateAppearances),
        atBats(atBats),
        hits(hits),
        runs(runs),
        doubles(doubles),
        triples(triples),
        homeRuns(homeRuns),
        runsBattedIn(runsBattedIn),
        stolenBases(stolenBases),
        caughtStealing(caughtStealing),
        walks(walks),
        hitByPitch(hitByPitch),
        intentionalWalks(intentionalWalks),
        strikeouts(strikeouts),
        sacrifices(sacrifices) {}

  // Getters
  int getPlateAppearances() { return plateAppearances; }
  int getAtBats() { return atBats; }
  int getHits() { return hits; }
  int getRuns() { return runs; }
  int getDoubles() { return doubles; }
  int getTriples() { return triples; }
  int getHomeRuns() { return homeRuns; }
  int getRunsBattedIn() { return runsBattedIn; }
  int getStolenBases() { return stolenBases; }
  int getCaughtStealing() { return caughtStealing; }
  int getWalks() { return walks; }
  int getHitByPitch() { return hitByPitch; }
  int getIntentionalWalks() { return intentionalWalks; }
  int getStrikeouts() { return strikeouts; }
  int getSacrifices() { return sacrifices; }

  // Setters
  void setPlateAppearances(int plateAppearances) {
    this->plateAppearances = plateAppearances;
  }
  void setAtBats(int atBats) { this->atBats = atBats; }
  void setHits(int hits) { this->hits = hits; }
  void setRuns(int runs) { this->runs = runs; }
  void setDoubles(int doubles) { this->doubles = doubles; }
  void setTriples(int triples) { this->triples = triples; }
  void setHomeRuns(int homeRuns) { this->homeRuns = homeRuns; }
  void setRunsBattedIn(int runsBattedIn) { this->runsBattedIn = runsBattedIn; }
  void setStolenBases(int stolenBases) { this->stolenBases = stolenBases; }
  void setCaughtStealing(int caughtStealing) {
    this->caughtStealing = caughtStealing;
  }
  void setWalks(int walks) { this->walks = walks; }
  void setHitByPitch(int hitByPitch) { this->hitByPitch = hitByPitch; }
  void setIntentionalWalks(int intentionalWalks) {
    this->intentionalWalks = intentionalWalks;
  }
  void setStrikeouts(int strikeouts) { this->strikeouts = strikeouts; }
  void setSacrifices(int sacrifices) { this->sacrifices = sacrifices; }

  // Calculators
  double getBattingAverage() {
    if (atBats == 0) {
      return 0;
    }
    return static_cast<double>(hits) / atBats;
  }
  double getOnBasePercentage() {
    if (plateAppearances == 0) {
      return 0;
    }
    return static_cast<double>(hits + walks + hitByPitch + intentionalWalks) /
           plateAppearances;
  }
  double getSluggingPercentage() {
    if (atBats == 0) {
      return 0;
    }
    return static_cast<double>((hits - doubles - triples - homeRuns) +
                               (2 * doubles) + (3 * triples) + (4 * homeRuns)) /
           atBats;
  }
  double getOnBasePlusSlugging() {
    return getOnBasePercentage() + getSluggingPercentage();
  }
  double getCaughtStealingPercentage() {
    if (stolenBases + caughtStealing == 0) {
      return 0;
    }
    return static_cast<double>(caughtStealing) / (stolenBases + caughtStealing);
  }
  double getTotalBases() {
    return (hits - doubles - triples - homeRuns) + (2 * doubles) +
           (3 * triples) + (4 * homeRuns);
  }

  // Get all info
  std::string getInfo() {
    return std::string(
        "Position Player Information:\n"
        "Name: " +
        name + "\n" + "Position: " + position + "\n" +
        "Number: " + std::to_string(number) + "\n" + "Team: " + team + "\n" +
        "Age: " + std::to_string(age) + "\n" +
        "Batting Average: " + std::to_string(getBattingAverage()) + "\n" +
        "On Base Percentage: " + std::to_string(getOnBasePercentage()) + "\n" +
        "Slugging Percentage: " + std::to_string(getSluggingPercentage()) +
        "\n" + "OPS: " + std::to_string(getOnBasePlusSlugging()) + "\n" +
        "Caught Stealing Percentage: " +
        std::to_string(getCaughtStealingPercentage()) + "\n" +
        "Total Bases: " + std::to_string(getTotalBases()) + "\n");
  }
};