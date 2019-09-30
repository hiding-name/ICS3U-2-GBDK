// Copyright (c) 2019 me All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Sept 2019
// This program is the print smiley face program for the GameBoy

#include <stdio.h>
#include <gb/gb.h>
#include "./smiler.h"

void main() {
    set_sprite_data(0, 2, smiler);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 87);
    SHOW_SPRITES;
}
