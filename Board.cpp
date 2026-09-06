#pragma once

#include <cstdint>

class Board
{
public:

    uint64_t whitePawns;
    uint64_t whiteKnights;
    uint64_t whiteBishops;
    uint64_t whiteRooks;
    uint64_t whiteQueens;
    uint64_t whiteKing;

    uint64_t blackPawns;
    uint64_t blackKnights;
    uint64_t blackBishops;
    uint64_t blackRooks;
    uint64_t blackQueens;
    uint64_t blackKing;

    bool whiteToMove;

    bool whiteCastleKing;
    bool whiteCastleQueen;
    bool blackCastleKing;
    bool blackCastleQueen;

    int enPassant;

    Board();
};