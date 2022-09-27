/**
 * @file deck.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * Vars
 * - deck : array of ptrs? to Cards
 * - throw : cards that are in a hand
 * - flip : the flip card
 * 
 * Ops
 * - initDeck : create the deck
 * - shuffleDeck : randomize the deck
 * - organizeDeck : organize by suit and faceVal
 * - deal : deal cards to players, depending on number of players 
 *     remove those cards from the deck
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <card.cpp>;
using namespace std;
#include <iostream>;

class Deck {
  public: 
    Card deck[52];

    Deck initDeck(Card deckIn[]){
      Card *ptr;
      ptr = &deckIn[0];

      ptr->value = 10;
      ptr->suit = 'di';
      ptr->faceVal = 'J';

      std::cout << ptr;

    }

    NULL shuffleDeck(Deck deck){

    }
};

// comment for testing git
