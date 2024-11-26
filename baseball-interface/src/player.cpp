#include <iostream>
#include <string>
#include <json.hpp>
#include <cpprest/http_listener.h>
#include <cpprest/json.h>

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

  // Convert to JSON
  nlohmann::json toJson() const {
    nlohmann::json json; 
    json["name"] = name;
    json["position"] = position;
    json["number"] = number;
    json["team"] = team;
    json["age"] = age;
    return json;
  }

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
           "Name: " + name + "\n"
           "Position: " + position + "\n"
           "Number: " + std::to_string(number) + "\n"
           "Team: " + team + "\n"
           "Age: " + std::to_string(age) + "\n";
  }

  // API 
  void handleGet(web::http::http_request request) {
    Player player("Bryce Harper", "First Base", 3 , "Phillies", 28);
    auto response = json::value::parse(player.toJson().dump();)
    request.reply(web::http::status_codes::OK, response);
  }

  int main() {
    http_listener listener("http://localhost:5173/player");
    listener.support(methods::GET, handle_get); 

    try{
      listener
        .open()
        .then([&listener](){std::cout << "Starting to listen\n"; })
        .wait();

        std::string line; 
        std::getline(std::cin, line); 
    }
    catch (const std::exception& e) {
      std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
  }
};