#include <gb/gb.h>
#include <stdio.h>
#include "smileface.c"
#include "simplebackground.c"
#include "simplebackgroundmap.c"

void main()
{
    set_bkg_data(0, 7, backgroundtiles);
    set_bkg_tiles(0, 0, 40, 18, background);

    SHOW_BKG;
    DISPLAY_ON;

    while (1)
    {
        scroll_bkg(1, 0);
        delay(100);
    }

    // UINT8 currentspriteindex = 0;

    // set_sprite_data(0, 2, TileLabel);
    // set_sprite_tile(0, 0);
    // move_sprite(0, 88, 78);
    // SHOW_SPRITES;

    // while (1)
    // {
    //     switch (joypad())
    //     {
    //     case J_LEFT:
    //         scroll_sprite(0, -5, 0);
    //         break;
    //     case J_RIGHT:
    //         scroll_sprite(0, 5, 0);
    //         break;
    //     case J_UP:
    //         scroll_sprite(0, 0, -5);
    //         break;
    //     case J_DOWN:
    //         scroll_sprite(0, 0, 5);
    //         break;
    //     }

    //     if (currentspriteindex == 0)
    //     {
    //         currentspriteindex = 1;
    //     }
    //     else
    //     {
    //         currentspriteindex = 0;
    //     }
    //     set_sprite_tile(0, currentspriteindex);
    //     delay(100);
    // }
}
