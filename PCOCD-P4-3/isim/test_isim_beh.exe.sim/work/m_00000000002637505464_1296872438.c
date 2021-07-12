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
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD-P4-3/dm_test.v";
static int ng1[] = {0, 0};
static const char *ng2 = " *DM test started.";
static const char *ng3 = "    Write test.";
static int ng4[] = {1, 0};
static int ng5[] = {10, 0};
static int ng6[] = {4, 0};
static const char *ng7 = "      test(#%d):dm[%d]<-%h == %h";
static const char *ng8 = "Assertion Error";
static const char *ng9 = "    Read test.";
static int ng10[] = {9, 0};
static const char *ng11 = "      test(#%d):dm[%d]->%h == %h";
static const char *ng12 = " *DM test finished.";



static void Initial_25_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(25, ng0);

LAB2:    xsi_set_current_line(26, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1000);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1092);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_29_1(char *t0)
{
    char t6[8];
    char t17[8];
    char t34[8];
    char t36[8];
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
    char *t18;
    char *t19;
    char *t20;
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;

LAB0:    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2468);
    *((int *)t2) = 1;
    t3 = (t0 + 2156);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(33, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1460);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(43, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1460);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB23:    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(53, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);

LAB9:    xsi_set_current_line(36, ng0);
    t13 = (t0 + 1460);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng6)));
    memset(t17, 0, 8);
    xsi_vlog_signed_multiply(t17, 32, t15, 32, t16, 32);
    t18 = (t0 + 1368);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 14);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 264);
    t3 = *((char **)t2);
    t2 = (t0 + 1460);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_power(t6, 32, t3, 32, t5, 32, 1);
    t7 = (t0 + 1276);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2028);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1460);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 1368);
    t13 = (t7 + 36U);
    t14 = *((char **)t13);
    t15 = (t0 + 1276);
    t16 = (t15 + 36U);
    t18 = *((char **)t16);
    t19 = (t0 + 772U);
    t20 = *((char **)t19);
    xsi_vlogfile_write(1, 0, 0, ng7, 5, t0, (char)119, t5, 32, (char)118, t14, 14, (char)118, t18, 32, (char)118, t20, 32);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1276);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 772U);
    t7 = *((char **)t5);
    memset(t17, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t7))
        goto LAB13;

LAB11:    t5 = (t4 + 4);
    t13 = (t7 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t13))
        goto LAB13;

LAB12:    *((unsigned int *)t17) = 1;

LAB13:    memset(t6, 0, 8);
    t14 = (t17 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t17);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t14) == 0)
        goto LAB14;

LAB16:    t15 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t15) = 1;

LAB17:    t16 = (t6 + 4);
    t18 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (~(t21));
    *((unsigned int *)t6) = t22;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB19;

LAB18:    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 1U);
    t28 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t28 & 1U);
    t19 = (t6 + 4);
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    t31 = *((unsigned int *)t6);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB20;

LAB21:
LAB22:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1460);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB14:    *((unsigned int *)t6) = 1;
    goto LAB17;

LAB19:    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t18);
    *((unsigned int *)t6) = (t23 | t24);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t16) = (t25 | t26);
    goto LAB18;

LAB20:    xsi_set_current_line(40, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB22;

LAB24:    xsi_set_current_line(45, ng0);

LAB26:    xsi_set_current_line(46, ng0);
    t13 = ((char*)((ng10)));
    t14 = (t0 + 1460);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    xsi_vlog_signed_minus(t17, 32, t13, 32, t16, 32);
    t18 = ((char*)((ng6)));
    memset(t34, 0, 8);
    xsi_vlog_signed_multiply(t34, 32, t17, 32, t18, 32);
    t19 = (t0 + 1368);
    xsi_vlogvar_assign_value(t19, t34, 0, 0, 14);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1276);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2028);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1460);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 1368);
    t13 = (t7 + 36U);
    t14 = *((char **)t13);
    t15 = (t0 + 772U);
    t16 = *((char **)t15);
    t15 = (t0 + 264);
    t18 = *((char **)t15);
    t15 = ((char*)((ng10)));
    t19 = (t0 + 1460);
    t20 = (t19 + 36U);
    t35 = *((char **)t20);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t15, 32, t35, 32);
    memset(t17, 0, 8);
    xsi_vlog_signed_power(t17, 32, t18, 32, t6, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng11, 5, t0, (char)119, t5, 32, (char)118, t14, 14, (char)118, t16, 32, (char)119, t17, 32);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 264);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 1460);
    t5 = (t4 + 36U);
    t7 = *((char **)t5);
    memset(t17, 0, 8);
    xsi_vlog_signed_minus(t17, 32, t2, 32, t7, 32);
    memset(t34, 0, 8);
    xsi_vlog_unsigned_power(t34, 32, t3, 32, t17, 32, 1);
    t13 = (t0 + 772U);
    t14 = *((char **)t13);
    memset(t36, 0, 8);
    if (*((unsigned int *)t34) != *((unsigned int *)t14))
        goto LAB30;

LAB28:    t13 = (t34 + 4);
    t15 = (t14 + 4);
    if (*((unsigned int *)t13) != *((unsigned int *)t15))
        goto LAB30;

LAB29:    *((unsigned int *)t36) = 1;

LAB30:    memset(t6, 0, 8);
    t16 = (t36 + 4);
    t8 = *((unsigned int *)t16);
    t9 = (~(t8));
    t10 = *((unsigned int *)t36);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t16) == 0)
        goto LAB31;

LAB33:    t18 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t18) = 1;

LAB34:    t19 = (t6 + 4);
    t20 = (t36 + 4);
    t21 = *((unsigned int *)t36);
    t22 = (~(t21));
    *((unsigned int *)t6) = t22;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t20) != 0)
        goto LAB36;

LAB35:    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 1U);
    t28 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t28 & 1U);
    t35 = (t6 + 4);
    t29 = *((unsigned int *)t35);
    t30 = (~(t29));
    t31 = *((unsigned int *)t6);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1460);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB23;

LAB31:    *((unsigned int *)t6) = 1;
    goto LAB34;

LAB36:    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t20);
    *((unsigned int *)t6) = (t23 | t24);
    t25 = *((unsigned int *)t19);
    t26 = *((unsigned int *)t20);
    *((unsigned int *)t19) = (t25 | t26);
    goto LAB35;

LAB37:    xsi_set_current_line(50, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB39;

}

static void Always_57_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 2272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);

LAB4:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2172);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1092);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t7) == 0)
        goto LAB6;

LAB8:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB10:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1092);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB10;

}


extern void work_m_00000000002637505464_1296872438_init()
{
	static char *pe[] = {(void *)Initial_25_0,(void *)Always_29_1,(void *)Always_57_2};
	xsi_register_didat("work_m_00000000002637505464_1296872438", "isim/test_isim_beh.exe.sim/work/m_00000000002637505464_1296872438.didat");
	xsi_register_executes(pe);
}
