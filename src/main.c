#define MINIAUDIO_IMPLEMENTATION
#include <miniaudio.h>
#include <ncurses.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    ma_result result;
    ma_engine engine;

    result = ma_engine_init(NULL, &engine);
    if (result != MA_SUCCESS) {
        return -1;
    }

    ma_engine_play_sound(&engine, "/home/denis/music.mp3", NULL);

    printf("Press Enter to quit...");
    getchar();

    ma_engine_uninit(&engine);
    return EXIT_SUCCESS;
}

