#include "shapegame.hpp"
using namespace shapegame;

const int SCREEN_WIDTH = 400;
const int SCREEN_HEIGHT = 600;

int main() {
	/* Create a new Game object with window width, height, and title */
	Game game(SCREEN_WIDTH, SCREEN_HEIGHT, "SHMUP");
	// Set the background color of the scene
	game.scene->setBackgroundColor(Color::BLUE);

	//[> Add a convenience key handler that closes the window when escape is pressed <]
	game.scene->addChild(std::make_unique<DebugKeyHandler>());

	game.scene->addChild(std::make_unique<Circle>(Position(100, 100), 100, Color::BLACK));

	game.scene->addChild(std::make_unique<Triangle>(Position(100, 300), Point(200, 300), Point(150, 400), Color::GREEN));
	// finally starting the game
	game.run();
	// exercise for the reader: give all object shadows (HINT: Make them MultiShapes)
	// and also make all movement 'frame rate independent'
}
