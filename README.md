# Shape Game SHMUP Example
See main.cpp for inline comments explaining the example.

See https://github.com/hasahmed/shape_game_cpp Shape Game Engine README for documentation
and more specific instructions


This project already includes the ShapeGame library,
(but it isn't guaranteed to be up to date. Check out the releases in main repo for latest)
so you should be able to just compile and run it for your platform

## Compilation / Run

### Windows
You should be able to simply open the solution in Visual Studio and run it as long as
you have to proper C++ development components installed


### Mac
After installing GLFW Globally (More instructions in main shapegame repo),
from a shell enter the following command
`g++ -std=c++17 -o shapegame-example shapegame-example.cpp -I./shapegame/include shapegame/platform/mac/shapegame.a -lglfw -framework Cocoa -framework IOKit -framework CoreVideo -framework OpenGL`
then to run from the shell type `./shapegame-example`


### Linux
After installing GLFW Globally (More instructions in main shapegame repo),
from a shell enter the following command
`g++ -std=c++17 -o main main.cpp `pkg-config --cflags glfw3` -I./shapegame/deps -I./shapegame/include shapegame/platform/linux/shapegame.a `pkg-config --libs glfw3`
then to run from the shell type `./shapegame-example`
