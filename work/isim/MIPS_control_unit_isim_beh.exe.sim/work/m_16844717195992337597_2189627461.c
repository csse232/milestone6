/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/griseous/Documents/csse232/Milestone6/Control.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {3U, 0U};
static const char *ng7 = "%d not implemented";
static const char *ng8 = "The current state is %d";
static const char *ng9 = "The opcode is %d";
static unsigned int ng10[] = {12U, 0U};
static const char *ng11 = "I/O, funk is %d";
static const char *ng12 = "The next state is %s";
static int ng13[] = {26990, 0};
static int ng14[] = {7304564, 0};
static const char *ng15 = "The next state is Other";
static const char *ng16 = "The next state is RType";
static const char *ng17 = "The next state is LWSW";
static const char *ng18 = "The next state is imm";
static unsigned int ng19[] = {4U, 0U};
static unsigned int ng20[] = {5U, 0U};
static unsigned int ng21[] = {10U, 0U};
static const char *ng22 = "The next state is Jal1";
static unsigned int ng23[] = {11U, 0U};
static const char *ng24 = "The next state is jr";
static unsigned int ng25[] = {9U, 0U};
static unsigned int ng26[] = {7U, 0U};
static const char *ng27 = "The next state is brancheq";
static unsigned int ng28[] = {8U, 0U};
static const char *ng29 = "The next state is branchne";
static const char *ng30 = " Wrong Opcode %d ";
static const char *ng31 = "In Other, the next_state is %d";
static const char *ng32 = "In Rtype, the next_state is %d";
static const char *ng33 = "In R_Write, the next_state is %d";
static const char *ng34 = "In LWSW, the opcode is %d";
static const char *ng35 = "In LW1, the next_state is %d";
static const char *ng36 = "In LW2, the next_state is %d";
static const char *ng37 = "In SW, the next_state is %d";
static const char *ng38 = "In Imm, the next_state is %d";
static const char *ng39 = "In Imm2, the next_state is %d";
static const char *ng40 = "In Jal1, the next_state is %d";
static const char *ng41 = "In Jal2, the next_state is %d";
static const char *ng42 = "In jr, the next_state is %d";
static const char *ng43 = "In Jump, the next_state is %d";
static const char *ng44 = "In Brancheq, the next_state is %d";
static const char *ng45 = "In Branchne, the next_state is %d";
static const char *ng46 = "In \"In\", the next_state is %d";
static const char *ng47 = "In \"out\", the next_state is %d";
static const char *ng48 = " Not implemented!";
static const char *ng49 = "After the tests, the next_state is %d";



static void Initial_90_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(90, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);

LAB1:    return;
}

static void Always_93_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 7776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 8592);
    *((int *)t2) = 1;
    t3 = (t0 + 7808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);

LAB5:    xsi_set_current_line(98, ng0);
    t4 = (t0 + 6616);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 6456);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB2;

}

static void Always_103_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;

LAB0:    t1 = (t0 + 8024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 8608);
    *((int *)t2) = 1;
    t3 = (t0 + 8056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(104, ng0);

LAB5:    xsi_set_current_line(106, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 5176);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 6456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 32);
    if (t7 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t7 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t7 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t7 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t7 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t7 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t7 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t7 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t7 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t7 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t7 == 1)
        goto LAB27;

LAB28:    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t7 == 1)
        goto LAB29;

LAB30:    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t7 == 1)
        goto LAB31;

LAB32:    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t7 == 1)
        goto LAB33;

LAB34:    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t7 == 1)
        goto LAB35;

LAB36:    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t7 == 1)
        goto LAB37;

LAB38:    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t7 == 1)
        goto LAB39;

LAB40:    t2 = (t0 + 2784);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t7 == 1)
        goto LAB41;

LAB42:
LAB44:
LAB43:    xsi_set_current_line(258, ng0);

LAB64:    xsi_set_current_line(258, ng0);
    t2 = (t0 + 6456);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t0, (char)118, t5, 5);

LAB45:    goto LAB2;

LAB7:    xsi_set_current_line(117, ng0);

LAB46:    xsi_set_current_line(121, ng0);
    t5 = ((char*)((ng2)));
    t8 = (t0 + 5976);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB45;

LAB9:    xsi_set_current_line(134, ng0);

LAB47:    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4696);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB45;

LAB11:    xsi_set_current_line(146, ng0);

LAB48:    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4696);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 3496U);
    t3 = *((char **)t2);
    t2 = (t0 + 4216);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB45;

LAB13:    xsi_set_current_line(152, ng0);

LAB49:    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5176);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB45;

LAB15:    xsi_set_current_line(158, ng0);

LAB50:    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4696);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB45;

LAB17:    xsi_set_current_line(164, ng0);

LAB51:    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5496);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB45;

LAB19:    xsi_set_current_line(169, ng0);

LAB52:    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5336);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB45;

LAB21:    xsi_set_current_line(174, ng0);

LAB53:    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5176);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB45;

LAB23:    xsi_set_current_line(180, ng0);

LAB54:    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4696);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB45;

LAB25:    xsi_set_current_line(193, ng0);

LAB55:    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5176);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB45;

LAB27:    xsi_set_current_line(199, ng0);

LAB56:    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 4696);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB45;

LAB29:    xsi_set_current_line(205, ng0);

LAB57:    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5176);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB45;

LAB31:    xsi_set_current_line(214, ng0);

LAB58:    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4696);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(216, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB45;

LAB33:    xsi_set_current_line(223, ng0);

LAB59:    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5816);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB45;

LAB35:    xsi_set_current_line(228, ng0);

LAB60:    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4696);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB45;

LAB37:    xsi_set_current_line(237, ng0);

LAB61:    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4696);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(240, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(241, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(242, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(243, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB45;

LAB39:    xsi_set_current_line(247, ng0);

LAB62:    xsi_set_current_line(248, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5176);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(250, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB45;

LAB41:    xsi_set_current_line(253, ng0);

LAB63:    xsi_set_current_line(254, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 6136);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB45;

}

static void Always_264_3(char *t0)
{
    char t9[8];
    char t10[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 8272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(264, ng0);
    t2 = (t0 + 8624);
    *((int *)t2) = 1;
    t3 = (t0 + 8304);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(265, ng0);

LAB5:    xsi_set_current_line(267, ng0);
    t4 = (t0 + 6456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng8, 2, t0, (char)118, t6, 5);
    xsi_set_current_line(269, ng0);
    t2 = (t0 + 6456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 32);
    if (t7 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t5 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t5, 32);
    if (t7 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 744);
    t6 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 32);
    if (t7 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 880);
    t6 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 32);
    if (t7 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1016);
    t6 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 32);
    if (t7 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1288);
    t6 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 32);
    if (t7 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1424);
    t6 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 32);
    if (t7 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1152);
    t6 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 32);
    if (t7 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 1560);
    t6 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 32);
    if (t7 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 1696);
    t6 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 32);
    if (t7 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 1832);
    t6 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 32);
    if (t7 == 1)
        goto LAB27;

LAB28:    t2 = (t0 + 1968);
    t6 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 32);
    if (t7 == 1)
        goto LAB29;

LAB30:    t2 = (t0 + 2104);
    t6 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 32);
    if (t7 == 1)
        goto LAB31;

LAB32:    t2 = (t0 + 2240);
    t6 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 32);
    if (t7 == 1)
        goto LAB33;

LAB34:    t2 = (t0 + 2376);
    t6 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 32);
    if (t7 == 1)
        goto LAB35;

LAB36:    t2 = (t0 + 2512);
    t6 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 32);
    if (t7 == 1)
        goto LAB37;

LAB38:    t2 = (t0 + 2648);
    t6 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 32);
    if (t7 == 1)
        goto LAB39;

LAB40:    t2 = (t0 + 2784);
    t6 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 32);
    if (t7 == 1)
        goto LAB41;

LAB42:
LAB44:
LAB43:    xsi_set_current_line(453, ng0);

LAB161:    xsi_set_current_line(454, ng0);
    xsi_vlogfile_write(1, 0, 0, ng48, 1, t0);
    xsi_set_current_line(455, ng0);
    t2 = (t0 + 472);
    t6 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 5);

LAB45:    xsi_set_current_line(460, ng0);
    t2 = (t0 + 6616);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng49, 2, t0, (char)118, t8, 5);
    goto LAB2;

LAB7:    xsi_set_current_line(272, ng0);

LAB46:    xsi_set_current_line(273, ng0);
    t5 = (t0 + 3496U);
    t8 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t8, 4);
    xsi_set_current_line(274, ng0);
    t2 = (t0 + 3496U);
    t3 = *((char **)t2);

LAB47:    t2 = ((char*)((ng10)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t7 == 1)
        goto LAB48;

LAB49:
LAB51:
LAB50:    xsi_set_current_line(282, ng0);

LAB88:    xsi_set_current_line(283, ng0);
    t2 = (t0 + 608);
    t5 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 5);
    xsi_set_current_line(284, ng0);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t0);

LAB52:    goto LAB45;

LAB9:    xsi_set_current_line(292, ng0);

LAB89:    xsi_set_current_line(293, ng0);
    t2 = (t0 + 3496U);
    t6 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t6, 4);
    xsi_set_current_line(294, ng0);
    t2 = (t0 + 3496U);
    t5 = *((char **)t2);

LAB90:    t2 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t7 == 1)
        goto LAB91;

LAB92:    t2 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t7 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t7 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t7 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng19)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t7 == 1)
        goto LAB99;

LAB100:    t2 = ((char*)((ng20)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t7 == 1)
        goto LAB101;

LAB102:    t2 = ((char*)((ng21)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t7 == 1)
        goto LAB103;

LAB104:    t2 = ((char*)((ng23)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t7 == 1)
        goto LAB105;

LAB106:    t2 = ((char*)((ng25)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t7 == 1)
        goto LAB107;

LAB108:    t2 = ((char*)((ng26)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t7 == 1)
        goto LAB109;

LAB110:    t2 = ((char*)((ng28)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t7 == 1)
        goto LAB111;

LAB112:
LAB114:
LAB113:    xsi_set_current_line(355, ng0);

LAB127:    xsi_set_current_line(356, ng0);
    t2 = (t0 + 3496U);
    t6 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng30, 2, t0, (char)118, t6, 4);
    xsi_set_current_line(357, ng0);
    t2 = (t0 + 472);
    t6 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 5);

LAB115:    xsi_set_current_line(361, ng0);
    t2 = (t0 + 6616);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng31, 2, t0, (char)118, t8, 5);
    goto LAB45;

LAB11:    xsi_set_current_line(365, ng0);

LAB128:    xsi_set_current_line(366, ng0);
    t2 = (t0 + 880);
    t8 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 5);
    xsi_set_current_line(367, ng0);
    t2 = (t0 + 6616);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng32, 2, t0, (char)118, t8, 5);
    goto LAB45;

LAB13:    xsi_set_current_line(371, ng0);

LAB129:    xsi_set_current_line(372, ng0);
    t2 = (t0 + 472);
    t8 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 5);
    xsi_set_current_line(373, ng0);
    t2 = (t0 + 6616);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng33, 2, t0, (char)118, t8, 5);
    goto LAB45;

LAB15:    xsi_set_current_line(377, ng0);

LAB130:    xsi_set_current_line(378, ng0);
    t2 = (t0 + 3496U);
    t8 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng34, 2, t0, (char)118, t8, 4);
    xsi_set_current_line(379, ng0);
    t2 = (t0 + 3496U);
    t6 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t8 = (t6 + 4);
    t24 = (t2 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t24);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t24);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB134;

LAB131:    if (t21 != 0)
        goto LAB133;

LAB132:    *((unsigned int *)t11) = 1;

LAB134:    memset(t10, 0, 8);
    t31 = (t11 + 4);
    t26 = *((unsigned int *)t31);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t31) != 0)
        goto LAB137;

LAB138:    t36 = (t10 + 4);
    t33 = *((unsigned int *)t10);
    t34 = *((unsigned int *)t36);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB139;

LAB140:    t38 = *((unsigned int *)t10);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB141;

LAB142:    if (*((unsigned int *)t36) > 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t10) > 0)
        goto LAB145;

LAB146:    memcpy(t9, t43, 8);

LAB147:    t37 = (t0 + 6616);
    xsi_vlogvar_assign_value(t37, t9, 0, 0, 5);
    xsi_set_current_line(380, ng0);
    t2 = (t0 + 6616);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng33, 2, t0, (char)118, t8, 5);
    goto LAB45;

LAB17:    xsi_set_current_line(383, ng0);

LAB148:    xsi_set_current_line(384, ng0);
    t2 = (t0 + 1424);
    t8 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 5);
    xsi_set_current_line(385, ng0);
    t2 = (t0 + 6616);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng35, 2, t0, (char)118, t8, 5);
    goto LAB45;

LAB19:    xsi_set_current_line(388, ng0);

LAB149:    xsi_set_current_line(389, ng0);
    t2 = (t0 + 472);
    t8 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 5);
    xsi_set_current_line(390, ng0);
    t2 = (t0 + 6616);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng36, 2, t0, (char)118, t8, 5);
    goto LAB45;

LAB21:    xsi_set_current_line(393, ng0);

LAB150:    xsi_set_current_line(394, ng0);
    t2 = (t0 + 472);
    t8 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 5);
    xsi_set_current_line(395, ng0);
    t2 = (t0 + 6616);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng37, 2, t0, (char)118, t8, 5);
    goto LAB45;

LAB23:    xsi_set_current_line(399, ng0);

LAB151:    xsi_set_current_line(400, ng0);
    t2 = (t0 + 1696);
    t8 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 5);
    xsi_set_current_line(401, ng0);
    t2 = (t0 + 6616);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng38, 2, t0, (char)118, t8, 5);
    goto LAB45;

LAB25:    xsi_set_current_line(404, ng0);

LAB152:    xsi_set_current_line(405, ng0);
    t2 = (t0 + 472);
    t8 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 5);
    xsi_set_current_line(406, ng0);
    t2 = (t0 + 6616);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng39, 2, t0, (char)118, t8, 5);
    goto LAB45;

LAB27:    xsi_set_current_line(410, ng0);

LAB153:    xsi_set_current_line(411, ng0);
    t2 = (t0 + 1968);
    t8 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 5);
    xsi_set_current_line(412, ng0);
    t2 = (t0 + 6616);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng40, 2, t0, (char)118, t8, 5);
    goto LAB45;

LAB29:    xsi_set_current_line(415, ng0);

LAB154:    xsi_set_current_line(416, ng0);
    t2 = (t0 + 472);
    t8 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 5);
    xsi_set_current_line(417, ng0);
    t2 = (t0 + 6616);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng41, 2, t0, (char)118, t8, 5);
    goto LAB45;

LAB31:    xsi_set_current_line(420, ng0);

LAB155:    xsi_set_current_line(421, ng0);
    t2 = (t0 + 472);
    t8 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 5);
    xsi_set_current_line(422, ng0);
    t2 = (t0 + 6616);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng42, 2, t0, (char)118, t8, 5);
    goto LAB45;

LAB33:    xsi_set_current_line(425, ng0);

LAB156:    xsi_set_current_line(426, ng0);
    t2 = (t0 + 472);
    t8 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 5);
    xsi_set_current_line(427, ng0);
    t2 = (t0 + 6616);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng43, 2, t0, (char)118, t8, 5);
    goto LAB45;

LAB35:    xsi_set_current_line(431, ng0);

LAB157:    xsi_set_current_line(432, ng0);
    t2 = (t0 + 472);
    t8 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 5);
    xsi_set_current_line(433, ng0);
    t2 = (t0 + 6616);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng44, 2, t0, (char)118, t8, 5);
    goto LAB45;

LAB37:    xsi_set_current_line(436, ng0);

LAB158:    xsi_set_current_line(437, ng0);
    t2 = (t0 + 472);
    t8 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 5);
    xsi_set_current_line(438, ng0);
    t2 = (t0 + 6616);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng45, 2, t0, (char)118, t8, 5);
    goto LAB45;

LAB39:    xsi_set_current_line(442, ng0);

LAB159:    xsi_set_current_line(443, ng0);
    t2 = (t0 + 472);
    t8 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 5);
    xsi_set_current_line(444, ng0);
    t2 = (t0 + 6616);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng46, 2, t0, (char)118, t8, 5);
    goto LAB45;

LAB41:    xsi_set_current_line(447, ng0);

LAB160:    xsi_set_current_line(448, ng0);
    t2 = (t0 + 472);
    t8 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 5);
    xsi_set_current_line(449, ng0);
    t2 = (t0 + 6616);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng47, 2, t0, (char)118, t8, 5);
    goto LAB45;

LAB48:    xsi_set_current_line(276, ng0);

LAB53:    xsi_set_current_line(277, ng0);
    t5 = (t0 + 3816U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng11, 2, t0, (char)118, t6, 3);
    xsi_set_current_line(278, ng0);
    t2 = (t0 + 3816U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t6 = (t5 + 4);
    t8 = (t2 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB57;

LAB54:    if (t21 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t11) = 1;

LAB57:    memset(t10, 0, 8);
    t25 = (t11 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t25) != 0)
        goto LAB60;

LAB61:    t32 = (t10 + 4);
    t33 = *((unsigned int *)t10);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB62;

LAB63:    t38 = *((unsigned int *)t10);
    t39 = (~(t38));
    t40 = *((unsigned int *)t32);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t32) > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t10) > 0)
        goto LAB68;

LAB69:    memcpy(t9, t42, 8);

LAB70:    t36 = (t0 + 6616);
    xsi_vlogvar_assign_value(t36, t9, 0, 0, 5);
    xsi_set_current_line(279, ng0);
    t2 = (t0 + 6616);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2648);
    t24 = *((char **)t8);
    memset(t11, 0, 8);
    t8 = (t6 + 4);
    t25 = (t24 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t24);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t25);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t25);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB74;

LAB71:    if (t21 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t11) = 1;

LAB74:    memset(t10, 0, 8);
    t32 = (t11 + 4);
    t26 = *((unsigned int *)t32);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t32) != 0)
        goto LAB77;

LAB78:    t37 = (t10 + 4);
    t33 = *((unsigned int *)t10);
    t34 = *((unsigned int *)t37);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB79;

LAB80:    t38 = *((unsigned int *)t10);
    t39 = (~(t38));
    t40 = *((unsigned int *)t37);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t37) > 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t10) > 0)
        goto LAB85;

LAB86:    memcpy(t9, t43, 8);

LAB87:    xsi_vlogfile_write(1, 0, 0, ng12, 2, t0, (char)118, t9, 24);
    goto LAB52;

LAB56:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB57;

LAB58:    *((unsigned int *)t10) = 1;
    goto LAB61;

LAB60:    t31 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB61;

LAB62:    t36 = (t0 + 2648);
    t37 = *((char **)t36);
    goto LAB63;

LAB64:    t36 = (t0 + 2784);
    t42 = *((char **)t36);
    goto LAB65;

LAB66:    xsi_vlog_unsigned_bit_combine(t9, 32, t37, 32, t42, 32);
    goto LAB70;

LAB68:    memcpy(t9, t37, 8);
    goto LAB70;

LAB73:    t31 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB74;

LAB75:    *((unsigned int *)t10) = 1;
    goto LAB78;

LAB77:    t36 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB78;

LAB79:    t42 = ((char*)((ng13)));
    goto LAB80;

LAB81:    t43 = ((char*)((ng14)));
    goto LAB82;

LAB83:    xsi_vlog_unsigned_bit_combine(t9, 24, t42, 24, t43, 24);
    goto LAB87;

LAB85:    memcpy(t9, t42, 8);
    goto LAB87;

LAB91:    xsi_set_current_line(296, ng0);

LAB116:    xsi_set_current_line(297, ng0);
    t6 = (t0 + 744);
    t8 = *((char **)t6);
    t6 = (t0 + 6616);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);
    xsi_set_current_line(298, ng0);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t0);
    goto LAB115;

LAB93:    xsi_set_current_line(302, ng0);

LAB117:    xsi_set_current_line(303, ng0);
    t6 = (t0 + 1016);
    t8 = *((char **)t6);
    t6 = (t0 + 6616);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);
    xsi_set_current_line(304, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    goto LAB115;

LAB95:    xsi_set_current_line(307, ng0);

LAB118:    xsi_set_current_line(308, ng0);
    t6 = (t0 + 1016);
    t8 = *((char **)t6);
    t6 = (t0 + 6616);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);
    xsi_set_current_line(309, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    goto LAB115;

LAB97:    xsi_set_current_line(313, ng0);

LAB119:    xsi_set_current_line(314, ng0);
    t6 = (t0 + 1560);
    t8 = *((char **)t6);
    t6 = (t0 + 6616);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);
    xsi_set_current_line(315, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    goto LAB115;

LAB99:    xsi_set_current_line(318, ng0);

LAB120:    xsi_set_current_line(319, ng0);
    t6 = (t0 + 1560);
    t8 = *((char **)t6);
    t6 = (t0 + 6616);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);
    xsi_set_current_line(320, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    goto LAB115;

LAB101:    xsi_set_current_line(323, ng0);

LAB121:    xsi_set_current_line(324, ng0);
    t6 = (t0 + 1560);
    t8 = *((char **)t6);
    t6 = (t0 + 6616);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);
    xsi_set_current_line(325, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    goto LAB115;

LAB103:    xsi_set_current_line(329, ng0);

LAB122:    xsi_set_current_line(330, ng0);
    t6 = (t0 + 1832);
    t8 = *((char **)t6);
    t6 = (t0 + 6616);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);
    xsi_set_current_line(331, ng0);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t0);
    goto LAB115;

LAB105:    xsi_set_current_line(334, ng0);

LAB123:    xsi_set_current_line(335, ng0);
    t6 = (t0 + 2104);
    t8 = *((char **)t6);
    t6 = (t0 + 6616);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);
    xsi_set_current_line(336, ng0);
    xsi_vlogfile_write(1, 0, 0, ng24, 1, t0);
    goto LAB115;

LAB107:    xsi_set_current_line(339, ng0);

LAB124:    xsi_set_current_line(340, ng0);
    t6 = (t0 + 2240);
    t8 = *((char **)t6);
    t6 = (t0 + 6616);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);
    goto LAB115;

LAB109:    xsi_set_current_line(344, ng0);

LAB125:    xsi_set_current_line(345, ng0);
    t6 = (t0 + 2376);
    t8 = *((char **)t6);
    t6 = (t0 + 6616);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);
    xsi_set_current_line(346, ng0);
    xsi_vlogfile_write(1, 0, 0, ng27, 1, t0);
    goto LAB115;

LAB111:    xsi_set_current_line(349, ng0);

LAB126:    xsi_set_current_line(350, ng0);
    t6 = (t0 + 2512);
    t8 = *((char **)t6);
    t6 = (t0 + 6616);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);
    xsi_set_current_line(351, ng0);
    xsi_vlogfile_write(1, 0, 0, ng29, 1, t0);
    goto LAB115;

LAB133:    t25 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB134;

LAB135:    *((unsigned int *)t10) = 1;
    goto LAB138;

LAB137:    t32 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB138;

LAB139:    t37 = (t0 + 1288);
    t42 = *((char **)t37);
    goto LAB140;

LAB141:    t37 = (t0 + 1152);
    t43 = *((char **)t37);
    goto LAB142;

LAB143:    xsi_vlog_unsigned_bit_combine(t9, 32, t42, 32, t43, 32);
    goto LAB147;

LAB145:    memcpy(t9, t42, 8);
    goto LAB147;

}


extern void work_m_16844717195992337597_2189627461_init()
{
	static char *pe[] = {(void *)Initial_90_0,(void *)Always_93_1,(void *)Always_103_2,(void *)Always_264_3};
	xsi_register_didat("work_m_16844717195992337597_2189627461", "isim/MIPS_control_unit_isim_beh.exe.sim/work/m_16844717195992337597_2189627461.didat");
	xsi_register_executes(pe);
}