class PositionPlayer extends Player {
  constructor(name, position, number, team, age, plateAppearances, atBats, hits, runs, doubles, triples, homeRuns,
     runsBattedIn, stolenBases, caughtStealing, walks, hitByPitch, intentionalWalks, strikeouts, sacrifices) {
  super(name, position, number, team, age);
  this.plateAppearances = plateAppearances;
  this.atBats = atBats;
  this.hits = hits;
  this.runs = runs;
  this.doubles = doubles;
  this.triples = triples;
  this.homeRuns = homeRuns;
  this.runsBattedIn = runsBattedIn;
  this.stolenBases = stolenBases;
  this.caughtStealing = caughtStealing;
  this.walks = walks;
  this.hitByPitch = hitByPitch;
  this.intentionalWalks = intentionalWalks;
  this.strikeouts = strikeouts;
  this.sacrifices = sacrifices;
  }
  calculateBattingAverage() {
    return (this.hits - this.sacrifices) / this.atBats; 
  }
  calculateOnBasePercentage() {
    return (this.hits + this.walks + this.hitByPitch + this.intentionalWalks) / (this.atBats + this.Walks); 
  }
  calculateSluggingPercentage() {
    return (this.hits - this.doubles - this.triples - this.homeRuns) + (2 * this.doubles) +
    (3 * this.triples) + (4 * this.homeruns) / this.atBats; 
  }
  calcualteOPS() {
    return this.calculateOnBasePercentage() + this.calculateSluggingPercentage(); 
  }
  calcualteCaughtStealingPercentage() {
    return this.stolenBases / this.caughtStealing; 
  }
  calculateTotalBases() {
    return this.hits + (2 * this.doubles) + (3 * this.triples) + (4 * this.homeRuns); 
  }
  displayPositionPlayerInfo() {
    return `Position Player Information:
    Name: ${this.name}
    Position: ${this.position}
    Number: ${this.number}
    Team: ${this.team}
    Age: ${this.age}
    Plate Appearances: ${this.plateAppearances}
    At Bats: ${this.atBats}
    Hits: ${this.hits}
    Runs: ${this.runs}
    Doubles: ${this.doubles}
    Triples: ${this.triples}
    Home Runs: ${this.homeRuns}
    Runs Batted In: ${this.runsBattedIn}
    Stolen Bases: ${this.stolenBases}
    Caught Stealing: ${this.caughtStealing}
    Walks: ${this.walks}
    Hit By Pitch: ${this.hitByPitch}
    Intentional Walks: ${this.intentionalWalks}
    Strikeouts: ${this.strikeouts}
    Sacrifices: ${this.sacrifices}
    Batting Average: ${this.calculateBattingAverage()}
    On Base Percentage: ${this.calculateOnBasePercentage()}
    Slugging Percentage: ${this.calculateSluggingPercentage()}
    OPS: ${this.calcualteOPS()}
    Caught Stealing Percentage: ${this.calcualteCaughtStealingPercentage()}
    Total Bases: ${this.calculateTotalBases()}`;
  }
}
