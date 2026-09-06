# Chess Engine
A chess engine is a tool that is able to take a chess board position, generate the next moves and evaluate those moves based off the best responses from the opponent.

1. Chess Engine
 - Implement Board, Move, Piece &rarr; 1.0.0 
 - Implement board representation / bitboards &rarr; 1.0.0
 - Implement FEN parsing
 - Implement make/undo move
 - Implement legal move generation
 - Add castling, en passant and promotion &rarr; 1.0.0 (except promotion)
 - Add check, checkmate and stalemate detection
2. Classical Search
 - Implement position evaluation
 - Implement Minimax
 - Implement Alpha-Beta pruning
 - Add iterative deepening
 - Add move ordering
 - Add quiescence search
 - Add transposition table + Zobrist hashing
 - Benchmark against Stockfish
3. Stockfish Dataset
 - Integrate Stockfish
 - Generate millions of positions
 - Store position → best move + evaluation
 - Create efficient C++ dataset pipeline
4. Neural Network
 - Integrate LibTorch
 - Design board → tensor representation
 - Build policy + value network
 - Implement training pipeline
 - Train on Stockfish-generated positions
 - Evaluate on unseen positions
5. Neural Chess Engine
 - Replace handcrafted evaluator with NN
 - Compare NN vs classical engine
 - Use NN for move ordering
 - Combine NN + Alpha-Beta search
 - Benchmark against Stockfish
6. Self-Play
 - Implement NN self-play
 - Generate new training positions
 - Retrain periodically
 - Run engine tournaments
 - Track Elo and performance