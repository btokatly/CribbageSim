// This file will contain basic logic for the game of cribbage
// Blake Tokatly v1.0 2/5/22


using namespace std;

// Initialize 2-4 players
   // if two players: a hand starts with 6 cards.
   // if three players: a hand starts with 5 cards, the crib is dealt one card.
   // if four players: a hand starts with 5 cards.

// Dealing
  // Deal the hands
    // Pull random elements from the "deck" to each "hand" at a time


  // Build the crib
    // Allow players to keep 4 cards, moving them to a new instance of hand? Or new array in hand?
    // Other cards get placed in the crib

  // Cut & Flip
    // Pick a random number, pull the "card" from that index in 

// Horserace
  // The non dealer player will start a "count" up to 31 (cannot go over)
  // Just pull values from the hands, do not extract the card itself

// Counting 
  // Count Hands
    // Calculate values of the hands, add it to the total points for each player, reset the hand


  // Count Crib
    // Calculate the crib value and add it to the point total for the dealer


// Stop when one of the players reaches 120 points
// If no one has reached 120 points, clear the hands and crib, reshuffle the deck
