#include "Game.hpp"
#include "DEFINITIONS.hpp"

/**
* HIDE CONSOLE WINDOW
* Debug -> MyApp Properties -> Linker -> System -> SubSystem: Windows (/SUBSYSTM:WINDOWS)
* Debug -> MyApp Properties -> Linker -> Advanced -> Entry Point: mainCRTStartup
*/

int main()
{
	Sonar::Game(SCREEN_WIDTH, SCREEN_HEIGHT, "Flappy Bird");
	return EXIT_SUCCESS;
}