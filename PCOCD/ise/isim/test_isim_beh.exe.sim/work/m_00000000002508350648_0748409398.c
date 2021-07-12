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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD/ise/im_test.v";
static int ng1[] = {0, 0};
static const char *ng2 = " *IM test started.";
static const char *ng3 = "    Read from file.";
static const char *ng4 = "../unit_test/unit-test.txt";
static unsigned int ng5[] = {12288U, 0U};
static const char *ng6 = "    Check memory";
static unsigned int ng7[] = {66051U, 0U};
static int ng8[] = {10, 0};
static const char *ng9 = "      check %d: %h == %h";
static const char *ng10 = "Assertion Error";
static int ng11[] = {4, 0};
static unsigned int ng12[] = {67372036U, 0U};
static int ng13[] = {1, 0};



static void Initial_21_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(21, ng0);

LAB2:    xsi_set_current_line(22, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 920);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_25_1(char *t0)
{
    char t6[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;

LAB0:    t1 = (t0 + 1864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2060);
    *((int *)t2) = 1;
    t3 = (t0 + 1892);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(27, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3168);
    t3 = *((char **)t2);
    t4 = ((char*)((ng5)));
    xsi_vlogfile_readmemh(ng4, 0, ((char*)(t3)), 1, *((unsigned int *)t4), 0, 0);
    xsi_set_current_line(29, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1764);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(34, ng0);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB7:    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

LAB8:    xsi_set_current_line(34, ng0);

LAB10:    xsi_set_current_line(35, ng0);
    t13 = (t0 + 1764);
    xsi_process_wait(t13, 1000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(36, ng0);
    t14 = (t0 + 1104);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 692U);
    t18 = *((char **)t17);
    t17 = (t0 + 1196);
    t19 = (t17 + 36U);
    t20 = *((char **)t19);
    xsi_vlogfile_write(1, 0, 0, ng9, 4, t0, (char)119, t16, 32, (char)118, t18, 32, (char)118, t20, 32);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1196);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t21, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t5))
        goto LAB14;

LAB12:    t7 = (t3 + 4);
    t13 = (t5 + 4);
    if (*((unsigned int *)t7) != *((unsigned int *)t13))
        goto LAB14;

LAB13:    *((unsigned int *)t21) = 1;

LAB14:    memset(t6, 0, 8);
    t14 = (t21 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t21);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t14) == 0)
        goto LAB15;

LAB17:    t15 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t15) = 1;

LAB18:    t16 = (t6 + 4);
    t17 = (t21 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    *((unsigned int *)t6) = t23;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB20;

LAB19:    t28 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t28 & 1U);
    t29 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t29 & 1U);
    t18 = (t6 + 4);
    t30 = *((unsigned int *)t18);
    t31 = (~(t30));
    t32 = *((unsigned int *)t6);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 16, t5, 32);
    t7 = (t0 + 1012);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1196);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1104);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB7;

LAB15:    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB20:    t24 = *((unsigned int *)t6);
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t6) = (t24 | t25);
    t26 = *((unsigned int *)t16);
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t26 | t27);
    goto LAB19;

LAB21:    xsi_set_current_line(37, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    goto LAB23;

}


extern void work_m_00000000002508350648_0748409398_init()
{
	static char *pe[] = {(void *)Initial_21_0,(void *)Always_25_1};
	xsi_register_didat("work_m_00000000002508350648_0748409398", "isim/test_isim_beh.exe.sim/work/m_00000000002508350648_0748409398.didat");
	xsi_register_executes(pe);
}
