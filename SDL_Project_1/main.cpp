#include <iostream>
#include <SDL2/SDL.h>
#include <cmath>
using namespace std;

// Window Size Variables
const int SCREEN_WIDTH = 300;
const int SCREEN_HEIGHT = 300;
const int BOARD_SIZE = 3;
const int SQUARE_SIZE = SCREEN_WIDTH / BOARD_SIZE;

SDL_Window* window = nullptr;
SDL_Renderer* renderer = nullptr;

// Player Setup
enum class Player { RED, BLACK, NONE };
Player currentPlayer = Player::RED;

int board[BOARD_SIZE][BOARD_SIZE] = {0};

int checkWin() {
    // Check Rows and Columns for a Win
    for (int i = 0; i < BOARD_SIZE; ++i) {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != 0) ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != 0)) {
            return 1;
        }
    }

    // Check Diagonals for a Win
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != 0) ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != 0)) {
        return 1;
    }

    // Check for a Tie
    if (board[0][0] != 0 && board[0][1] != 0 && board[0][2] != 0 && board[1][0] != 0 && board[1][1] != 0 && board[1][2] != 0 
        && board[2][0] != 0 && board[2][1] != 0 && board[2][2] != 0 ) {
        return 2;
    }
    

    return 0;
}

void drawBoard() {
    // Clear the Renderer
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);

    // Draw the Tic Tac Toe Grid
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    for (int i = 1; i < BOARD_SIZE; ++i) {
        SDL_RenderDrawLine(renderer, i * SQUARE_SIZE, 0, i * SQUARE_SIZE, SCREEN_HEIGHT);
        SDL_RenderDrawLine(renderer, 0, i * SQUARE_SIZE, SCREEN_WIDTH, i * SQUARE_SIZE);
    }

    // Draw the X and O on the Board
    for (int row = 0; row < BOARD_SIZE; ++row) {
        for (int col = 0; col < BOARD_SIZE; ++col) {
            if (board[row][col] == 1) {
                // Draw Red square
                SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
                SDL_Rect rect{col * SQUARE_SIZE, row * SQUARE_SIZE, SQUARE_SIZE, SQUARE_SIZE};
                SDL_RenderFillRect(renderer, &rect);
            } else if (board[row][col] == 2) {
                // Draw Black square
                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
                SDL_Rect rect{col * SQUARE_SIZE, row * SQUARE_SIZE, SQUARE_SIZE, SQUARE_SIZE};
                SDL_RenderFillRect(renderer, &rect);
            }
        }
    }

    // Present the Renderer
    SDL_RenderPresent(renderer);
}

void handleEvent(SDL_Event& event) {
    if (event.type == SDL_QUIT) {
        cout << "Game Quit\n";
        exit(0);
    }
    // Find Mouse and Check for a Press
    if (event.type == SDL_MOUSEBUTTONDOWN) {
        int mouseX, mouseY;
        SDL_GetMouseState(&mouseX, &mouseY);

        int row = mouseY / SQUARE_SIZE;
        int col = mouseX / SQUARE_SIZE;

        if (row < BOARD_SIZE && col < BOARD_SIZE && board[row][col] == 0) {
            // Set the Player's Move on the Board
            board[row][col] = (currentPlayer == Player::RED) ? 1 : 2;

            // Check for a win
            if (checkWin() == 1) {
                cout << "Player " << ((currentPlayer == Player::RED) ? "Red" : "Black") << " wins!\n";
                exit(0);
            } else if (checkWin() == 2){
                cout << "It's a tie \n";
            }

            // Switch to the next player
            currentPlayer = (currentPlayer == Player::RED) ? Player::BLACK : Player::RED;

            // Draw the updated board
            drawBoard();
        }
    }
}

int main(int argc, char** argv) {
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cerr << "SDL initialization failed: " << SDL_GetError() << endl;
        return 1;
    }

    // Create a window
    window = SDL_CreateWindow("Tic Tac Toe", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (!window) {
        cerr << "Window creation failed: " << SDL_GetError() << endl;
        return 1;
    }

    // Create a renderer
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        cerr << "Renderer creation failed: " << SDL_GetError() << endl;
        return 1;
    }

    // Main game loop
    SDL_Event event;
    bool quit = false;

    while (!quit) {
        while (SDL_PollEvent(&event) != 0) {
            handleEvent(event);
        }

        // Move the code to print the winner here
        if (checkWin() == 1) {
            cout << "Player " << ((currentPlayer == Player::RED) ? "Red" : "Black") << " wins!\n";
            quit = true;  // Exit the Loop When There's a Winner
        } else if (checkWin() == 2){
            cout << "It's a tie \n";
            quit = true;  // Exit the Loop When There's a Tie
        }
    }

    // Close Window and End the Program
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}