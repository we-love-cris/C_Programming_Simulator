#pragma once
#include "declare.h"
#include "util.h"
#include "view.h"

int play_game_prof(status* game);
/*
1. ���� -1
2. ��� -1
3. �ǽ� -3
4. �⼮ -2
5. �������� -10
6. ����� -2
7. ���� ���ϱ� -1
8. ���� ���� -1
9. �������� ���� -1
*/
int play_game_std(status* game);

void start_day_p(status* game, int week, int* work);
void start_game_p(status* game);
void p_endturn(status* game);

int do_what_p(int* work);
void p_do(status* game, int does);

void attend_p(status* game); // �⼮�� �θ���
void lecture_p(status* game); // ������ �����Ѵ�
void chat_p(status* game); // �ٸ� ��⸦ �Ѵ�
void practice_p(status* game); // �ǽ��� �����Ѵ�
void announce_st_p(status* game); // ���������� �����Ѵ�
void smallTest_p(status* game); // ���������� ����
void wakingUp_p(status* game); // �л����� �����
void answerQuestion_p(status* game); // ������ �޴´�
void announce_tp_p(status* game);

void nextDay_p(status* game); // �Ϸ簡 ������ �� ó�����ִ� �Լ�
int endSemester_p(status* game); // �бⰡ ������ �� ó�����ִ� �Լ�

int findOn_p(student** std_list);
int isAttend_p(student** std_list);
void snooze_p(student** std_list);
void configureWork(player_p* choi, int* work);

int statusCheck_p(status* game); // ���ӿ��� ������ �׽�Ʈ
