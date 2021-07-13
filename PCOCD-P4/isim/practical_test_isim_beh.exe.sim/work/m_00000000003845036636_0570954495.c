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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD-P4-9(FINAL)_2MHz/multi_dt.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {128U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static int ng10[] = {1, 0};



static void Always_8_0(char *t0)
{
    char t14[8];
    char t18[8];
    char t19[8];
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
    char *t15;
    unsigned int t16;
    char *t17;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(8, ng0);

LAB5:    xsi_set_current_line(9, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(12, ng0);

LAB10:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t18, 0, 8);
    t11 = (t18 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t18) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 7);
    t16 = (t10 & 1);
    *((unsigned int *)t11) = t16;
    t15 = (t0 + 1928);
    t17 = (t15 + 56U);
    t20 = *((char **)t17);
    memset(t19, 0, 8);
    t21 = (t19 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 0);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 127U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 127U);
    xsi_vlogtype_concat(t14, 8, 8, 2U, t19, 7, t18, 1);
    t29 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t29, t14, 0, 0, 8, 0LL);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng10)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 3, t11, 32);
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(9, ng0);

LAB9:    xsi_set_current_line(10, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(11, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(15, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t15 = (t12 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t15);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 15U);
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 15U);
    t17 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t17, t14, 0, 0, 4, 0LL);
    goto LAB28;

LAB14:    xsi_set_current_line(16, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 4);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 4);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 15U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 15U);
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 4, 0LL);
    goto LAB28;

LAB16:    xsi_set_current_line(17, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 8);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 8);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 15U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 15U);
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 4, 0LL);
    goto LAB28;

LAB18:    xsi_set_current_line(18, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 12);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 12);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 15U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 15U);
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 4, 0LL);
    goto LAB28;

LAB20:    xsi_set_current_line(19, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 16);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 16);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 15U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 15U);
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 4, 0LL);
    goto LAB28;

LAB22:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 20);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 20);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 15U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 15U);
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 4, 0LL);
    goto LAB28;

LAB24:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 24);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 24);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 15U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 15U);
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 4, 0LL);
    goto LAB28;

LAB26:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 28);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 28);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 15U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 15U);
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 4, 0LL);
    goto LAB28;

}


extern void work_m_00000000003845036636_0570954495_init()
{
	static char *pe[] = {(void *)Always_8_0};
	xsi_register_didat("work_m_00000000003845036636_0570954495", "isim/practical_test_isim_beh.exe.sim/work/m_00000000003845036636_0570954495.didat");
	xsi_register_executes(pe);
}
