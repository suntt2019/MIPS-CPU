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
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD-P4-5/ifu.v";
static unsigned int ng1[] = {12288U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {4, 0};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {16768U, 0U};



static void Always_14_0(char *t0)
{
    char t16[8];
    char t18[8];
    char t20[8];
    char t30[8];
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
    int t13;
    char *t14;
    char *t15;
    char *t17;
    unsigned int t19;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 1996U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 2192);
    *((int *)t2) = 1;
    t3 = (t0 + 2024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng0);

LAB5:    xsi_set_current_line(15, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 784U);
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
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(15, ng0);

LAB9:    xsi_set_current_line(16, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1380);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB8;

LAB10:    xsi_set_current_line(17, ng0);

LAB13:    xsi_set_current_line(18, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);

LAB14:    t4 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t13 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB12;

LAB15:    xsi_set_current_line(19, ng0);
    t11 = (t0 + 1380);
    t12 = (t11 + 36U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t14, 32, t15, 32);
    t17 = (t0 + 1380);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 32);
    goto LAB25;

LAB17:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 968U);
    t4 = *((char **)t3);
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB25;

LAB19:    xsi_set_current_line(21, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1060U);
    t11 = *((char **)t4);
    memset(t18, 0, 8);
    t4 = (t18 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t18) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t10 & 67108863U);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 & 67108863U);
    t14 = (t0 + 1380);
    t15 = (t14 + 36U);
    t17 = *((char **)t15);
    memset(t20, 0, 8);
    t21 = (t20 + 4);
    t22 = (t17 + 4);
    t23 = *((unsigned int *)t17);
    t24 = (t23 >> 28);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 28);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 15U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 15U);
    xsi_vlogtype_concat(t16, 32, 32, 3U, t20, 4, t18, 26, t3, 2);
    t29 = (t0 + 1380);
    xsi_vlogvar_assign_value(t29, t16, 0, 0, 32);
    goto LAB25;

LAB21:    xsi_set_current_line(22, ng0);

LAB26:    xsi_set_current_line(23, ng0);
    t3 = (t0 + 1380);
    t4 = (t3 + 36U);
    t11 = *((char **)t4);
    memset(t16, 0, 8);
    t12 = (t16 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 0);
    *((unsigned int *)t12) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 65535U);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 65535U);
    t15 = (t0 + 1060U);
    t17 = *((char **)t15);
    memset(t18, 0, 8);
    t15 = (t18 + 4);
    t21 = (t17 + 4);
    t23 = *((unsigned int *)t17);
    t24 = (t23 >> 0);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 0);
    *((unsigned int *)t15) = t26;
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 65535U);
    t28 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t28 & 65535U);
    t22 = ((char*)((ng7)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_lshift(t20, 32, t18, 32, t22, 32);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t16, 32, t20, 32);
    t29 = (t0 + 1472);
    xsi_vlogvar_assign_value(t29, t30, 0, 0, 32);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t11 = (t18 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t18) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t10 & 65535U);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 65535U);
    t14 = (t0 + 1380);
    t15 = (t14 + 36U);
    t17 = *((char **)t15);
    memset(t20, 0, 8);
    t21 = (t20 + 4);
    t22 = (t17 + 4);
    t23 = *((unsigned int *)t17);
    t24 = (t23 >> 16);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 16);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 65535U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 65535U);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t20, 16, t18, 16);
    t29 = (t0 + 1380);
    xsi_vlogvar_assign_value(t29, t16, 0, 0, 32);
    goto LAB25;

LAB23:    xsi_set_current_line(26, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB25;

}


extern void work_m_00000000000225625937_3224323566_init()
{
	static char *pe[] = {(void *)Always_14_0};
	xsi_register_didat("work_m_00000000000225625937_3224323566", "isim/practical_test_isim_beh.exe.sim/work/m_00000000000225625937_3224323566.didat");
	xsi_register_executes(pe);
}
