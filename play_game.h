#pragma once
#include "declare.h"
#include "util.h"
#include "view.h"

int play_game_prof(status* game);
int play_game_std(status* game);

void start_day_p(status* game, int week);
void start_game_p(status* game);
void p_endturn(status* game);

int do_what_p();
void p_do(status* game, int does);

void attend_p(status* game); // �⼮�� �θ���
void lecture_p(status* game); // ������ �����Ѵ�
void chat_p(status* game); // �ٸ� ��⸦ �Ѵ�
void practice_p(status* game); // �ǽ��� �����Ѵ�
void announce_st_p(status* game); // ���������� �����Ѵ�
void smallTest_p(status* game); // ���������� ����
void wakingUp_p(status* game); // �л����� �����
void answerQuestion_p(status* game); // ������ �޴´�
void nextDay_p(status* game); // �Ϸ簡 ������ �� ó�����ִ� �Լ�
void endSemester_p(status* game); // �бⰡ ������ �� ó�����ִ� �Լ�

int findOn_p(student** std_list);
int isAttend_p(student** std_list);

void statusCheck_p(status* game); // ���ӿ��� ������ �׽�Ʈ
