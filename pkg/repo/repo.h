#pragma once

#include "./../EscapeRoom/room.h"
// FILE ACCESS
int log_port(const char * path, const int port);

int get_user(const char * path, const char* usr, const char* pwd);
int create_user(const char * path, const char* usr, const char* pwd);

int get_room_item(const char* path, item* it);




