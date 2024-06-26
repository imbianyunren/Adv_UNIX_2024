// Just hijack move_* functions using LD_PRELOAD in local enviroment


#include <stdio.h>
#include <sys/types.h>
#include "libmaze.h"
#include <stdlib.h>
#include <errno.h>
#include <string.h>




int dir[1200];
int step = 0;


int
maze_init() {
	fprintf(stderr, "UP112_GOT_MAZE_CHALLENGE\n");
	return 0;
}


void move_1(maze_t *mz){
	switch(dir[1]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_2(maze_t *mz){
	switch(dir[2]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_3(maze_t *mz){
	switch(dir[3]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_4(maze_t *mz){
	switch(dir[4]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_5(maze_t *mz){
	switch(dir[5]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_6(maze_t *mz){
	switch(dir[6]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_7(maze_t *mz){
	switch(dir[7]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_8(maze_t *mz){
	switch(dir[8]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_9(maze_t *mz){
	switch(dir[9]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_10(maze_t *mz){
	switch(dir[10]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_11(maze_t *mz){
	switch(dir[11]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_12(maze_t *mz){
	switch(dir[12]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_13(maze_t *mz){
	switch(dir[13]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_14(maze_t *mz){
	switch(dir[14]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_15(maze_t *mz){
	switch(dir[15]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_16(maze_t *mz){
	switch(dir[16]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_17(maze_t *mz){
	switch(dir[17]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_18(maze_t *mz){
	switch(dir[18]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_19(maze_t *mz){
	switch(dir[19]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_20(maze_t *mz){
	switch(dir[20]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_21(maze_t *mz){
	switch(dir[21]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_22(maze_t *mz){
	switch(dir[22]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_23(maze_t *mz){
	switch(dir[23]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_24(maze_t *mz){
	switch(dir[24]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_25(maze_t *mz){
	switch(dir[25]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_26(maze_t *mz){
	switch(dir[26]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_27(maze_t *mz){
	switch(dir[27]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_28(maze_t *mz){
	switch(dir[28]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_29(maze_t *mz){
	switch(dir[29]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_30(maze_t *mz){
	switch(dir[30]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_31(maze_t *mz){
	switch(dir[31]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_32(maze_t *mz){
	switch(dir[32]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_33(maze_t *mz){
	switch(dir[33]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_34(maze_t *mz){
	switch(dir[34]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_35(maze_t *mz){
	switch(dir[35]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_36(maze_t *mz){
	switch(dir[36]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_37(maze_t *mz){
	switch(dir[37]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_38(maze_t *mz){
	switch(dir[38]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_39(maze_t *mz){
	switch(dir[39]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_40(maze_t *mz){
	switch(dir[40]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_41(maze_t *mz){
	switch(dir[41]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_42(maze_t *mz){
	switch(dir[42]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_43(maze_t *mz){
	switch(dir[43]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_44(maze_t *mz){
	switch(dir[44]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_45(maze_t *mz){
	switch(dir[45]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_46(maze_t *mz){
	switch(dir[46]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_47(maze_t *mz){
	switch(dir[47]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_48(maze_t *mz){
	switch(dir[48]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_49(maze_t *mz){
	switch(dir[49]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_50(maze_t *mz){
	switch(dir[50]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_51(maze_t *mz){
	switch(dir[51]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_52(maze_t *mz){
	switch(dir[52]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_53(maze_t *mz){
	switch(dir[53]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_54(maze_t *mz){
	switch(dir[54]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_55(maze_t *mz){
	switch(dir[55]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_56(maze_t *mz){
	switch(dir[56]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_57(maze_t *mz){
	switch(dir[57]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_58(maze_t *mz){
	switch(dir[58]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_59(maze_t *mz){
	switch(dir[59]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_60(maze_t *mz){
	switch(dir[60]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_61(maze_t *mz){
	switch(dir[61]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_62(maze_t *mz){
	switch(dir[62]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_63(maze_t *mz){
	switch(dir[63]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_64(maze_t *mz){
	switch(dir[64]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_65(maze_t *mz){
	switch(dir[65]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_66(maze_t *mz){
	switch(dir[66]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_67(maze_t *mz){
	switch(dir[67]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_68(maze_t *mz){
	switch(dir[68]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_69(maze_t *mz){
	switch(dir[69]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_70(maze_t *mz){
	switch(dir[70]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_71(maze_t *mz){
	switch(dir[71]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_72(maze_t *mz){
	switch(dir[72]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_73(maze_t *mz){
	switch(dir[73]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_74(maze_t *mz){
	switch(dir[74]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_75(maze_t *mz){
	switch(dir[75]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_76(maze_t *mz){
	switch(dir[76]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_77(maze_t *mz){
	switch(dir[77]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_78(maze_t *mz){
	switch(dir[78]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_79(maze_t *mz){
	switch(dir[79]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_80(maze_t *mz){
	switch(dir[80]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_81(maze_t *mz){
	switch(dir[81]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_82(maze_t *mz){
	switch(dir[82]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_83(maze_t *mz){
	switch(dir[83]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_84(maze_t *mz){
	switch(dir[84]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_85(maze_t *mz){
	switch(dir[85]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_86(maze_t *mz){
	switch(dir[86]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_87(maze_t *mz){
	switch(dir[87]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_88(maze_t *mz){
	switch(dir[88]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_89(maze_t *mz){
	switch(dir[89]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_90(maze_t *mz){
	switch(dir[90]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_91(maze_t *mz){
	switch(dir[91]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_92(maze_t *mz){
	switch(dir[92]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_93(maze_t *mz){
	switch(dir[93]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_94(maze_t *mz){
	switch(dir[94]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_95(maze_t *mz){
	switch(dir[95]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_96(maze_t *mz){
	switch(dir[96]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_97(maze_t *mz){
	switch(dir[97]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_98(maze_t *mz){
	switch(dir[98]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_99(maze_t *mz){
	switch(dir[99]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_100(maze_t *mz){
	switch(dir[100]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_101(maze_t *mz){
	switch(dir[101]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_102(maze_t *mz){
	switch(dir[102]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_103(maze_t *mz){
	switch(dir[103]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_104(maze_t *mz){
	switch(dir[104]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_105(maze_t *mz){
	switch(dir[105]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_106(maze_t *mz){
	switch(dir[106]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_107(maze_t *mz){
	switch(dir[107]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_108(maze_t *mz){
	switch(dir[108]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_109(maze_t *mz){
	switch(dir[109]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_110(maze_t *mz){
	switch(dir[110]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_111(maze_t *mz){
	switch(dir[111]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_112(maze_t *mz){
	switch(dir[112]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_113(maze_t *mz){
	switch(dir[113]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_114(maze_t *mz){
	switch(dir[114]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_115(maze_t *mz){
	switch(dir[115]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_116(maze_t *mz){
	switch(dir[116]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_117(maze_t *mz){
	switch(dir[117]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_118(maze_t *mz){
	switch(dir[118]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_119(maze_t *mz){
	switch(dir[119]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_120(maze_t *mz){
	switch(dir[120]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_121(maze_t *mz){
	switch(dir[121]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_122(maze_t *mz){
	switch(dir[122]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_123(maze_t *mz){
	switch(dir[123]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_124(maze_t *mz){
	switch(dir[124]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_125(maze_t *mz){
	switch(dir[125]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_126(maze_t *mz){
	switch(dir[126]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_127(maze_t *mz){
	switch(dir[127]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_128(maze_t *mz){
	switch(dir[128]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_129(maze_t *mz){
	switch(dir[129]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_130(maze_t *mz){
	switch(dir[130]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_131(maze_t *mz){
	switch(dir[131]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_132(maze_t *mz){
	switch(dir[132]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_133(maze_t *mz){
	switch(dir[133]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_134(maze_t *mz){
	switch(dir[134]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_135(maze_t *mz){
	switch(dir[135]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_136(maze_t *mz){
	switch(dir[136]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_137(maze_t *mz){
	switch(dir[137]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_138(maze_t *mz){
	switch(dir[138]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_139(maze_t *mz){
	switch(dir[139]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_140(maze_t *mz){
	switch(dir[140]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_141(maze_t *mz){
	switch(dir[141]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_142(maze_t *mz){
	switch(dir[142]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_143(maze_t *mz){
	switch(dir[143]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_144(maze_t *mz){
	switch(dir[144]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_145(maze_t *mz){
	switch(dir[145]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_146(maze_t *mz){
	switch(dir[146]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_147(maze_t *mz){
	switch(dir[147]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_148(maze_t *mz){
	switch(dir[148]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_149(maze_t *mz){
	switch(dir[149]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_150(maze_t *mz){
	switch(dir[150]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_151(maze_t *mz){
	switch(dir[151]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_152(maze_t *mz){
	switch(dir[152]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_153(maze_t *mz){
	switch(dir[153]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_154(maze_t *mz){
	switch(dir[154]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_155(maze_t *mz){
	switch(dir[155]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_156(maze_t *mz){
	switch(dir[156]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_157(maze_t *mz){
	switch(dir[157]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_158(maze_t *mz){
	switch(dir[158]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_159(maze_t *mz){
	switch(dir[159]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_160(maze_t *mz){
	switch(dir[160]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_161(maze_t *mz){
	switch(dir[161]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_162(maze_t *mz){
	switch(dir[162]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_163(maze_t *mz){
	switch(dir[163]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_164(maze_t *mz){
	switch(dir[164]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_165(maze_t *mz){
	switch(dir[165]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_166(maze_t *mz){
	switch(dir[166]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_167(maze_t *mz){
	switch(dir[167]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_168(maze_t *mz){
	switch(dir[168]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_169(maze_t *mz){
	switch(dir[169]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_170(maze_t *mz){
	switch(dir[170]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_171(maze_t *mz){
	switch(dir[171]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_172(maze_t *mz){
	switch(dir[172]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_173(maze_t *mz){
	switch(dir[173]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_174(maze_t *mz){
	switch(dir[174]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_175(maze_t *mz){
	switch(dir[175]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_176(maze_t *mz){
	switch(dir[176]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_177(maze_t *mz){
	switch(dir[177]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_178(maze_t *mz){
	switch(dir[178]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_179(maze_t *mz){
	switch(dir[179]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_180(maze_t *mz){
	switch(dir[180]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_181(maze_t *mz){
	switch(dir[181]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_182(maze_t *mz){
	switch(dir[182]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_183(maze_t *mz){
	switch(dir[183]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_184(maze_t *mz){
	switch(dir[184]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_185(maze_t *mz){
	switch(dir[185]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_186(maze_t *mz){
	switch(dir[186]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_187(maze_t *mz){
	switch(dir[187]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_188(maze_t *mz){
	switch(dir[188]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_189(maze_t *mz){
	switch(dir[189]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_190(maze_t *mz){
	switch(dir[190]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_191(maze_t *mz){
	switch(dir[191]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_192(maze_t *mz){
	switch(dir[192]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_193(maze_t *mz){
	switch(dir[193]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_194(maze_t *mz){
	switch(dir[194]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_195(maze_t *mz){
	switch(dir[195]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_196(maze_t *mz){
	switch(dir[196]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_197(maze_t *mz){
	switch(dir[197]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_198(maze_t *mz){
	switch(dir[198]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_199(maze_t *mz){
	switch(dir[199]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_200(maze_t *mz){
	switch(dir[200]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_201(maze_t *mz){
	switch(dir[201]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_202(maze_t *mz){
	switch(dir[202]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_203(maze_t *mz){
	switch(dir[203]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_204(maze_t *mz){
	switch(dir[204]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_205(maze_t *mz){
	switch(dir[205]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_206(maze_t *mz){
	switch(dir[206]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_207(maze_t *mz){
	switch(dir[207]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_208(maze_t *mz){
	switch(dir[208]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_209(maze_t *mz){
	switch(dir[209]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_210(maze_t *mz){
	switch(dir[210]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_211(maze_t *mz){
	switch(dir[211]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_212(maze_t *mz){
	switch(dir[212]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_213(maze_t *mz){
	switch(dir[213]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_214(maze_t *mz){
	switch(dir[214]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_215(maze_t *mz){
	switch(dir[215]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_216(maze_t *mz){
	switch(dir[216]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_217(maze_t *mz){
	switch(dir[217]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_218(maze_t *mz){
	switch(dir[218]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_219(maze_t *mz){
	switch(dir[219]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_220(maze_t *mz){
	switch(dir[220]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_221(maze_t *mz){
	switch(dir[221]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_222(maze_t *mz){
	switch(dir[222]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_223(maze_t *mz){
	switch(dir[223]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_224(maze_t *mz){
	switch(dir[224]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_225(maze_t *mz){
	switch(dir[225]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_226(maze_t *mz){
	switch(dir[226]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_227(maze_t *mz){
	switch(dir[227]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_228(maze_t *mz){
	switch(dir[228]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_229(maze_t *mz){
	switch(dir[229]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_230(maze_t *mz){
	switch(dir[230]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_231(maze_t *mz){
	switch(dir[231]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_232(maze_t *mz){
	switch(dir[232]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_233(maze_t *mz){
	switch(dir[233]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_234(maze_t *mz){
	switch(dir[234]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_235(maze_t *mz){
	switch(dir[235]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_236(maze_t *mz){
	switch(dir[236]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_237(maze_t *mz){
	switch(dir[237]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_238(maze_t *mz){
	switch(dir[238]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_239(maze_t *mz){
	switch(dir[239]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_240(maze_t *mz){
	switch(dir[240]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_241(maze_t *mz){
	switch(dir[241]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_242(maze_t *mz){
	switch(dir[242]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_243(maze_t *mz){
	switch(dir[243]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_244(maze_t *mz){
	switch(dir[244]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_245(maze_t *mz){
	switch(dir[245]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_246(maze_t *mz){
	switch(dir[246]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_247(maze_t *mz){
	switch(dir[247]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_248(maze_t *mz){
	switch(dir[248]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_249(maze_t *mz){
	switch(dir[249]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_250(maze_t *mz){
	switch(dir[250]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_251(maze_t *mz){
	switch(dir[251]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_252(maze_t *mz){
	switch(dir[252]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_253(maze_t *mz){
	switch(dir[253]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_254(maze_t *mz){
	switch(dir[254]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_255(maze_t *mz){
	switch(dir[255]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_256(maze_t *mz){
	switch(dir[256]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_257(maze_t *mz){
	switch(dir[257]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_258(maze_t *mz){
	switch(dir[258]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_259(maze_t *mz){
	switch(dir[259]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_260(maze_t *mz){
	switch(dir[260]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_261(maze_t *mz){
	switch(dir[261]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_262(maze_t *mz){
	switch(dir[262]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_263(maze_t *mz){
	switch(dir[263]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_264(maze_t *mz){
	switch(dir[264]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_265(maze_t *mz){
	switch(dir[265]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_266(maze_t *mz){
	switch(dir[266]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_267(maze_t *mz){
	switch(dir[267]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_268(maze_t *mz){
	switch(dir[268]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_269(maze_t *mz){
	switch(dir[269]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_270(maze_t *mz){
	switch(dir[270]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_271(maze_t *mz){
	switch(dir[271]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_272(maze_t *mz){
	switch(dir[272]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_273(maze_t *mz){
	switch(dir[273]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_274(maze_t *mz){
	switch(dir[274]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_275(maze_t *mz){
	switch(dir[275]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_276(maze_t *mz){
	switch(dir[276]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_277(maze_t *mz){
	switch(dir[277]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_278(maze_t *mz){
	switch(dir[278]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_279(maze_t *mz){
	switch(dir[279]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_280(maze_t *mz){
	switch(dir[280]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_281(maze_t *mz){
	switch(dir[281]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_282(maze_t *mz){
	switch(dir[282]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_283(maze_t *mz){
	switch(dir[283]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_284(maze_t *mz){
	switch(dir[284]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_285(maze_t *mz){
	switch(dir[285]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_286(maze_t *mz){
	switch(dir[286]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_287(maze_t *mz){
	switch(dir[287]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_288(maze_t *mz){
	switch(dir[288]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_289(maze_t *mz){
	switch(dir[289]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_290(maze_t *mz){
	switch(dir[290]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_291(maze_t *mz){
	switch(dir[291]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_292(maze_t *mz){
	switch(dir[292]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_293(maze_t *mz){
	switch(dir[293]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_294(maze_t *mz){
	switch(dir[294]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_295(maze_t *mz){
	switch(dir[295]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_296(maze_t *mz){
	switch(dir[296]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_297(maze_t *mz){
	switch(dir[297]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_298(maze_t *mz){
	switch(dir[298]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_299(maze_t *mz){
	switch(dir[299]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_300(maze_t *mz){
	switch(dir[300]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_301(maze_t *mz){
	switch(dir[301]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_302(maze_t *mz){
	switch(dir[302]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_303(maze_t *mz){
	switch(dir[303]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_304(maze_t *mz){
	switch(dir[304]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_305(maze_t *mz){
	switch(dir[305]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_306(maze_t *mz){
	switch(dir[306]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_307(maze_t *mz){
	switch(dir[307]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_308(maze_t *mz){
	switch(dir[308]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_309(maze_t *mz){
	switch(dir[309]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_310(maze_t *mz){
	switch(dir[310]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_311(maze_t *mz){
	switch(dir[311]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_312(maze_t *mz){
	switch(dir[312]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_313(maze_t *mz){
	switch(dir[313]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_314(maze_t *mz){
	switch(dir[314]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_315(maze_t *mz){
	switch(dir[315]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_316(maze_t *mz){
	switch(dir[316]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_317(maze_t *mz){
	switch(dir[317]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_318(maze_t *mz){
	switch(dir[318]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_319(maze_t *mz){
	switch(dir[319]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_320(maze_t *mz){
	switch(dir[320]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_321(maze_t *mz){
	switch(dir[321]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_322(maze_t *mz){
	switch(dir[322]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_323(maze_t *mz){
	switch(dir[323]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_324(maze_t *mz){
	switch(dir[324]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_325(maze_t *mz){
	switch(dir[325]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_326(maze_t *mz){
	switch(dir[326]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_327(maze_t *mz){
	switch(dir[327]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_328(maze_t *mz){
	switch(dir[328]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_329(maze_t *mz){
	switch(dir[329]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_330(maze_t *mz){
	switch(dir[330]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_331(maze_t *mz){
	switch(dir[331]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_332(maze_t *mz){
	switch(dir[332]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_333(maze_t *mz){
	switch(dir[333]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_334(maze_t *mz){
	switch(dir[334]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_335(maze_t *mz){
	switch(dir[335]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_336(maze_t *mz){
	switch(dir[336]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_337(maze_t *mz){
	switch(dir[337]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_338(maze_t *mz){
	switch(dir[338]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_339(maze_t *mz){
	switch(dir[339]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_340(maze_t *mz){
	switch(dir[340]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_341(maze_t *mz){
	switch(dir[341]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_342(maze_t *mz){
	switch(dir[342]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_343(maze_t *mz){
	switch(dir[343]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_344(maze_t *mz){
	switch(dir[344]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_345(maze_t *mz){
	switch(dir[345]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_346(maze_t *mz){
	switch(dir[346]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_347(maze_t *mz){
	switch(dir[347]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_348(maze_t *mz){
	switch(dir[348]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_349(maze_t *mz){
	switch(dir[349]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_350(maze_t *mz){
	switch(dir[350]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_351(maze_t *mz){
	switch(dir[351]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_352(maze_t *mz){
	switch(dir[352]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_353(maze_t *mz){
	switch(dir[353]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_354(maze_t *mz){
	switch(dir[354]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_355(maze_t *mz){
	switch(dir[355]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_356(maze_t *mz){
	switch(dir[356]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_357(maze_t *mz){
	switch(dir[357]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_358(maze_t *mz){
	switch(dir[358]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_359(maze_t *mz){
	switch(dir[359]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_360(maze_t *mz){
	switch(dir[360]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_361(maze_t *mz){
	switch(dir[361]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_362(maze_t *mz){
	switch(dir[362]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_363(maze_t *mz){
	switch(dir[363]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_364(maze_t *mz){
	switch(dir[364]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_365(maze_t *mz){
	switch(dir[365]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_366(maze_t *mz){
	switch(dir[366]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_367(maze_t *mz){
	switch(dir[367]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_368(maze_t *mz){
	switch(dir[368]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_369(maze_t *mz){
	switch(dir[369]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_370(maze_t *mz){
	switch(dir[370]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_371(maze_t *mz){
	switch(dir[371]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_372(maze_t *mz){
	switch(dir[372]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_373(maze_t *mz){
	switch(dir[373]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_374(maze_t *mz){
	switch(dir[374]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_375(maze_t *mz){
	switch(dir[375]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_376(maze_t *mz){
	switch(dir[376]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_377(maze_t *mz){
	switch(dir[377]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_378(maze_t *mz){
	switch(dir[378]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_379(maze_t *mz){
	switch(dir[379]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_380(maze_t *mz){
	switch(dir[380]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_381(maze_t *mz){
	switch(dir[381]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_382(maze_t *mz){
	switch(dir[382]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_383(maze_t *mz){
	switch(dir[383]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_384(maze_t *mz){
	switch(dir[384]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_385(maze_t *mz){
	switch(dir[385]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_386(maze_t *mz){
	switch(dir[386]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_387(maze_t *mz){
	switch(dir[387]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_388(maze_t *mz){
	switch(dir[388]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_389(maze_t *mz){
	switch(dir[389]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_390(maze_t *mz){
	switch(dir[390]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_391(maze_t *mz){
	switch(dir[391]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_392(maze_t *mz){
	switch(dir[392]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_393(maze_t *mz){
	switch(dir[393]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_394(maze_t *mz){
	switch(dir[394]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_395(maze_t *mz){
	switch(dir[395]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_396(maze_t *mz){
	switch(dir[396]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_397(maze_t *mz){
	switch(dir[397]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_398(maze_t *mz){
	switch(dir[398]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_399(maze_t *mz){
	switch(dir[399]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_400(maze_t *mz){
	switch(dir[400]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_401(maze_t *mz){
	switch(dir[401]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_402(maze_t *mz){
	switch(dir[402]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_403(maze_t *mz){
	switch(dir[403]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_404(maze_t *mz){
	switch(dir[404]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_405(maze_t *mz){
	switch(dir[405]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_406(maze_t *mz){
	switch(dir[406]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_407(maze_t *mz){
	switch(dir[407]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_408(maze_t *mz){
	switch(dir[408]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_409(maze_t *mz){
	switch(dir[409]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_410(maze_t *mz){
	switch(dir[410]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_411(maze_t *mz){
	switch(dir[411]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_412(maze_t *mz){
	switch(dir[412]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_413(maze_t *mz){
	switch(dir[413]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_414(maze_t *mz){
	switch(dir[414]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_415(maze_t *mz){
	switch(dir[415]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_416(maze_t *mz){
	switch(dir[416]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_417(maze_t *mz){
	switch(dir[417]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_418(maze_t *mz){
	switch(dir[418]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_419(maze_t *mz){
	switch(dir[419]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_420(maze_t *mz){
	switch(dir[420]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_421(maze_t *mz){
	switch(dir[421]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_422(maze_t *mz){
	switch(dir[422]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_423(maze_t *mz){
	switch(dir[423]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_424(maze_t *mz){
	switch(dir[424]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_425(maze_t *mz){
	switch(dir[425]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_426(maze_t *mz){
	switch(dir[426]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_427(maze_t *mz){
	switch(dir[427]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_428(maze_t *mz){
	switch(dir[428]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_429(maze_t *mz){
	switch(dir[429]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_430(maze_t *mz){
	switch(dir[430]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_431(maze_t *mz){
	switch(dir[431]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_432(maze_t *mz){
	switch(dir[432]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_433(maze_t *mz){
	switch(dir[433]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_434(maze_t *mz){
	switch(dir[434]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_435(maze_t *mz){
	switch(dir[435]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_436(maze_t *mz){
	switch(dir[436]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_437(maze_t *mz){
	switch(dir[437]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_438(maze_t *mz){
	switch(dir[438]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_439(maze_t *mz){
	switch(dir[439]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_440(maze_t *mz){
	switch(dir[440]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_441(maze_t *mz){
	switch(dir[441]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_442(maze_t *mz){
	switch(dir[442]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_443(maze_t *mz){
	switch(dir[443]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_444(maze_t *mz){
	switch(dir[444]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_445(maze_t *mz){
	switch(dir[445]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_446(maze_t *mz){
	switch(dir[446]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_447(maze_t *mz){
	switch(dir[447]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_448(maze_t *mz){
	switch(dir[448]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_449(maze_t *mz){
	switch(dir[449]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_450(maze_t *mz){
	switch(dir[450]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_451(maze_t *mz){
	switch(dir[451]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_452(maze_t *mz){
	switch(dir[452]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_453(maze_t *mz){
	switch(dir[453]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_454(maze_t *mz){
	switch(dir[454]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_455(maze_t *mz){
	switch(dir[455]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_456(maze_t *mz){
	switch(dir[456]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_457(maze_t *mz){
	switch(dir[457]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_458(maze_t *mz){
	switch(dir[458]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_459(maze_t *mz){
	switch(dir[459]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_460(maze_t *mz){
	switch(dir[460]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_461(maze_t *mz){
	switch(dir[461]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_462(maze_t *mz){
	switch(dir[462]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_463(maze_t *mz){
	switch(dir[463]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_464(maze_t *mz){
	switch(dir[464]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_465(maze_t *mz){
	switch(dir[465]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_466(maze_t *mz){
	switch(dir[466]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_467(maze_t *mz){
	switch(dir[467]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_468(maze_t *mz){
	switch(dir[468]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_469(maze_t *mz){
	switch(dir[469]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_470(maze_t *mz){
	switch(dir[470]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_471(maze_t *mz){
	switch(dir[471]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_472(maze_t *mz){
	switch(dir[472]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_473(maze_t *mz){
	switch(dir[473]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_474(maze_t *mz){
	switch(dir[474]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_475(maze_t *mz){
	switch(dir[475]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_476(maze_t *mz){
	switch(dir[476]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_477(maze_t *mz){
	switch(dir[477]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_478(maze_t *mz){
	switch(dir[478]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_479(maze_t *mz){
	switch(dir[479]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_480(maze_t *mz){
	switch(dir[480]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_481(maze_t *mz){
	switch(dir[481]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_482(maze_t *mz){
	switch(dir[482]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_483(maze_t *mz){
	switch(dir[483]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_484(maze_t *mz){
	switch(dir[484]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_485(maze_t *mz){
	switch(dir[485]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_486(maze_t *mz){
	switch(dir[486]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_487(maze_t *mz){
	switch(dir[487]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_488(maze_t *mz){
	switch(dir[488]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_489(maze_t *mz){
	switch(dir[489]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_490(maze_t *mz){
	switch(dir[490]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_491(maze_t *mz){
	switch(dir[491]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_492(maze_t *mz){
	switch(dir[492]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_493(maze_t *mz){
	switch(dir[493]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_494(maze_t *mz){
	switch(dir[494]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_495(maze_t *mz){
	switch(dir[495]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_496(maze_t *mz){
	switch(dir[496]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_497(maze_t *mz){
	switch(dir[497]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_498(maze_t *mz){
	switch(dir[498]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_499(maze_t *mz){
	switch(dir[499]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_500(maze_t *mz){
	switch(dir[500]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_501(maze_t *mz){
	switch(dir[501]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_502(maze_t *mz){
	switch(dir[502]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_503(maze_t *mz){
	switch(dir[503]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_504(maze_t *mz){
	switch(dir[504]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_505(maze_t *mz){
	switch(dir[505]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_506(maze_t *mz){
	switch(dir[506]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_507(maze_t *mz){
	switch(dir[507]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_508(maze_t *mz){
	switch(dir[508]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_509(maze_t *mz){
	switch(dir[509]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_510(maze_t *mz){
	switch(dir[510]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_511(maze_t *mz){
	switch(dir[511]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_512(maze_t *mz){
	switch(dir[512]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_513(maze_t *mz){
	switch(dir[513]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_514(maze_t *mz){
	switch(dir[514]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_515(maze_t *mz){
	switch(dir[515]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_516(maze_t *mz){
	switch(dir[516]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_517(maze_t *mz){
	switch(dir[517]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_518(maze_t *mz){
	switch(dir[518]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_519(maze_t *mz){
	switch(dir[519]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_520(maze_t *mz){
	switch(dir[520]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_521(maze_t *mz){
	switch(dir[521]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_522(maze_t *mz){
	switch(dir[522]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_523(maze_t *mz){
	switch(dir[523]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_524(maze_t *mz){
	switch(dir[524]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_525(maze_t *mz){
	switch(dir[525]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_526(maze_t *mz){
	switch(dir[526]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_527(maze_t *mz){
	switch(dir[527]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_528(maze_t *mz){
	switch(dir[528]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_529(maze_t *mz){
	switch(dir[529]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_530(maze_t *mz){
	switch(dir[530]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_531(maze_t *mz){
	switch(dir[531]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_532(maze_t *mz){
	switch(dir[532]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_533(maze_t *mz){
	switch(dir[533]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_534(maze_t *mz){
	switch(dir[534]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_535(maze_t *mz){
	switch(dir[535]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_536(maze_t *mz){
	switch(dir[536]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_537(maze_t *mz){
	switch(dir[537]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_538(maze_t *mz){
	switch(dir[538]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_539(maze_t *mz){
	switch(dir[539]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_540(maze_t *mz){
	switch(dir[540]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_541(maze_t *mz){
	switch(dir[541]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_542(maze_t *mz){
	switch(dir[542]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_543(maze_t *mz){
	switch(dir[543]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_544(maze_t *mz){
	switch(dir[544]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_545(maze_t *mz){
	switch(dir[545]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_546(maze_t *mz){
	switch(dir[546]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_547(maze_t *mz){
	switch(dir[547]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_548(maze_t *mz){
	switch(dir[548]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_549(maze_t *mz){
	switch(dir[549]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_550(maze_t *mz){
	switch(dir[550]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_551(maze_t *mz){
	switch(dir[551]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_552(maze_t *mz){
	switch(dir[552]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_553(maze_t *mz){
	switch(dir[553]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_554(maze_t *mz){
	switch(dir[554]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_555(maze_t *mz){
	switch(dir[555]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_556(maze_t *mz){
	switch(dir[556]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_557(maze_t *mz){
	switch(dir[557]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_558(maze_t *mz){
	switch(dir[558]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_559(maze_t *mz){
	switch(dir[559]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_560(maze_t *mz){
	switch(dir[560]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_561(maze_t *mz){
	switch(dir[561]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_562(maze_t *mz){
	switch(dir[562]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_563(maze_t *mz){
	switch(dir[563]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_564(maze_t *mz){
	switch(dir[564]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_565(maze_t *mz){
	switch(dir[565]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_566(maze_t *mz){
	switch(dir[566]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_567(maze_t *mz){
	switch(dir[567]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_568(maze_t *mz){
	switch(dir[568]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_569(maze_t *mz){
	switch(dir[569]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_570(maze_t *mz){
	switch(dir[570]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_571(maze_t *mz){
	switch(dir[571]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_572(maze_t *mz){
	switch(dir[572]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_573(maze_t *mz){
	switch(dir[573]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_574(maze_t *mz){
	switch(dir[574]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_575(maze_t *mz){
	switch(dir[575]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_576(maze_t *mz){
	switch(dir[576]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_577(maze_t *mz){
	switch(dir[577]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_578(maze_t *mz){
	switch(dir[578]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_579(maze_t *mz){
	switch(dir[579]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_580(maze_t *mz){
	switch(dir[580]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_581(maze_t *mz){
	switch(dir[581]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_582(maze_t *mz){
	switch(dir[582]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_583(maze_t *mz){
	switch(dir[583]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_584(maze_t *mz){
	switch(dir[584]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_585(maze_t *mz){
	switch(dir[585]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_586(maze_t *mz){
	switch(dir[586]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_587(maze_t *mz){
	switch(dir[587]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_588(maze_t *mz){
	switch(dir[588]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_589(maze_t *mz){
	switch(dir[589]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_590(maze_t *mz){
	switch(dir[590]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_591(maze_t *mz){
	switch(dir[591]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_592(maze_t *mz){
	switch(dir[592]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_593(maze_t *mz){
	switch(dir[593]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_594(maze_t *mz){
	switch(dir[594]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_595(maze_t *mz){
	switch(dir[595]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_596(maze_t *mz){
	switch(dir[596]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_597(maze_t *mz){
	switch(dir[597]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_598(maze_t *mz){
	switch(dir[598]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_599(maze_t *mz){
	switch(dir[599]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_600(maze_t *mz){
	switch(dir[600]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_601(maze_t *mz){
	switch(dir[601]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_602(maze_t *mz){
	switch(dir[602]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_603(maze_t *mz){
	switch(dir[603]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_604(maze_t *mz){
	switch(dir[604]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_605(maze_t *mz){
	switch(dir[605]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_606(maze_t *mz){
	switch(dir[606]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_607(maze_t *mz){
	switch(dir[607]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_608(maze_t *mz){
	switch(dir[608]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_609(maze_t *mz){
	switch(dir[609]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_610(maze_t *mz){
	switch(dir[610]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_611(maze_t *mz){
	switch(dir[611]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_612(maze_t *mz){
	switch(dir[612]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_613(maze_t *mz){
	switch(dir[613]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_614(maze_t *mz){
	switch(dir[614]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_615(maze_t *mz){
	switch(dir[615]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_616(maze_t *mz){
	switch(dir[616]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_617(maze_t *mz){
	switch(dir[617]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_618(maze_t *mz){
	switch(dir[618]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_619(maze_t *mz){
	switch(dir[619]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_620(maze_t *mz){
	switch(dir[620]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_621(maze_t *mz){
	switch(dir[621]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_622(maze_t *mz){
	switch(dir[622]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_623(maze_t *mz){
	switch(dir[623]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_624(maze_t *mz){
	switch(dir[624]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_625(maze_t *mz){
	switch(dir[625]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_626(maze_t *mz){
	switch(dir[626]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_627(maze_t *mz){
	switch(dir[627]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_628(maze_t *mz){
	switch(dir[628]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_629(maze_t *mz){
	switch(dir[629]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_630(maze_t *mz){
	switch(dir[630]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_631(maze_t *mz){
	switch(dir[631]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_632(maze_t *mz){
	switch(dir[632]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_633(maze_t *mz){
	switch(dir[633]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_634(maze_t *mz){
	switch(dir[634]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_635(maze_t *mz){
	switch(dir[635]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_636(maze_t *mz){
	switch(dir[636]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_637(maze_t *mz){
	switch(dir[637]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_638(maze_t *mz){
	switch(dir[638]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_639(maze_t *mz){
	switch(dir[639]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_640(maze_t *mz){
	switch(dir[640]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_641(maze_t *mz){
	switch(dir[641]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_642(maze_t *mz){
	switch(dir[642]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_643(maze_t *mz){
	switch(dir[643]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_644(maze_t *mz){
	switch(dir[644]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_645(maze_t *mz){
	switch(dir[645]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_646(maze_t *mz){
	switch(dir[646]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_647(maze_t *mz){
	switch(dir[647]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_648(maze_t *mz){
	switch(dir[648]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_649(maze_t *mz){
	switch(dir[649]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_650(maze_t *mz){
	switch(dir[650]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_651(maze_t *mz){
	switch(dir[651]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_652(maze_t *mz){
	switch(dir[652]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_653(maze_t *mz){
	switch(dir[653]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_654(maze_t *mz){
	switch(dir[654]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_655(maze_t *mz){
	switch(dir[655]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_656(maze_t *mz){
	switch(dir[656]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_657(maze_t *mz){
	switch(dir[657]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_658(maze_t *mz){
	switch(dir[658]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_659(maze_t *mz){
	switch(dir[659]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_660(maze_t *mz){
	switch(dir[660]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_661(maze_t *mz){
	switch(dir[661]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_662(maze_t *mz){
	switch(dir[662]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_663(maze_t *mz){
	switch(dir[663]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_664(maze_t *mz){
	switch(dir[664]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_665(maze_t *mz){
	switch(dir[665]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_666(maze_t *mz){
	switch(dir[666]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_667(maze_t *mz){
	switch(dir[667]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_668(maze_t *mz){
	switch(dir[668]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_669(maze_t *mz){
	switch(dir[669]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_670(maze_t *mz){
	switch(dir[670]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_671(maze_t *mz){
	switch(dir[671]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_672(maze_t *mz){
	switch(dir[672]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_673(maze_t *mz){
	switch(dir[673]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_674(maze_t *mz){
	switch(dir[674]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_675(maze_t *mz){
	switch(dir[675]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_676(maze_t *mz){
	switch(dir[676]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_677(maze_t *mz){
	switch(dir[677]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_678(maze_t *mz){
	switch(dir[678]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_679(maze_t *mz){
	switch(dir[679]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_680(maze_t *mz){
	switch(dir[680]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_681(maze_t *mz){
	switch(dir[681]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_682(maze_t *mz){
	switch(dir[682]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_683(maze_t *mz){
	switch(dir[683]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_684(maze_t *mz){
	switch(dir[684]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_685(maze_t *mz){
	switch(dir[685]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_686(maze_t *mz){
	switch(dir[686]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_687(maze_t *mz){
	switch(dir[687]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_688(maze_t *mz){
	switch(dir[688]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_689(maze_t *mz){
	switch(dir[689]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_690(maze_t *mz){
	switch(dir[690]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_691(maze_t *mz){
	switch(dir[691]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_692(maze_t *mz){
	switch(dir[692]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_693(maze_t *mz){
	switch(dir[693]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_694(maze_t *mz){
	switch(dir[694]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_695(maze_t *mz){
	switch(dir[695]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_696(maze_t *mz){
	switch(dir[696]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_697(maze_t *mz){
	switch(dir[697]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_698(maze_t *mz){
	switch(dir[698]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_699(maze_t *mz){
	switch(dir[699]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_700(maze_t *mz){
	switch(dir[700]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_701(maze_t *mz){
	switch(dir[701]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_702(maze_t *mz){
	switch(dir[702]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_703(maze_t *mz){
	switch(dir[703]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_704(maze_t *mz){
	switch(dir[704]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_705(maze_t *mz){
	switch(dir[705]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_706(maze_t *mz){
	switch(dir[706]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_707(maze_t *mz){
	switch(dir[707]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_708(maze_t *mz){
	switch(dir[708]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_709(maze_t *mz){
	switch(dir[709]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_710(maze_t *mz){
	switch(dir[710]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_711(maze_t *mz){
	switch(dir[711]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_712(maze_t *mz){
	switch(dir[712]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_713(maze_t *mz){
	switch(dir[713]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_714(maze_t *mz){
	switch(dir[714]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_715(maze_t *mz){
	switch(dir[715]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_716(maze_t *mz){
	switch(dir[716]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_717(maze_t *mz){
	switch(dir[717]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_718(maze_t *mz){
	switch(dir[718]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_719(maze_t *mz){
	switch(dir[719]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_720(maze_t *mz){
	switch(dir[720]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_721(maze_t *mz){
	switch(dir[721]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_722(maze_t *mz){
	switch(dir[722]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_723(maze_t *mz){
	switch(dir[723]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_724(maze_t *mz){
	switch(dir[724]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_725(maze_t *mz){
	switch(dir[725]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_726(maze_t *mz){
	switch(dir[726]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_727(maze_t *mz){
	switch(dir[727]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_728(maze_t *mz){
	switch(dir[728]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_729(maze_t *mz){
	switch(dir[729]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_730(maze_t *mz){
	switch(dir[730]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_731(maze_t *mz){
	switch(dir[731]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_732(maze_t *mz){
	switch(dir[732]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_733(maze_t *mz){
	switch(dir[733]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_734(maze_t *mz){
	switch(dir[734]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_735(maze_t *mz){
	switch(dir[735]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_736(maze_t *mz){
	switch(dir[736]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_737(maze_t *mz){
	switch(dir[737]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_738(maze_t *mz){
	switch(dir[738]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_739(maze_t *mz){
	switch(dir[739]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_740(maze_t *mz){
	switch(dir[740]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_741(maze_t *mz){
	switch(dir[741]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_742(maze_t *mz){
	switch(dir[742]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_743(maze_t *mz){
	switch(dir[743]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_744(maze_t *mz){
	switch(dir[744]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_745(maze_t *mz){
	switch(dir[745]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_746(maze_t *mz){
	switch(dir[746]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_747(maze_t *mz){
	switch(dir[747]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_748(maze_t *mz){
	switch(dir[748]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_749(maze_t *mz){
	switch(dir[749]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_750(maze_t *mz){
	switch(dir[750]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_751(maze_t *mz){
	switch(dir[751]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_752(maze_t *mz){
	switch(dir[752]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_753(maze_t *mz){
	switch(dir[753]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_754(maze_t *mz){
	switch(dir[754]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_755(maze_t *mz){
	switch(dir[755]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_756(maze_t *mz){
	switch(dir[756]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_757(maze_t *mz){
	switch(dir[757]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_758(maze_t *mz){
	switch(dir[758]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_759(maze_t *mz){
	switch(dir[759]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_760(maze_t *mz){
	switch(dir[760]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_761(maze_t *mz){
	switch(dir[761]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_762(maze_t *mz){
	switch(dir[762]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_763(maze_t *mz){
	switch(dir[763]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_764(maze_t *mz){
	switch(dir[764]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_765(maze_t *mz){
	switch(dir[765]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_766(maze_t *mz){
	switch(dir[766]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_767(maze_t *mz){
	switch(dir[767]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_768(maze_t *mz){
	switch(dir[768]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_769(maze_t *mz){
	switch(dir[769]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_770(maze_t *mz){
	switch(dir[770]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_771(maze_t *mz){
	switch(dir[771]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_772(maze_t *mz){
	switch(dir[772]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_773(maze_t *mz){
	switch(dir[773]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_774(maze_t *mz){
	switch(dir[774]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_775(maze_t *mz){
	switch(dir[775]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_776(maze_t *mz){
	switch(dir[776]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_777(maze_t *mz){
	switch(dir[777]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_778(maze_t *mz){
	switch(dir[778]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_779(maze_t *mz){
	switch(dir[779]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_780(maze_t *mz){
	switch(dir[780]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_781(maze_t *mz){
	switch(dir[781]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_782(maze_t *mz){
	switch(dir[782]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_783(maze_t *mz){
	switch(dir[783]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_784(maze_t *mz){
	switch(dir[784]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_785(maze_t *mz){
	switch(dir[785]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_786(maze_t *mz){
	switch(dir[786]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_787(maze_t *mz){
	switch(dir[787]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_788(maze_t *mz){
	switch(dir[788]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_789(maze_t *mz){
	switch(dir[789]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_790(maze_t *mz){
	switch(dir[790]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_791(maze_t *mz){
	switch(dir[791]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_792(maze_t *mz){
	switch(dir[792]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_793(maze_t *mz){
	switch(dir[793]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_794(maze_t *mz){
	switch(dir[794]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_795(maze_t *mz){
	switch(dir[795]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_796(maze_t *mz){
	switch(dir[796]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_797(maze_t *mz){
	switch(dir[797]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_798(maze_t *mz){
	switch(dir[798]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_799(maze_t *mz){
	switch(dir[799]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_800(maze_t *mz){
	switch(dir[800]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_801(maze_t *mz){
	switch(dir[801]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_802(maze_t *mz){
	switch(dir[802]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_803(maze_t *mz){
	switch(dir[803]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_804(maze_t *mz){
	switch(dir[804]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_805(maze_t *mz){
	switch(dir[805]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_806(maze_t *mz){
	switch(dir[806]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_807(maze_t *mz){
	switch(dir[807]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_808(maze_t *mz){
	switch(dir[808]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_809(maze_t *mz){
	switch(dir[809]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_810(maze_t *mz){
	switch(dir[810]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_811(maze_t *mz){
	switch(dir[811]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_812(maze_t *mz){
	switch(dir[812]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_813(maze_t *mz){
	switch(dir[813]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_814(maze_t *mz){
	switch(dir[814]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_815(maze_t *mz){
	switch(dir[815]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_816(maze_t *mz){
	switch(dir[816]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_817(maze_t *mz){
	switch(dir[817]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_818(maze_t *mz){
	switch(dir[818]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_819(maze_t *mz){
	switch(dir[819]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_820(maze_t *mz){
	switch(dir[820]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_821(maze_t *mz){
	switch(dir[821]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_822(maze_t *mz){
	switch(dir[822]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_823(maze_t *mz){
	switch(dir[823]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_824(maze_t *mz){
	switch(dir[824]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_825(maze_t *mz){
	switch(dir[825]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_826(maze_t *mz){
	switch(dir[826]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_827(maze_t *mz){
	switch(dir[827]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_828(maze_t *mz){
	switch(dir[828]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_829(maze_t *mz){
	switch(dir[829]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_830(maze_t *mz){
	switch(dir[830]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_831(maze_t *mz){
	switch(dir[831]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_832(maze_t *mz){
	switch(dir[832]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_833(maze_t *mz){
	switch(dir[833]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_834(maze_t *mz){
	switch(dir[834]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_835(maze_t *mz){
	switch(dir[835]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_836(maze_t *mz){
	switch(dir[836]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_837(maze_t *mz){
	switch(dir[837]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_838(maze_t *mz){
	switch(dir[838]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_839(maze_t *mz){
	switch(dir[839]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_840(maze_t *mz){
	switch(dir[840]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_841(maze_t *mz){
	switch(dir[841]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_842(maze_t *mz){
	switch(dir[842]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_843(maze_t *mz){
	switch(dir[843]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_844(maze_t *mz){
	switch(dir[844]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_845(maze_t *mz){
	switch(dir[845]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_846(maze_t *mz){
	switch(dir[846]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_847(maze_t *mz){
	switch(dir[847]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_848(maze_t *mz){
	switch(dir[848]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_849(maze_t *mz){
	switch(dir[849]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_850(maze_t *mz){
	switch(dir[850]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_851(maze_t *mz){
	switch(dir[851]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_852(maze_t *mz){
	switch(dir[852]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_853(maze_t *mz){
	switch(dir[853]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_854(maze_t *mz){
	switch(dir[854]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_855(maze_t *mz){
	switch(dir[855]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_856(maze_t *mz){
	switch(dir[856]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_857(maze_t *mz){
	switch(dir[857]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_858(maze_t *mz){
	switch(dir[858]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_859(maze_t *mz){
	switch(dir[859]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_860(maze_t *mz){
	switch(dir[860]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_861(maze_t *mz){
	switch(dir[861]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_862(maze_t *mz){
	switch(dir[862]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_863(maze_t *mz){
	switch(dir[863]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_864(maze_t *mz){
	switch(dir[864]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_865(maze_t *mz){
	switch(dir[865]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_866(maze_t *mz){
	switch(dir[866]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_867(maze_t *mz){
	switch(dir[867]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_868(maze_t *mz){
	switch(dir[868]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_869(maze_t *mz){
	switch(dir[869]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_870(maze_t *mz){
	switch(dir[870]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_871(maze_t *mz){
	switch(dir[871]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_872(maze_t *mz){
	switch(dir[872]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_873(maze_t *mz){
	switch(dir[873]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_874(maze_t *mz){
	switch(dir[874]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_875(maze_t *mz){
	switch(dir[875]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_876(maze_t *mz){
	switch(dir[876]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_877(maze_t *mz){
	switch(dir[877]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_878(maze_t *mz){
	switch(dir[878]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_879(maze_t *mz){
	switch(dir[879]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_880(maze_t *mz){
	switch(dir[880]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_881(maze_t *mz){
	switch(dir[881]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_882(maze_t *mz){
	switch(dir[882]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_883(maze_t *mz){
	switch(dir[883]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_884(maze_t *mz){
	switch(dir[884]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_885(maze_t *mz){
	switch(dir[885]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_886(maze_t *mz){
	switch(dir[886]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_887(maze_t *mz){
	switch(dir[887]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_888(maze_t *mz){
	switch(dir[888]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_889(maze_t *mz){
	switch(dir[889]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_890(maze_t *mz){
	switch(dir[890]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_891(maze_t *mz){
	switch(dir[891]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_892(maze_t *mz){
	switch(dir[892]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_893(maze_t *mz){
	switch(dir[893]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_894(maze_t *mz){
	switch(dir[894]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_895(maze_t *mz){
	switch(dir[895]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_896(maze_t *mz){
	switch(dir[896]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_897(maze_t *mz){
	switch(dir[897]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_898(maze_t *mz){
	switch(dir[898]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_899(maze_t *mz){
	switch(dir[899]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_900(maze_t *mz){
	switch(dir[900]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_901(maze_t *mz){
	switch(dir[901]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_902(maze_t *mz){
	switch(dir[902]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_903(maze_t *mz){
	switch(dir[903]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_904(maze_t *mz){
	switch(dir[904]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_905(maze_t *mz){
	switch(dir[905]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_906(maze_t *mz){
	switch(dir[906]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_907(maze_t *mz){
	switch(dir[907]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_908(maze_t *mz){
	switch(dir[908]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_909(maze_t *mz){
	switch(dir[909]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_910(maze_t *mz){
	switch(dir[910]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_911(maze_t *mz){
	switch(dir[911]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_912(maze_t *mz){
	switch(dir[912]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_913(maze_t *mz){
	switch(dir[913]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_914(maze_t *mz){
	switch(dir[914]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_915(maze_t *mz){
	switch(dir[915]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_916(maze_t *mz){
	switch(dir[916]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_917(maze_t *mz){
	switch(dir[917]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_918(maze_t *mz){
	switch(dir[918]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_919(maze_t *mz){
	switch(dir[919]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_920(maze_t *mz){
	switch(dir[920]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_921(maze_t *mz){
	switch(dir[921]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_922(maze_t *mz){
	switch(dir[922]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_923(maze_t *mz){
	switch(dir[923]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_924(maze_t *mz){
	switch(dir[924]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_925(maze_t *mz){
	switch(dir[925]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_926(maze_t *mz){
	switch(dir[926]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_927(maze_t *mz){
	switch(dir[927]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_928(maze_t *mz){
	switch(dir[928]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_929(maze_t *mz){
	switch(dir[929]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_930(maze_t *mz){
	switch(dir[930]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_931(maze_t *mz){
	switch(dir[931]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_932(maze_t *mz){
	switch(dir[932]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_933(maze_t *mz){
	switch(dir[933]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_934(maze_t *mz){
	switch(dir[934]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_935(maze_t *mz){
	switch(dir[935]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_936(maze_t *mz){
	switch(dir[936]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_937(maze_t *mz){
	switch(dir[937]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_938(maze_t *mz){
	switch(dir[938]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_939(maze_t *mz){
	switch(dir[939]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_940(maze_t *mz){
	switch(dir[940]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_941(maze_t *mz){
	switch(dir[941]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_942(maze_t *mz){
	switch(dir[942]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_943(maze_t *mz){
	switch(dir[943]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_944(maze_t *mz){
	switch(dir[944]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_945(maze_t *mz){
	switch(dir[945]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_946(maze_t *mz){
	switch(dir[946]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_947(maze_t *mz){
	switch(dir[947]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_948(maze_t *mz){
	switch(dir[948]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_949(maze_t *mz){
	switch(dir[949]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_950(maze_t *mz){
	switch(dir[950]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_951(maze_t *mz){
	switch(dir[951]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_952(maze_t *mz){
	switch(dir[952]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_953(maze_t *mz){
	switch(dir[953]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_954(maze_t *mz){
	switch(dir[954]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_955(maze_t *mz){
	switch(dir[955]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_956(maze_t *mz){
	switch(dir[956]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_957(maze_t *mz){
	switch(dir[957]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_958(maze_t *mz){
	switch(dir[958]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_959(maze_t *mz){
	switch(dir[959]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_960(maze_t *mz){
	switch(dir[960]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_961(maze_t *mz){
	switch(dir[961]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_962(maze_t *mz){
	switch(dir[962]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_963(maze_t *mz){
	switch(dir[963]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_964(maze_t *mz){
	switch(dir[964]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_965(maze_t *mz){
	switch(dir[965]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_966(maze_t *mz){
	switch(dir[966]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_967(maze_t *mz){
	switch(dir[967]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_968(maze_t *mz){
	switch(dir[968]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_969(maze_t *mz){
	switch(dir[969]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_970(maze_t *mz){
	switch(dir[970]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_971(maze_t *mz){
	switch(dir[971]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_972(maze_t *mz){
	switch(dir[972]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_973(maze_t *mz){
	switch(dir[973]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_974(maze_t *mz){
	switch(dir[974]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_975(maze_t *mz){
	switch(dir[975]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_976(maze_t *mz){
	switch(dir[976]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_977(maze_t *mz){
	switch(dir[977]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_978(maze_t *mz){
	switch(dir[978]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_979(maze_t *mz){
	switch(dir[979]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_980(maze_t *mz){
	switch(dir[980]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_981(maze_t *mz){
	switch(dir[981]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_982(maze_t *mz){
	switch(dir[982]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_983(maze_t *mz){
	switch(dir[983]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_984(maze_t *mz){
	switch(dir[984]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_985(maze_t *mz){
	switch(dir[985]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_986(maze_t *mz){
	switch(dir[986]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_987(maze_t *mz){
	switch(dir[987]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_988(maze_t *mz){
	switch(dir[988]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_989(maze_t *mz){
	switch(dir[989]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_990(maze_t *mz){
	switch(dir[990]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_991(maze_t *mz){
	switch(dir[991]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_992(maze_t *mz){
	switch(dir[992]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_993(maze_t *mz){
	switch(dir[993]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_994(maze_t *mz){
	switch(dir[994]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_995(maze_t *mz){
	switch(dir[995]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_996(maze_t *mz){
	switch(dir[996]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_997(maze_t *mz){
	switch(dir[997]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_998(maze_t *mz){
	switch(dir[998]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_999(maze_t *mz){
	switch(dir[999]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1000(maze_t *mz){
	switch(dir[1000]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1001(maze_t *mz){
	switch(dir[1001]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1002(maze_t *mz){
	switch(dir[1002]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1003(maze_t *mz){
	switch(dir[1003]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1004(maze_t *mz){
	switch(dir[1004]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1005(maze_t *mz){
	switch(dir[1005]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1006(maze_t *mz){
	switch(dir[1006]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1007(maze_t *mz){
	switch(dir[1007]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1008(maze_t *mz){
	switch(dir[1008]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1009(maze_t *mz){
	switch(dir[1009]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1010(maze_t *mz){
	switch(dir[1010]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1011(maze_t *mz){
	switch(dir[1011]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1012(maze_t *mz){
	switch(dir[1012]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1013(maze_t *mz){
	switch(dir[1013]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1014(maze_t *mz){
	switch(dir[1014]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1015(maze_t *mz){
	switch(dir[1015]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1016(maze_t *mz){
	switch(dir[1016]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1017(maze_t *mz){
	switch(dir[1017]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1018(maze_t *mz){
	switch(dir[1018]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1019(maze_t *mz){
	switch(dir[1019]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1020(maze_t *mz){
	switch(dir[1020]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1021(maze_t *mz){
	switch(dir[1021]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1022(maze_t *mz){
	switch(dir[1022]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1023(maze_t *mz){
	switch(dir[1023]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1024(maze_t *mz){
	switch(dir[1024]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1025(maze_t *mz){
	switch(dir[1025]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1026(maze_t *mz){
	switch(dir[1026]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1027(maze_t *mz){
	switch(dir[1027]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1028(maze_t *mz){
	switch(dir[1028]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1029(maze_t *mz){
	switch(dir[1029]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1030(maze_t *mz){
	switch(dir[1030]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1031(maze_t *mz){
	switch(dir[1031]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1032(maze_t *mz){
	switch(dir[1032]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1033(maze_t *mz){
	switch(dir[1033]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1034(maze_t *mz){
	switch(dir[1034]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1035(maze_t *mz){
	switch(dir[1035]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1036(maze_t *mz){
	switch(dir[1036]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1037(maze_t *mz){
	switch(dir[1037]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1038(maze_t *mz){
	switch(dir[1038]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1039(maze_t *mz){
	switch(dir[1039]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1040(maze_t *mz){
	switch(dir[1040]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1041(maze_t *mz){
	switch(dir[1041]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1042(maze_t *mz){
	switch(dir[1042]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1043(maze_t *mz){
	switch(dir[1043]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1044(maze_t *mz){
	switch(dir[1044]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1045(maze_t *mz){
	switch(dir[1045]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1046(maze_t *mz){
	switch(dir[1046]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1047(maze_t *mz){
	switch(dir[1047]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1048(maze_t *mz){
	switch(dir[1048]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1049(maze_t *mz){
	switch(dir[1049]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1050(maze_t *mz){
	switch(dir[1050]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1051(maze_t *mz){
	switch(dir[1051]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1052(maze_t *mz){
	switch(dir[1052]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1053(maze_t *mz){
	switch(dir[1053]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1054(maze_t *mz){
	switch(dir[1054]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1055(maze_t *mz){
	switch(dir[1055]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1056(maze_t *mz){
	switch(dir[1056]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1057(maze_t *mz){
	switch(dir[1057]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1058(maze_t *mz){
	switch(dir[1058]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1059(maze_t *mz){
	switch(dir[1059]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1060(maze_t *mz){
	switch(dir[1060]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1061(maze_t *mz){
	switch(dir[1061]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1062(maze_t *mz){
	switch(dir[1062]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1063(maze_t *mz){
	switch(dir[1063]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1064(maze_t *mz){
	switch(dir[1064]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1065(maze_t *mz){
	switch(dir[1065]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1066(maze_t *mz){
	switch(dir[1066]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1067(maze_t *mz){
	switch(dir[1067]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1068(maze_t *mz){
	switch(dir[1068]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1069(maze_t *mz){
	switch(dir[1069]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1070(maze_t *mz){
	switch(dir[1070]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1071(maze_t *mz){
	switch(dir[1071]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1072(maze_t *mz){
	switch(dir[1072]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1073(maze_t *mz){
	switch(dir[1073]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1074(maze_t *mz){
	switch(dir[1074]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1075(maze_t *mz){
	switch(dir[1075]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1076(maze_t *mz){
	switch(dir[1076]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1077(maze_t *mz){
	switch(dir[1077]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1078(maze_t *mz){
	switch(dir[1078]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1079(maze_t *mz){
	switch(dir[1079]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1080(maze_t *mz){
	switch(dir[1080]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1081(maze_t *mz){
	switch(dir[1081]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1082(maze_t *mz){
	switch(dir[1082]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1083(maze_t *mz){
	switch(dir[1083]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1084(maze_t *mz){
	switch(dir[1084]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1085(maze_t *mz){
	switch(dir[1085]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1086(maze_t *mz){
	switch(dir[1086]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1087(maze_t *mz){
	switch(dir[1087]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1088(maze_t *mz){
	switch(dir[1088]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1089(maze_t *mz){
	switch(dir[1089]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1090(maze_t *mz){
	switch(dir[1090]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1091(maze_t *mz){
	switch(dir[1091]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1092(maze_t *mz){
	switch(dir[1092]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1093(maze_t *mz){
	switch(dir[1093]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1094(maze_t *mz){
	switch(dir[1094]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1095(maze_t *mz){
	switch(dir[1095]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1096(maze_t *mz){
	switch(dir[1096]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1097(maze_t *mz){
	switch(dir[1097]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1098(maze_t *mz){
	switch(dir[1098]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1099(maze_t *mz){
	switch(dir[1099]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1100(maze_t *mz){
	switch(dir[1100]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1101(maze_t *mz){
	switch(dir[1101]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1102(maze_t *mz){
	switch(dir[1102]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1103(maze_t *mz){
	switch(dir[1103]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1104(maze_t *mz){
	switch(dir[1104]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1105(maze_t *mz){
	switch(dir[1105]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1106(maze_t *mz){
	switch(dir[1106]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1107(maze_t *mz){
	switch(dir[1107]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1108(maze_t *mz){
	switch(dir[1108]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1109(maze_t *mz){
	switch(dir[1109]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1110(maze_t *mz){
	switch(dir[1110]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1111(maze_t *mz){
	switch(dir[1111]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1112(maze_t *mz){
	switch(dir[1112]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1113(maze_t *mz){
	switch(dir[1113]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1114(maze_t *mz){
	switch(dir[1114]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1115(maze_t *mz){
	switch(dir[1115]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1116(maze_t *mz){
	switch(dir[1116]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1117(maze_t *mz){
	switch(dir[1117]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1118(maze_t *mz){
	switch(dir[1118]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1119(maze_t *mz){
	switch(dir[1119]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1120(maze_t *mz){
	switch(dir[1120]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1121(maze_t *mz){
	switch(dir[1121]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1122(maze_t *mz){
	switch(dir[1122]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1123(maze_t *mz){
	switch(dir[1123]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1124(maze_t *mz){
	switch(dir[1124]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1125(maze_t *mz){
	switch(dir[1125]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1126(maze_t *mz){
	switch(dir[1126]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1127(maze_t *mz){
	switch(dir[1127]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1128(maze_t *mz){
	switch(dir[1128]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1129(maze_t *mz){
	switch(dir[1129]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1130(maze_t *mz){
	switch(dir[1130]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1131(maze_t *mz){
	switch(dir[1131]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1132(maze_t *mz){
	switch(dir[1132]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1133(maze_t *mz){
	switch(dir[1133]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1134(maze_t *mz){
	switch(dir[1134]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1135(maze_t *mz){
	switch(dir[1135]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1136(maze_t *mz){
	switch(dir[1136]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1137(maze_t *mz){
	switch(dir[1137]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1138(maze_t *mz){
	switch(dir[1138]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1139(maze_t *mz){
	switch(dir[1139]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1140(maze_t *mz){
	switch(dir[1140]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1141(maze_t *mz){
	switch(dir[1141]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1142(maze_t *mz){
	switch(dir[1142]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1143(maze_t *mz){
	switch(dir[1143]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1144(maze_t *mz){
	switch(dir[1144]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1145(maze_t *mz){
	switch(dir[1145]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1146(maze_t *mz){
	switch(dir[1146]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1147(maze_t *mz){
	switch(dir[1147]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1148(maze_t *mz){
	switch(dir[1148]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1149(maze_t *mz){
	switch(dir[1149]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1150(maze_t *mz){
	switch(dir[1150]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1151(maze_t *mz){
	switch(dir[1151]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1152(maze_t *mz){
	switch(dir[1152]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1153(maze_t *mz){
	switch(dir[1153]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1154(maze_t *mz){
	switch(dir[1154]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1155(maze_t *mz){
	switch(dir[1155]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1156(maze_t *mz){
	switch(dir[1156]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1157(maze_t *mz){
	switch(dir[1157]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1158(maze_t *mz){
	switch(dir[1158]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1159(maze_t *mz){
	switch(dir[1159]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1160(maze_t *mz){
	switch(dir[1160]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1161(maze_t *mz){
	switch(dir[1161]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1162(maze_t *mz){
	switch(dir[1162]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1163(maze_t *mz){
	switch(dir[1163]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1164(maze_t *mz){
	switch(dir[1164]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1165(maze_t *mz){
	switch(dir[1165]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1166(maze_t *mz){
	switch(dir[1166]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1167(maze_t *mz){
	switch(dir[1167]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1168(maze_t *mz){
	switch(dir[1168]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1169(maze_t *mz){
	switch(dir[1169]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1170(maze_t *mz){
	switch(dir[1170]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1171(maze_t *mz){
	switch(dir[1171]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1172(maze_t *mz){
	switch(dir[1172]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1173(maze_t *mz){
	switch(dir[1173]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1174(maze_t *mz){
	switch(dir[1174]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1175(maze_t *mz){
	switch(dir[1175]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1176(maze_t *mz){
	switch(dir[1176]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1177(maze_t *mz){
	switch(dir[1177]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1178(maze_t *mz){
	switch(dir[1178]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1179(maze_t *mz){
	switch(dir[1179]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1180(maze_t *mz){
	switch(dir[1180]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1181(maze_t *mz){
	switch(dir[1181]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1182(maze_t *mz){
	switch(dir[1182]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1183(maze_t *mz){
	switch(dir[1183]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1184(maze_t *mz){
	switch(dir[1184]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1185(maze_t *mz){
	switch(dir[1185]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1186(maze_t *mz){
	switch(dir[1186]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1187(maze_t *mz){
	switch(dir[1187]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1188(maze_t *mz){
	switch(dir[1188]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1189(maze_t *mz){
	switch(dir[1189]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1190(maze_t *mz){
	switch(dir[1190]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1191(maze_t *mz){
	switch(dir[1191]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1192(maze_t *mz){
	switch(dir[1192]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1193(maze_t *mz){
	switch(dir[1193]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1194(maze_t *mz){
	switch(dir[1194]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1195(maze_t *mz){
	switch(dir[1195]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1196(maze_t *mz){
	switch(dir[1196]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1197(maze_t *mz){
	switch(dir[1197]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1198(maze_t *mz){
	switch(dir[1198]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1199(maze_t *mz){
	switch(dir[1199]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}
void move_1200(maze_t *mz){
	switch(dir[1200]) {	case 1: move_up(mz); break;	case 2: move_down(mz); break;	case 3: move_left(mz); break;	case 4: move_right(mz);  break;	default: break;}
}







// #define MOVE(n)	void move_##n(maze_t *mz) { printf("\nBingo!\n"); exit(0);}


int visit(maze_t *mz, int sx, int sy, int ex, int ey, int dir_) {
// mz->sx, mz->sy
// 1 up
// 2 down
// 3 left
// 4 right
    
    if(!mz->blk[sy][sx]) {
         mz->blk[sy][sx] = dir_;
         dir[step++] = dir_;
         if(!mz->blk[ey][ex] && 
            !(visit(mz, sx, sy+1, ex, ey, 2) || 
              visit(mz, sx+1, sy, ex, ey, 4) ||
              visit(mz, sx, sy-1, ex, ey, 1) || 
              visit(mz, sx-1, sy, ex, ey, 3))) {
                step--;
                mz->blk[sy][sx] = 0;
                // printf("END\n");
         }
        //  step++;
    }

    return mz->blk[ey][ex];
}



maze_t *
maze_load(const char *fn) {
	maze_t *mz = NULL;
	FILE *fp = NULL;
	int i, j, k;
	//
	if((fp = fopen(fn, "rt")) == NULL) {
		fprintf(stderr, "MAZE: fopen failed - %s.\n", strerror(errno));
		return NULL;
	}
	if((mz = (maze_t*) malloc(sizeof(maze_t))) == NULL) {
		fprintf(stderr, "MAZE: alloc failed - %s.\n", strerror(errno));
		goto err_quit;
	}
	if(fscanf(fp, "%d %d %d %d %d %d", &mz->w, &mz->h, &mz->sx, &mz->sy, &mz->ex, &mz->ey) != 6) {
		fprintf(stderr, "MAZE: load dimensions failed - %s.\n", strerror(errno));
		goto err_quit;
	}
	mz->cx = mz->sx;
	mz->cy = mz->sy;
	for(i = 0; i < mz->h; i++) {
		for(j = 0; j < mz->w; j++) {
			if(fscanf(fp, "%d", &k) != 1) {
				fprintf(stderr, "MAZE: load blk (%d, %d) failed - %s.\n", j, i, strerror(errno));
				goto err_quit;
			}
			mz->blk[i][j] = k<<20;
		}
	}
	fclose(fp);
	fprintf(stderr, "MAZE: loaded [%d, %d]: (%d, %d) -> (%d, %d)\n",
		mz->w, mz->h, mz->sx, mz->sy, mz->ex, mz->ey);

    visit(mz,mz->sx, mz->sy, mz->ex, mz->ey, 0);
    for(i = 0; i < mz->h; i++) {
		for(j = 0; j < mz->w; j++) {
            // if(mz->blk[i][j] > 0 && mz->blk[i][j] < 5)  {
            //     mz->blk[i][j] = 0;
            // }
            if(mz->blk[i][j] > 5)  printf("# ");
            else if(mz->blk[i][j] > 0)  {
                printf("0 ");
                // printf("%d ", mz->blk[i][j]);
                mz->blk[i][j] = 0;
            }
            else printf("%d ", mz->blk[i][j]);
		}
        printf("\n");
	}
    printf("%d\n",step);
    int dx = 1, dy = 1;

    for(int i = 1; i< step ; i++){
        // if(i%13 == 0) printf("\n");
        // printf("%d ",dir[i]);
        switch(dir[i]) {
			case 1: dy--; break;
			case 2: dy++; break;
			case 3: dx--; break;
			case 4: dx++;  break;
			default: break;
        }
    }
    printf("%d %d\n",dx,dy);
    

	return mz;
err_quit:
	if(mz) free(mz);
	if(fp) fclose(fp);
	return NULL;
}

