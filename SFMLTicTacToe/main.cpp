#include <SFML/Graphics.hpp>
#include "classes/window.hpp"
#include "classes/game.hpp"

void eventLoop(sf::Event event, sf::RenderWindow& window) {
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) window.close();
        else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) window.close();
    }
}


int main() {
    Window game(1280, 720, "TicTacToe in SFML!");
    Game tictactoe;
    while (game.window.isOpen()) {
        game.window.clear(sf::Color::Blue);
        eventLoop(game.event, game.window);
        tictactoe.play(game.window);
        game.window.display();
    }

    return 0;
}