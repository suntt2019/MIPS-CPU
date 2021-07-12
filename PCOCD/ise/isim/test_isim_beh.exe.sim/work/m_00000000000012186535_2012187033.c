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
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD/ise/bac.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {3, 0};
static int ng6[] = {24, 0};



static void Always_12_0(char *t0)
{
    char t9[8];
    char t10[8];
    char t19[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 2284);
    *((int *)t2) = 1;
    t3 = (t0 + 2116);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 1);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 1);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(14, ng0);

LAB12:    xsi_set_current_line(15, ng0);
    t7 = (t0 + 692U);
    t8 = *((char **)t7);
    t7 = (t0 + 1104);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    xsi_set_current_line(16, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 1196);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(17, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 1288);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB11;

LAB9:    xsi_set_current_line(19, ng0);

LAB13:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 3U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 3U);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t9, 5, 5, 2U, t8, 3, t10, 2);
    t17 = (t0 + 1380);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 5);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 2);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 2);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 1073741823U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 1073741823U);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t10, 30, t2, 2);
    t8 = (t0 + 1104);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB14:    t7 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 5, t7, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 1380);
    t7 = (t2 + 36U);
    t8 = *((char **)t7);
    t17 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_lshift(t9, 5, t8, 5, t17, 32);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 32, t3, 32, t9, 5);
    t18 = (t0 + 1564);
    xsi_vlogvar_assign_value(t18, t10, 0, 0, 32);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t17 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t17);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 255U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 255U);
    t18 = ((char*)((ng6)));
    t20 = (t0 + 1564);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t29 = (t30 + 4);
    t37 = (t22 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (t23 >> 7);
    t25 = (t24 & 1);
    *((unsigned int *)t30) = t25;
    t26 = *((unsigned int *)t37);
    t27 = (t26 >> 7);
    t28 = (t27 & 1);
    *((unsigned int *)t29) = t28;
    xsi_vlog_mul_concat(t19, 24, 1, t18, 1U, t30, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t19, 24, t10, 8);
    t38 = (t0 + 1288);
    xsi_vlogvar_assign_value(t38, t9, 0, 0, 32);
    goto LAB11;

LAB15:    xsi_set_current_line(23, ng0);
    t8 = (t0 + 784U);
    t17 = *((char **)t8);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t18 = (t17 + 4);
    t11 = *((unsigned int *)t17);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t18);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 255U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 255U);
    t20 = (t0 + 876U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t19 + 4);
    t22 = (t21 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (t23 >> 8);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 8);
    *((unsigned int *)t20) = t26;
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 16777215U);
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t28 & 16777215U);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t19, 24, t10, 8);
    t29 = (t0 + 1196);
    xsi_vlogvar_assign_value(t29, t9, 0, 0, 32);
    goto LAB23;

LAB17:    xsi_set_current_line(24, ng0);
    t3 = (t0 + 876U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t17 = (t0 + 784U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t19 + 4);
    t20 = (t18 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (t23 >> 0);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t20);
    t26 = (t25 >> 0);
    *((unsigned int *)t17) = t26;
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 255U);
    t28 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t28 & 255U);
    t21 = (t0 + 876U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t21 = (t30 + 4);
    t29 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (t31 >> 16);
    *((unsigned int *)t30) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 16);
    *((unsigned int *)t21) = t34;
    t35 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t35 & 65535U);
    t36 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t36 & 65535U);
    xsi_vlogtype_concat(t9, 32, 32, 3U, t30, 16, t19, 8, t10, 8);
    t37 = (t0 + 1196);
    xsi_vlogvar_assign_value(t37, t9, 0, 0, 32);
    goto LAB23;

LAB19:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 876U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 65535U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 65535U);
    t17 = (t0 + 784U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t19 + 4);
    t20 = (t18 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (t23 >> 0);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t20);
    t26 = (t25 >> 0);
    *((unsigned int *)t17) = t26;
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 255U);
    t28 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t28 & 255U);
    t21 = (t0 + 876U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t21 = (t30 + 4);
    t29 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (t31 >> 24);
    *((unsigned int *)t30) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 24);
    *((unsigned int *)t21) = t34;
    t35 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t35 & 255U);
    t36 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t36 & 255U);
    xsi_vlogtype_concat(t9, 32, 32, 3U, t30, 8, t19, 8, t10, 16);
    t37 = (t0 + 1196);
    xsi_vlogvar_assign_value(t37, t9, 0, 0, 32);
    goto LAB23;

LAB21:    xsi_set_current_line(26, ng0);
    t3 = (t0 + 876U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 16777215U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 16777215U);
    t17 = (t0 + 784U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t19 + 4);
    t20 = (t18 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (t23 >> 0);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t20);
    t26 = (t25 >> 0);
    *((unsigned int *)t17) = t26;
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 255U);
    t28 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t28 & 255U);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t19, 8, t10, 24);
    t21 = (t0 + 1196);
    xsi_vlogvar_assign_value(t21, t9, 0, 0, 32);
    goto LAB23;

}


extern void work_m_00000000000012186535_2012187033_init()
{
	static char *pe[] = {(void *)Always_12_0};
	xsi_register_didat("work_m_00000000000012186535_2012187033", "isim/test_isim_beh.exe.sim/work/m_00000000000012186535_2012187033.didat");
	xsi_register_executes(pe);
}
