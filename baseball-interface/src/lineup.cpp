#include <string>
#include <vector>

#include "Pitcher.cpp"
#include "PositionPlayer.cpp"
#include "Team.cpp"

class Lineup {
 protected:
  Team team;
  Pitcher pitcher;
  PositionPlayer catcher;
  PositionPlayer firstBase;
  PositionPlayer secondBase;
  PositionPlayer thirdBase;
  PositionPlayer shortstop;
  PositionPlayer leftField;
  PositionPlayer centerField;
  PositionPlayer rightField;
  PositionPlayer designatedHitter;
  std::vector<Pitcher> bullpen;
  std::vector<PositionPlayer> bench;

 public:
  // Constructor
  Lineup(Team team, Pitcher pitcher, PositionPlayer catcher,
         PositionPlayer firstBase, PositionPlayer secondBase,
         PositionPlayer thirdBase, PositionPlayer shortstop,
         PositionPlayer leftField, PositionPlayer centerField,
         PositionPlayer rightField, PositionPlayer designatedHitter,
         std::vector<Pitcher> bullpen, std::vector<PositionPlayer> bench)
      : team(team),
        pitcher(pitcher),
        catcher(catcher),
        firstBase(firstBase),
        secondBase(secondBase),
        thirdBase(thirdBase),
        shortstop(shortstop),
        leftField(leftField),
        centerField(centerField),
        rightField(rightField),
        designatedHitter(designatedHitter),
        bullpen(bullpen),
        bench(bench) {}

  // Everything below is currently broken and needs to be fixed
  /*
  // Getters
  Team getTeam() const { return team; }
  Pitcher getPitcher() const { return pitcher; }
  PositionPlayer getCatcher() const { return catcher; }
  PositionPlayer getFirstBase() const { return firstBase; }
  PositionPlayer getSecondBase() const { return secondBase; }
  PositionPlayer getThirdBase() const { return thirdBase; }
  PositionPlayer getShortstop() const { return shortstop; }
  PositionPlayer getLeftField() const { return leftField; }
  PositionPlayer getCenterField() const { return centerField; }
  PositionPlayer getRightField() const { return rightField; }
  PositionPlayer getDesignatedHitter() const { return designatedHitter; }
  std::vector<Pitcher> getBullpen() const { return bullpen; }
  std::vector<PositionPlayer> getBench() const { return bench; }

  // Setters
  void setTeam(const Team& team) { this->team = team; }
  void setPitcher(const Pitcher& pitcher) { this->pitcher = pitcher; }
  void setCatcher(const PositionPlayer& catcher) { this->catcher = catcher; }
  void setFirstBase(const PositionPlayer& firstBase) {
    this->firstBase = firstBase;
  }
  void setSecondBase(const PositionPlayer& secondBase) {
    this->secondBase = secondBase;
  }
  void setThirdBase(const PositionPlayer& thirdBase) {
    this->thirdBase = thirdBase;
  }
  void setShortstop(const PositionPlayer& shortstop) {
    this->shortstop = shortstop;
  }
  void setLeftField(const PositionPlayer& leftField) {
    this->leftField = leftField;
  }
  void setCenterField(const PositionPlayer& centerField) {
    this->centerField = centerField;
  }
  void setRightField(const PositionPlayer& rightField) {
    this->rightField = rightField;
  }
  void setDesignatedHitter(const PositionPlayer& designatedHitter) {
    this->designatedHitter = designatedHitter;
  }
  void setBullpen(const std::vector<Pitcher>& bullpen) {
    this->bullpen = bullpen;
  }
  void setBench(const std::vector<PositionPlayer>& bench) {
    this->bench = bench;
  }

  // Get all info
  std::string getInfo() {
    return std::string(
        "Lineup Information:\n"
        "Team: " + team.getName() + "\n"
        "Pitcher: " + pitcher.getName() + "\n"
        "Catcher: " + catcher.getName() + "\n"
        "First Base: " + firstBase.getName() + "\n"
        "Second Base: " + secondBase.getName() + "\n"
        "Third Base: " + thirdBase.getName() + "\n"
        "Shortstop: " + shortstop.getName() + "\n"
        "Left Field: " + leftField.getName() + "\n"
        "Center Field: " + centerField.getName() + "\n"
        "Right Field: " + rightField.getName() + "\n"
        "Designated Hitter: " + designatedHitter.getName() + "\n"
        "Bullpen: " + std::to_string(bullpen.size()) + " pitchers\n"
        "Bench: " + std::to_string(bench.size()) + " position players\n");
  } 
  */
};