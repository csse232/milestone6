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
static unsigned int ng8[] = {12U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {10U, 0U};
static unsigned int ng12[] = {11U, 0U};
static unsigned int ng13[] = {9U, 0U};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {8U, 0U};



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
    char t12[8];
    char t13[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    int t11;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
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
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;

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

LAB5:    xsi_set_current_line(269, ng0);
    t4 = (t0 + 6456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB27;

LAB28:    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB29;

LAB30:    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB31;

LAB32:    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB33;

LAB34:    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB35;

LAB36:    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB37;

LAB38:    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB39;

LAB40:    t2 = (t0 + 2784);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB41;

LAB42:
LAB44:
LAB43:    xsi_set_current_line(453, ng0);

LAB144:    xsi_set_current_line(455, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);

LAB45:    goto LAB2;

LAB7:    xsi_set_current_line(272, ng0);

LAB46:    xsi_set_current_line(274, ng0);
    t7 = (t0 + 3496U);
    t10 = *((char **)t7);

LAB47:    t7 = ((char*)((ng8)));
    t11 = xsi_vlog_unsigned_case_compare(t10, 4, t7, 4);
    if (t11 == 1)
        goto LAB48;

LAB49:
LAB51:
LAB50:    xsi_set_current_line(282, ng0);

LAB71:    xsi_set_current_line(283, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);

LAB52:    goto LAB45;

LAB9:    xsi_set_current_line(292, ng0);

LAB72:    xsi_set_current_line(294, ng0);
    t2 = (t0 + 3496U);
    t4 = *((char **)t2);

LAB73:    t2 = ((char*)((ng2)));
    t11 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t11 == 1)
        goto LAB74;

LAB75:    t2 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t9 == 1)
        goto LAB76;

LAB77:    t2 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t9 == 1)
        goto LAB78;

LAB79:    t2 = ((char*)((ng4)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t9 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng9)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t9 == 1)
        goto LAB82;

LAB83:    t2 = ((char*)((ng10)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t9 == 1)
        goto LAB84;

LAB85:    t2 = ((char*)((ng11)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t9 == 1)
        goto LAB86;

LAB87:    t2 = ((char*)((ng12)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t9 == 1)
        goto LAB88;

LAB89:    t2 = ((char*)((ng13)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t9 == 1)
        goto LAB90;

LAB91:    t2 = ((char*)((ng14)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t9 == 1)
        goto LAB92;

LAB93:    t2 = ((char*)((ng15)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t9 == 1)
        goto LAB94;

LAB95:
LAB97:
LAB96:    xsi_set_current_line(355, ng0);

LAB110:    xsi_set_current_line(357, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);

LAB98:    goto LAB45;

LAB11:    xsi_set_current_line(365, ng0);

LAB111:    xsi_set_current_line(366, ng0);
    t2 = (t0 + 880);
    t5 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 5);
    goto LAB45;

LAB13:    xsi_set_current_line(371, ng0);

LAB112:    xsi_set_current_line(372, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 5);
    goto LAB45;

LAB15:    xsi_set_current_line(377, ng0);

LAB113:    xsi_set_current_line(379, ng0);
    t2 = (t0 + 3496U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t2);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t8);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB117;

LAB114:    if (t28 != 0)
        goto LAB116;

LAB115:    *((unsigned int *)t16) = 1;

LAB117:    memset(t13, 0, 8);
    t15 = (t16 + 4);
    t33 = *((unsigned int *)t15);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t15) != 0)
        goto LAB120;

LAB121:    t18 = (t13 + 4);
    t40 = *((unsigned int *)t13);
    t41 = *((unsigned int *)t18);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB122;

LAB123:    t45 = *((unsigned int *)t13);
    t46 = (~(t45));
    t47 = *((unsigned int *)t18);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t18) > 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t13) > 0)
        goto LAB128;

LAB129:    memcpy(t12, t38, 8);

LAB130:    t31 = (t0 + 6616);
    xsi_vlogvar_assign_value(t31, t12, 0, 0, 5);
    goto LAB45;

LAB17:    xsi_set_current_line(383, ng0);

LAB131:    xsi_set_current_line(384, ng0);
    t2 = (t0 + 1424);
    t5 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 5);
    goto LAB45;

LAB19:    xsi_set_current_line(388, ng0);

LAB132:    xsi_set_current_line(389, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 5);
    goto LAB45;

LAB21:    xsi_set_current_line(393, ng0);

LAB133:    xsi_set_current_line(394, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 5);
    goto LAB45;

LAB23:    xsi_set_current_line(399, ng0);

LAB134:    xsi_set_current_line(400, ng0);
    t2 = (t0 + 1696);
    t5 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 5);
    goto LAB45;

LAB25:    xsi_set_current_line(404, ng0);

LAB135:    xsi_set_current_line(405, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 5);
    goto LAB45;

LAB27:    xsi_set_current_line(410, ng0);

LAB136:    xsi_set_current_line(411, ng0);
    t2 = (t0 + 1968);
    t5 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 5);
    goto LAB45;

LAB29:    xsi_set_current_line(415, ng0);

LAB137:    xsi_set_current_line(416, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 5);
    goto LAB45;

LAB31:    xsi_set_current_line(420, ng0);

LAB138:    xsi_set_current_line(421, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 5);
    goto LAB45;

LAB33:    xsi_set_current_line(425, ng0);

LAB139:    xsi_set_current_line(426, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 5);
    goto LAB45;

LAB35:    xsi_set_current_line(431, ng0);

LAB140:    xsi_set_current_line(432, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 5);
    goto LAB45;

LAB37:    xsi_set_current_line(436, ng0);

LAB141:    xsi_set_current_line(437, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 5);
    goto LAB45;

LAB39:    xsi_set_current_line(442, ng0);

LAB142:    xsi_set_current_line(443, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 5);
    goto LAB45;

LAB41:    xsi_set_current_line(447, ng0);

LAB143:    xsi_set_current_line(448, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 6616);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 5);
    goto LAB45;

LAB48:    xsi_set_current_line(276, ng0);

LAB53:    xsi_set_current_line(278, ng0);
    t14 = (t0 + 3816U);
    t15 = *((char **)t14);
    t14 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t17 = (t15 + 4);
    t18 = (t14 + 4);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t14);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB57;

LAB54:    if (t28 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t16) = 1;

LAB57:    memset(t13, 0, 8);
    t32 = (t16 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t32) != 0)
        goto LAB60;

LAB61:    t39 = (t13 + 4);
    t40 = *((unsigned int *)t13);
    t41 = *((unsigned int *)t39);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB62;

LAB63:    t45 = *((unsigned int *)t13);
    t46 = (~(t45));
    t47 = *((unsigned int *)t39);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t39) > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t13) > 0)
        goto LAB68;

LAB69:    memcpy(t12, t49, 8);

LAB70:    t43 = (t0 + 6616);
    xsi_vlogvar_assign_value(t43, t12, 0, 0, 5);
    goto LAB52;

LAB56:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB57;

LAB58:    *((unsigned int *)t13) = 1;
    goto LAB61;

LAB60:    t38 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB61;

LAB62:    t43 = (t0 + 2648);
    t44 = *((char **)t43);
    goto LAB63;

LAB64:    t43 = (t0 + 2784);
    t49 = *((char **)t43);
    goto LAB65;

LAB66:    xsi_vlog_unsigned_bit_combine(t12, 32, t44, 32, t49, 32);
    goto LAB70;

LAB68:    memcpy(t12, t44, 8);
    goto LAB70;

LAB74:    xsi_set_current_line(296, ng0);

LAB99:    xsi_set_current_line(297, ng0);
    t5 = (t0 + 744);
    t7 = *((char **)t5);
    t5 = (t0 + 6616);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 5);
    goto LAB98;

LAB76:    xsi_set_current_line(302, ng0);

LAB100:    xsi_set_current_line(303, ng0);
    t3 = (t0 + 1016);
    t5 = *((char **)t3);
    t3 = (t0 + 6616);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 5);
    goto LAB98;

LAB78:    xsi_set_current_line(307, ng0);

LAB101:    xsi_set_current_line(308, ng0);
    t3 = (t0 + 1016);
    t5 = *((char **)t3);
    t3 = (t0 + 6616);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 5);
    goto LAB98;

LAB80:    xsi_set_current_line(313, ng0);

LAB102:    xsi_set_current_line(314, ng0);
    t3 = (t0 + 1560);
    t5 = *((char **)t3);
    t3 = (t0 + 6616);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 5);
    goto LAB98;

LAB82:    xsi_set_current_line(318, ng0);

LAB103:    xsi_set_current_line(319, ng0);
    t3 = (t0 + 1560);
    t5 = *((char **)t3);
    t3 = (t0 + 6616);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 5);
    goto LAB98;

LAB84:    xsi_set_current_line(323, ng0);

LAB104:    xsi_set_current_line(324, ng0);
    t3 = (t0 + 1560);
    t5 = *((char **)t3);
    t3 = (t0 + 6616);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 5);
    goto LAB98;

LAB86:    xsi_set_current_line(329, ng0);

LAB105:    xsi_set_current_line(330, ng0);
    t3 = (t0 + 1832);
    t5 = *((char **)t3);
    t3 = (t0 + 6616);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 5);
    goto LAB98;

LAB88:    xsi_set_current_line(334, ng0);

LAB106:    xsi_set_current_line(335, ng0);
    t3 = (t0 + 2104);
    t5 = *((char **)t3);
    t3 = (t0 + 6616);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 5);
    goto LAB98;

LAB90:    xsi_set_current_line(339, ng0);

LAB107:    xsi_set_current_line(340, ng0);
    t3 = (t0 + 2240);
    t5 = *((char **)t3);
    t3 = (t0 + 6616);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 5);
    goto LAB98;

LAB92:    xsi_set_current_line(344, ng0);

LAB108:    xsi_set_current_line(345, ng0);
    t3 = (t0 + 2376);
    t5 = *((char **)t3);
    t3 = (t0 + 6616);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 5);
    goto LAB98;

LAB94:    xsi_set_current_line(349, ng0);

LAB109:    xsi_set_current_line(350, ng0);
    t3 = (t0 + 2512);
    t5 = *((char **)t3);
    t3 = (t0 + 6616);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 5);
    goto LAB98;

LAB116:    t14 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB117;

LAB118:    *((unsigned int *)t13) = 1;
    goto LAB121;

LAB120:    t17 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB121;

LAB122:    t31 = (t0 + 1288);
    t32 = *((char **)t31);
    goto LAB123;

LAB124:    t31 = (t0 + 1152);
    t38 = *((char **)t31);
    goto LAB125;

LAB126:    xsi_vlog_unsigned_bit_combine(t12, 32, t32, 32, t38, 32);
    goto LAB130;

LAB128:    memcpy(t12, t32, 8);
    goto LAB130;

}


extern void work_m_16844717195992337597_2189627461_init()
{
	static char *pe[] = {(void *)Initial_90_0,(void *)Always_93_1,(void *)Always_103_2,(void *)Always_264_3};
	xsi_register_didat("work_m_16844717195992337597_2189627461", "isim/TopLevel_isim_beh.exe.sim/work/m_16844717195992337597_2189627461.didat");
	xsi_register_executes(pe);
}
