class Player {
  constructor(name, position, number, team, age) {
    this.name = name; 
    this.position = position;
    this.number = number;
    this.team = team;
    this.age = age;
  }
  displayPlayerInfo() {
    return `Player Information:
    Name: ${this.name}
    Position: ${this.position}
    Number: ${this.number}
    Team: ${this.team}
    Age: ${this.age}`;
  }
}