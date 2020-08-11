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

	Circle* circle = game.scene->addChildAs<Circle>(std::make_unique<Circle>(Position(100, 100), 200, Color::BLACK));

	Triangle* triangle = game.scene->addChildAs<Triangle>(std::make_unique<Triangle>(Position(100, 300), Point(200, 300), Point(150, 400), Color::GREEN));
	//std::cout << triangle->pos << std::endl;
	//triangle->rotate(1);
	//circle->rotate(1);
	//std::cout << circle->getNextRotation() << std::endl;
	//std::cout << triangle->pos << std::endl;
	game.scene->addChild(std::make_unique<Timer>(10, true, true, [&triangle, &circle]() {
		//triangle->translate(0, 0);
		triangle->rotate(-1);
		circle->rotate(-1);
		if (triangle->getRotation() <= -90) {
			triangle->setRotation(0);
		}
		//std::cout << circle->pos << std::endl;
		//std::cout << triangle->pos << std::endl;
		//std::cout << triangle->pos << std::endl;
		//std::cout << triangle->second << std::endl;
	}));
	//triangle->rotate(60);
	//triangle->rotate(1);
	//triangle->rotate(90);
	// finally starting the game
	game.run();
	// exercise for the reader:
		// - Give all object shadows (HINT: Make them MultiShapes)
		// - Make all movement 'frame rate independent'
}
