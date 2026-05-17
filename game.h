#ifndef GAME_H
#define GAME_H

#include <string>

// Moves used in the game.
enum Move {
    ROCK = 0,
    PAPER = 1,
    SCISSORS = 2
};

// Winner outcome.
enum Winner {
    PLAYER = 0,
    COMPUTER = 1
};

Move parseMove(const std::string& input);
Move getComputerMove();
Winner determineWinner(Move player, Move computer);
void updateScore(Winner winner, int& playerScore, int& computerScore);
std::string moveToString(Move move);

#endif
