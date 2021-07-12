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
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD/ise/ext_test.v";
static int ng1[] = {0, 0};
static const char *ng2 = " *EXT test started.";
static unsigned int ng3[] = {65076U, 0U};
static unsigned int ng4[] = {0U, 0U};
static const char *ng5 = "    zero-ext test: %h -> %h == %h";
static const char *ng6 = "Assertion Error";
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {4294966836U, 0U};
static const char *ng9 = "    sign-ext test: %h -> %h == %h";
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {4264820736U, 0U};
static const char *ng12 = "    lui-ext test: %h -> %h == %h";
static const char *ng13 = " *EXT test finished.";
static int ng14[] = {1, 0};



static void Initial_24_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(24, ng0);

LAB2:    xsi_set_current_line(25, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 920);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_28_1(char *t0)
{
    char t10[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;

LAB0:    t1 = (t0 + 1956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2152);
    *((int *)t2) = 1;
    t3 = (t0 + 1984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1012);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 692U);
    t7 = *((char **)t6);
    t6 = (t0 + 1288);
    t8 = (t6 + 36U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng5, 4, t0, (char)118, t5, 16, (char)118, t7, 32, (char)118, t9, 32);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1288);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t11, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB10;

LAB7:    if (t21 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t11) = 1;

LAB10:    memset(t10, 0, 8);
    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t9) == 0)
        goto LAB11;

LAB13:    t29 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t29) = 1;

LAB14:    t30 = (t10 + 4);
    t31 = (t11 + 4);
    t32 = *((unsigned int *)t11);
    t33 = (~(t32));
    *((unsigned int *)t10) = t33;
    *((unsigned int *)t30) = 0;
    if (*((unsigned int *)t31) != 0)
        goto LAB16;

LAB15:    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & 1U);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t39 & 1U);
    t40 = (t10 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t10);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB9:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB10;

LAB11:    *((unsigned int *)t10) = 1;
    goto LAB14;

LAB16:    t34 = *((unsigned int *)t10);
    t35 = *((unsigned int *)t31);
    *((unsigned int *)t10) = (t34 | t35);
    t36 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t31);
    *((unsigned int *)t30) = (t36 | t37);
    goto LAB15;

LAB17:    xsi_set_current_line(33, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    goto LAB19;

LAB20:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1012);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 692U);
    t7 = *((char **)t6);
    t6 = (t0 + 1288);
    t8 = (t6 + 36U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng9, 4, t0, (char)118, t5, 16, (char)118, t7, 32, (char)118, t9, 32);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1288);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t11, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB24;

LAB21:    if (t21 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t11) = 1;

LAB24:    memset(t10, 0, 8);
    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t9) == 0)
        goto LAB25;

LAB27:    t29 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t29) = 1;

LAB28:    t30 = (t10 + 4);
    t31 = (t11 + 4);
    t32 = *((unsigned int *)t11);
    t33 = (~(t32));
    *((unsigned int *)t10) = t33;
    *((unsigned int *)t30) = 0;
    if (*((unsigned int *)t31) != 0)
        goto LAB30;

LAB29:    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & 1U);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t39 & 1U);
    t40 = (t10 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t10);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB23:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t10) = 1;
    goto LAB28;

LAB30:    t34 = *((unsigned int *)t10);
    t35 = *((unsigned int *)t31);
    *((unsigned int *)t10) = (t34 | t35);
    t36 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t31);
    *((unsigned int *)t30) = (t36 | t37);
    goto LAB29;

LAB31:    xsi_set_current_line(37, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    goto LAB33;

LAB34:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1012);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 692U);
    t7 = *((char **)t6);
    t6 = (t0 + 1288);
    t8 = (t6 + 36U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng12, 4, t0, (char)118, t5, 16, (char)118, t7, 32, (char)118, t9, 32);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1288);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t11, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB38;

LAB35:    if (t21 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t11) = 1;

LAB38:    memset(t10, 0, 8);
    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB42;

LAB40:    if (*((unsigned int *)t9) == 0)
        goto LAB39;

LAB41:    t29 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t29) = 1;

LAB42:    t30 = (t10 + 4);
    t31 = (t11 + 4);
    t32 = *((unsigned int *)t11);
    t33 = (~(t32));
    *((unsigned int *)t10) = t33;
    *((unsigned int *)t30) = 0;
    if (*((unsigned int *)t31) != 0)
        goto LAB44;

LAB43:    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & 1U);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t39 & 1U);
    t40 = (t10 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t10);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB45;

LAB46:
LAB47:    xsi_set_current_line(43, ng0);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

LAB37:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t10) = 1;
    goto LAB42;

LAB44:    t34 = *((unsigned int *)t10);
    t35 = *((unsigned int *)t31);
    *((unsigned int *)t10) = (t34 | t35);
    t36 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t31);
    *((unsigned int *)t30) = (t36 | t37);
    goto LAB43;

LAB45:    xsi_set_current_line(41, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    goto LAB47;

}


extern void work_m_00000000003479592792_1201839611_init()
{
	static char *pe[] = {(void *)Initial_24_0,(void *)Always_28_1};
	xsi_register_didat("work_m_00000000003479592792_1201839611", "isim/test_isim_beh.exe.sim/work/m_00000000003479592792_1201839611.didat");
	xsi_register_executes(pe);
}
