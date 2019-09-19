.PHONY: linux
linux:
	g++ -std=c++17 -o shapegame-example shapegame-example.cpp `pkg-config --cflags glfw3` -I./shapegame/deps -I./shapegame/include shapegame/platform/linux/shapegame.a `pkg-config --libs glfw3`

.PHONY: mac
mac:
	g++ -std=c++17 -o shapegame-example shapegame-example.cpp -I./shapegame/include shapegame/platform/mac/shapegame.a -lglfw -framework Cocoa -framework IOKit -framework CoreVideo -framework OpenGL
