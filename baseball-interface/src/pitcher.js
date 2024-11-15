class Pitcher extends Player {
  // League constant for 2019 MLB season
  static FIP_CONSTANT = 3.214; 
  constructor(name, position, number, team, age, games, gamesStarted, completeGames, saves, inningsPitched,
     runs, earnedRuns, hits, walks, intentionalWalks, homeruns, strikeouts, hitByPitch, battersFaced, wins, losses){
  super(name, position, number, team, age);
  this.games = games;
  this.gamesStarted = gamesStarted;
  this.completeGames = completeGames;
  this.saves = saves;
  this.inningsPitched = inningsPitched;
  this.runs = runs;
  this.earnedRuns = earnedRuns;
  this.hits = hits;
  this.walks = walks;
  this.intentionalWalks = intentionalWalks;
  this.homeruns = homeruns;
  this.strikeouts = strikeouts;
  this.hitByPitch = hitByPitch;
  this.battersFaced = battersFaced;
  this.wins = wins;
  this.losses = losses;
     }
    calculateEarnedRunAverage() {
      return this.earnedRuns / (this.inningsPitched / 9); 
    }
    calculateRunsPerNine() {
      return this.runs / (this.inningsPitched / 9); 
    }
    calculateStrikeoutsPerNine() {
      return this.strikouts / (this.inningsPitched / 9); 
    }
    calculateWalksPerNine() {
      return this.walks / (this.inningsPitched / 9); 
    }
    calculateFieldingIndepenedentPitching() {
      return ((13 * this.homeruns) + (3 * (this.walks + this.hitByPitch)) - (2 * this.strikeouts)) / this.inningsPitched + FIP_CONSTANT; 
    }
    calculateWalksAndHitsPerInningPitched() {
      return (this.walks + this.hits) / this.inningsPitched; 
    }
    displayPitcherInfo () {
      return `Pitcher Information:
      Name: ${this.name}
      Position: ${this.position}
      Number: ${this.number}
      Team: ${this.team}
      Age: ${this.age}
      Games: ${this.games}
      Games Started: ${this.gamesStarted}
      Complete Games: ${this.completeGames}
      Saves: ${this.saves}
      Innings Pitched: ${this.inningsPitched}
      Runs: ${this.runs}
      Earned Runs: ${this.earnedRuns}
      Hits: ${this.hits}
      Walks: ${this.walks}
      Intentional Walks: ${this.intentionalWalks}
      Homeruns: ${this.homeruns}
      Strikeouts: ${this.strikeouts}
      Hit By Pitch: ${this.hitByPitch}
      Batters Faced: ${this.battersFaced}
      Wins: ${this.wins}
      Losses: ${this.losses}`;
    }
}