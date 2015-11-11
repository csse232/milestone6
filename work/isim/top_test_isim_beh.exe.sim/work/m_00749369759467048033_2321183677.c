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
static const char *ng0 = "/home/griseous/Documents/csse232/Milestone6/Memory.v";
static const char *ng1 = "program.mem";
static int ng2[] = {0, 0};
static const char *ng3 = "Writing %b to memory";



static void Initial_32_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 2248);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Initial_33_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Always_36_2(char *t0)
{
    char t14[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;

LAB0:    t1 = (t0 + 3656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3976);
    *((int *)t2) = 1;
    t3 = (t0 + 3688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);

LAB9:    xsi_set_current_line(40, ng0);
    t11 = (t0 + 2248);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 2248);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2248);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1688U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t14, 16, t13, t17, t20, 2, 1, t22, 16, 2);
    t21 = (t0 + 2088);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 16);
    goto LAB8;

LAB10:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t0, (char)118, t5, 16);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    t4 = (t0 + 2248);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2248);
    t13 = (t12 + 64U);
    t15 = *((char **)t13);
    t16 = (t0 + 1688U);
    t17 = *((char **)t16);
    xsi_vlog_generic_convert_array_indices(t14, t23, t11, t15, 2, 1, t17, 16, 2);
    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t24 = (!(t6));
    t18 = (t23 + 4);
    t7 = *((unsigned int *)t18);
    t25 = (!(t7));
    t26 = (t24 && t25);
    if (t26 == 1)
        goto LAB14;

LAB15:    goto LAB12;

LAB14:    t8 = *((unsigned int *)t14);
    t9 = *((unsigned int *)t23);
    t27 = (t8 - t9);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t23), t28);
    goto LAB15;

}


extern void work_m_00749369759467048033_2321183677_init()
{
	static char *pe[] = {(void *)Initial_32_0,(void *)Initial_33_1,(void *)Always_36_2};
	xsi_register_didat("work_m_00749369759467048033_2321183677", "isim/top_test_isim_beh.exe.sim/work/m_00749369759467048033_2321183677.didat");
	xsi_register_executes(pe);
}
