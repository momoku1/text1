#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <SDL2/SDL.h>
int main(int argc,char** argv)
{
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_CreateWindow("hello world", 100, 100, 800, 600, 0);
	SDL_Delay(10000);
	return 0;
}