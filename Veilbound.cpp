// Project: VeilBound
// File: Veilbound.cpp
// Description: Main entry point of the application.

#include <iostream>
#include <raylib.h>

using namespace std;

int main()
{
	InitWindow(1280, 720, "veilbound");
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(BLACK);
		EndDrawing();
	}

	CloseWindow();
	return 0;
}
