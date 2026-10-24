import chess
import random

# Runs the self-play and training loop

board = chess.Board()

while not board.is_game_over():
    legal_moves = list(board.legal_moves)

    # To-do: Add the Neural network to decide what move to make
    # To-do: Add evaluation for the Neural Network
    # To-do: Convert the positions in a tensor
    move = random.choice(legal_moves)

    board.push_san(str(move))

print("Finished game")



