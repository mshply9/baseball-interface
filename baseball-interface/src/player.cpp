#include <string>

class Player {
 protected:
  std::string name;
  std::string position;
  int number;
  std::string team;
  int age;

 public:
  // Constructor
  Player(const std::string& name, const std::string& position, int number,
         const std::string& team, int age)
      : name(name), position(position), number(number), team(team), age(age) {}

  // Getters
  std::string getName() { return name; }
  std::string getPosition() { return position; }
  int getNumber() { return number; }
  std::string getTeam() { return team; }
  int getAge() { return age; }

  // Setters
  void setName(std::string name) { this->name = name; }
  void setPosition(std::string position) { this->position = position; }
  void setNumber(int number) { this->number = number; }
  void setTeam(std::string team) { this->team = team; }
  void setAge(int age) { this->age = age; }

  // Get all info
  std::string getInfo() {
    return "Player Information:\n"
           "Name: " +
           name +
           "\n"
           "Position: " +
           position +
           "\n"
           "Number: " +
           std::to_string(number) +
           "\n"
           "Team: " +
           team +
           "\n"
           "Age: " +
           std::to_string(age) + "\n";
  }
};