#include <string>

class Team {
 protected:
  std::string name;
  std::string city;
  std::string stadium;
  std::string league;
  std::string division;
  int wins;
  int losses;
  int runsScored;
  int runsAllowed;

 public:
  // Constructor
  Team(const std::string& name, const std::string& city,
       const std::string& stadium, const std::string& league,
       const std::string& division, int wins, int losses, int runsScored,
       int runsAllowed)
      : name(name),
        city(city),
        stadium(stadium),
        league(league),
        division(division),
        wins(wins),
        losses(losses),
        runsScored(runsScored),
        runsAllowed(runsAllowed) {}

  // Getters
  std::string getName() { return name; }
  std::string getCity() { return city; }
  std::string getStadium() { return stadium; }
  std::string getLeague() { return league; }
  std::string getDivision() { return division; }
  int getWins() { return wins; }
  int getLosses() { return losses; }
  int getRunsScored() { return runsScored; }
  int getRunsAllowed() { return runsAllowed; }

  // Setters
  void setName(std::string name) { this->name = name; }
  void setCity(std::string city) { this->city = city; }
  void setStadium(std::string stadium) { this->stadium = stadium; }
  void setLeague(std::string league) { this->league = league; }
  void setDivision(std::string division) { this->division = division; }
  void setWins(int wins) { this->wins = wins; }
  void setLosses(int losses) { this->losses = losses; }
  void setRunsScored(int runsScored) { this->runsScored = runsScored; }
  void setRunsAllowed(int runsAllowed) { this->runsAllowed = runsAllowed; }

  // Calculators
  double getWinningPercentage() {
    if (wins + losses == 0) {
      return 0;
    }
    return static_cast<double>(wins) / (wins + losses);
  }
  int getRunDifferential() { return runsScored - runsAllowed; }

  // Get all info
  std::string getInfo() {
    return std::string(
        "Team Information:\n"
        "Name: " +
        name + "\n" + "City: " + city + "\n" + "Stadium: " + stadium + "\n" +
        "League: " + league + "\n" + "Division: " + division + "\n" + "Wins: " +
        std::to_string(wins) + "\n" + "Losses: " + std::to_string(losses) +
        "\n" + "Runs Scored: " + std::to_string(runsScored) + "\n" +
        "Runs Allowed: " + std::to_string(runsAllowed) + "\n" +
        "Winning Percentage: " + std::to_string(getWinningPercentage()) + "\n" +
        "Run Differential: " + std::to_string(getRunDifferential()) + "\n");
  }
};