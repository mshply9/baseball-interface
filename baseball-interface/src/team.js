class Team {
  constructor(name, city, league, division, wins, losses, runsScored, runsAllowed){
    this.name = name;
    this.city = city;
    this.league = league;
    this.division = division;
    this.wins = wins;
    this.losses = losses;
    this.runsScored = runsScored;
    this.runsAllowed = runsAllowed;
  }
  calculateWinningPercentage() {
    return this.wins / (this.wins + this.losses);
  }
  calculateRunDifferential() {
    return this.runsScored - this.runsAllowed;
  }
  displayTeamInfo() {
    return `Team Information:
    Name: ${this.name}
    City: ${this.city}
    League: ${this.league}
    Division: ${this.division}
    Wins: ${this.wins}
    Losses: ${this.losses}
    Runs Scored: ${this.runsScored}
    Runs Allowed: ${this.runsAllowed}`;
  }
}