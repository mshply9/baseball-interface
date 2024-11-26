import { useState, useEffect } from 'react'
import './App.css'

function App() {
  const [player, setPlayer] = useState(null); 

  useEffect(() => {
    fetch('http://localhost:5173/player')
      .then(response => response.json())
      .then(data => setPlayer(data))
      .catch(error => console.error('Error fetching player data:', error)); 
  }, []);

  if (!player) {
    return <div>Loading...</div>
  }

  return (
    <div className="App">
      <h1>Player Information</h1>
      <p>Name: {player.name}</p>
      <p>Position: {player.position}</p>
      <p>Team: {player.team}</p>
      <p>Number: {player.number}</p>
      <p>Age: {player.age}</p>
    </div>
  );
}

export default App
