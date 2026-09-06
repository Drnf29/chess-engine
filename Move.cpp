#pragma once

class Move
{
public:

    int from;
    int to;

    // What piece is moving
    int piece;

    // Piece captured, if any
    int capturedPiece;

    // Promotion piece, if any
    int promotionPiece;

    // Special move information
    bool isCapture;
    bool isPromotion;
    bool isEnPassant;
    bool isCastling;

    Move(
        int from,
        int to,
        int piece,
        int capturedPiece = -1,
        int promotionPiece = -1,
        bool isCapture = false,
        bool isPromotion = false,
        bool isEnPassant = false,
        bool isCastling = false
    )
        : from(from),
          to(to),
          piece(piece),
          capturedPiece(capturedPiece),
          promotionPiece(promotionPiece),
          isCapture(isCapture),
          isPromotion(isPromotion),
          isEnPassant(isEnPassant),
          isCastling(isCastling)
    {
    }
};