#include <iostream>s

/**
 * @file card.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * Vars
 * - value : int value of the card 1-10
 * - suit : char suit 
 *     'di' -- diamond 
 *     'cl' -- club 
 *     'sp' -- spade
 *     'ht' -- heart
 * - faceVal : char value shown on card 1-10, J, Q, K
 * 
 * Ops
 * - getVal : public return value
 * - getSuit : public return suit
 * - getFaceVal : public return faceVal
 * - changeParams : public enter three params
 * 
 * @copyright Copyright (c) 2022
 * 
 */

using namespace std;

class Card {
  public:

  // returns deck
  int getVal() { return value; }

  // returns suit
  char getSuit() { return suit; }

  // returns faceVal
  char getFaceVal() { return faceVal; }

  // updates all params of a Card
  changeParams(int nValue, char nSuit, char nFaceVal) {
    value = nValue;
    suit = nSuit;
    faceVal = nFaceVal;
  }

  bool checkFaceCard() {
    if (this::faceVal == 'J' || this::faceVal == 'Q' || this::faceVal == 'K')
      return true;
    else
      return false;
  }

  private: 
    // holds val 1-10
    int value;

    // holds 'di', 'ht', 'cl', 'sp'
    char suit;

    // holds 1-10, J, Q, K
    char faceVal;
};