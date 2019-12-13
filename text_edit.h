#pragma once
#include "declare.h"
#include "util.h"
#include "view.h"

typedef struct linked_list {
	struct linked_list * prev;
	struct linked_list * next;
	char* content;
	int max_size;
} ll;


int text_edit_main(status* game);

int editing_file(int prev_number);

ll* making_ll(ll* prev_line);
void deleting_ll(ll* line);

int making_file(int prev_number, ll* nowline);

int get_input();
int char_delete(char* content, int at);
int char_input(char* content, int at, int input, int char_size);
int is_hangeul(int what);

//show관련
void text_show(ll* line);
int printline(char* content, int y);
