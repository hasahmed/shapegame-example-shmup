linux:
g++ -std=c++17 -o shapegame-example shapegame-example.cpp `pkg-config --cflags glfw3` -I./shapegame/deps -I./shapegame/include shapegame/platform/linux/shapegame.a `pkg-config --libs glfw3`
