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
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD-P4-9(FINAL)_2MHz/divider.v";
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {1, 0, 0, 0};



static void Always_7_0(char *t0)
{
    char t13[16];
    char t14[16];
    char t15[8];
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 2824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(7, ng0);
    t2 = (t0 + 3144);
    *((int *)t2) = 1;
    t3 = (t0 + 2856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(7, ng0);

LAB5:    xsi_set_current_line(8, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(13, ng0);

LAB10:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t11 = *((char **)t5);
    t5 = ((char*)((ng3)));
    xsi_vlog_unsigned_rshift(t13, 35, t11, 32, t5, 32);
    xsi_vlog_unsigned_equal(t14, 35, t4, 35, t13, 35);
    t12 = (t14 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(17, ng0);

LAB21:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    xsi_vlog_unsigned_add(t13, 35, t4, 35, t5, 32);
    t11 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 35, 0LL);

LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(8, ng0);

LAB9:    xsi_set_current_line(10, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 35, 0LL);
    xsi_set_current_line(11, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(14, ng0);

LAB14:    xsi_set_current_line(15, ng0);
    t16 = (t0 + 1744);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t15, 0, 8);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t19) == 0)
        goto LAB15;

LAB17:    t25 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t25) = 1;

LAB18:    t26 = (t15 + 4);
    t27 = (t18 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    *((unsigned int *)t15) = t29;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB20;

LAB19:    t34 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t34 & 1U);
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 1U);
    t36 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t36, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(16, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    goto LAB13;

LAB15:    *((unsigned int *)t15) = 1;
    goto LAB18;

LAB20:    t30 = *((unsigned int *)t15);
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t15) = (t30 | t31);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t32 | t33);
    goto LAB19;

}


extern void work_m_00000000002850664343_3617228756_init()
{
	static char *pe[] = {(void *)Always_7_0};
	xsi_register_didat("work_m_00000000002850664343_3617228756", "isim/practical_test_isim_beh.exe.sim/work/m_00000000002850664343_3617228756.didat");
	xsi_register_executes(pe);
}
