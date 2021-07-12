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
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD/ise/p3_test.v";
static int ng1[] = {0, 0};
static const char *ng2 = " *P3 test started.";
static int ng3[] = {1, 0};
static const char *ng4 = "      Read from file.";
static const char *ng5 = "../overall_test/p3-test-main.txt";
static unsigned int ng6[] = {12288U, 0U};
static const char *ng7 = "../overall_test/p3-test-int.txt";
static unsigned int ng8[] = {16768U, 0U};
static const char *ng9 = "      Reset finished.";
static const char *ng10 = "      Start running";
static unsigned int ng11[] = {419893520U, 0U};
static unsigned int ng12[] = {4294967295U, 4294967295U};
static int ng13[] = {40, 0};
static const char *ng14 = "../overall_test/p3-test-regs.txt";
static int ng15[] = {32, 0};
static const char *ng16 = "      regs[%d]=%h == %h";
static const char *ng17 = "Assertion Error";
static int ng18[] = {100, 0};
static unsigned int ng19[] = {65536U, 0U};
static int ng20[] = {10, 0};
static unsigned int ng21[] = {1U, 0U};
static unsigned int ng22[] = {2U, 0U};
static const char *ng23 = "      Out=%h";
static const char *ng24 = "      t=%d,Step[%d], PC=%h, StoredInstruction=%h, status=%h signals=%b, last instr: regs[%d]=%h";
static const char *ng25 = " *P3 test finished.";
static int ng26[] = {5, 0};



static void Initial_29_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 920);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1012);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_33_1(char *t0)
{
    char t6[8];
    char t20[8];
    char t21[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2808);
    *((int *)t2) = 1;
    t3 = (t0 + 2352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4092);
    t3 = *((char **)t2);
    t4 = ((char*)((ng6)));
    xsi_vlogfile_readmemh(ng5, 0, ((char*)(t3)), 1, *((unsigned int *)t4), 0, 0);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4116);
    t3 = *((char **)t2);
    t4 = ((char*)((ng8)));
    xsi_vlogfile_readmemh(ng7, 0, ((char*)(t3)), 1, *((unsigned int *)t4), 0, 0);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2224);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(40, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(47, ng0);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB7:    t2 = (t0 + 4140);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 24U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng12)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB9;

LAB8:    t7 = (t5 + 4);
    t8 = (t4 + 4);
    if (*((unsigned int *)t7) != *((unsigned int *)t8))
        goto LAB9;

LAB10:    t9 = (t6 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t7 = (t5 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 4388);
    t15 = *((char **)t9);
    t16 = ((((char*)(t15))) + 24U);
    t17 = *((char **)t16);
    t16 = (t0 + 4420);
    t18 = *((char **)t16);
    t19 = ((((char*)(t18))) + 24U);
    t22 = *((char **)t19);
    t19 = (t0 + 4444);
    t23 = *((char **)t19);
    t24 = ((((char*)(t23))) + 36U);
    t30 = *((char **)t24);
    t31 = (t0 + 4468);
    t32 = *((char **)t31);
    t33 = ((((char*)(t32))) + 36U);
    t34 = *((char **)t33);
    t35 = (t0 + 1564);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    t38 = (t0 + 4492);
    t39 = *((char **)t38);
    t40 = ((((char*)(t39))) + 36U);
    t41 = *((char **)t40);
    t42 = (t0 + 4516);
    t43 = *((char **)t42);
    t44 = ((((char*)(t43))) + 44U);
    t45 = *((char **)t44);
    t46 = (t0 + 4540);
    t47 = *((char **)t46);
    t48 = ((((char*)(t47))) + 40U);
    t49 = *((char **)t48);
    t59 = (t0 + 1564);
    t60 = (t59 + 36U);
    t61 = *((char **)t60);
    xsi_vlog_generic_get_array_select_value(t6, 32, t41, t45, t49, 2, 1, t61, 5, 2);
    xsi_vlogfile_write(1, 0, 0, ng24, 9, t0, (char)119, t4, 32, (char)119, t8, 32, (char)118, t17, 32, (char)118, t22, 32, (char)118, t30, 5, (char)118, t34, 26, (char)118, t37, 5, (char)118, t6, 32);
    xsi_set_current_line(76, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

LAB9:    *((unsigned int *)t6) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(47, ng0);

LAB13:    xsi_set_current_line(52, ng0);
    t15 = (t0 + 4156);
    t16 = *((char **)t15);
    t17 = ((((char*)(t16))) + 24U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng6)));
    t19 = ((char*)((ng13)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t17, 32, t19, 32);
    memset(t21, 0, 8);
    if (*((unsigned int *)t18) != *((unsigned int *)t20))
        goto LAB16;

LAB14:    t22 = (t18 + 4);
    t23 = (t20 + 4);
    if (*((unsigned int *)t22) != *((unsigned int *)t23))
        goto LAB16;

LAB15:    *((unsigned int *)t21) = 1;

LAB16:    t24 = (t21 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t21);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng18)));
    memset(t6, 0, 8);
    xsi_vlog_signed_mod(t6, 32, t4, 32, t5, 32);
    t7 = ((char*)((ng1)));
    memset(t20, 0, 8);
    xsi_vlog_signed_case_eq(t20, 32, t6, 32, t7, 32);
    t8 = (t20 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t20);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4316);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 1564);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 5);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2224);
    xsi_process_wait(t2, 9000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB17:    xsi_set_current_line(52, ng0);

LAB20:    xsi_set_current_line(53, ng0);
    t30 = (t0 + 1656);
    xsi_vlogfile_readmemh(ng14, 0, t30, 0, 0, 0, 0);
    xsi_set_current_line(54, ng0);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB21:    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng15)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB22;

LAB23:    goto LAB19;

LAB22:    xsi_set_current_line(54, ng0);

LAB24:    xsi_set_current_line(55, ng0);
    t8 = (t0 + 1288);
    t9 = (t8 + 36U);
    t15 = *((char **)t9);
    t16 = (t0 + 4180);
    t17 = *((char **)t16);
    t18 = ((((char*)(t17))) + 36U);
    t19 = *((char **)t18);
    t22 = (t0 + 4204);
    t23 = *((char **)t22);
    t24 = ((((char*)(t23))) + 44U);
    t30 = *((char **)t24);
    t31 = (t0 + 4228);
    t32 = *((char **)t31);
    t33 = ((((char*)(t32))) + 40U);
    t34 = *((char **)t33);
    t35 = (t0 + 1288);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    xsi_vlog_generic_get_array_select_value(t20, 32, t19, t30, t34, 2, 1, t37, 32, 1);
    t38 = (t0 + 1656);
    t39 = (t38 + 36U);
    t40 = *((char **)t39);
    t41 = (t0 + 1656);
    t42 = (t41 + 44U);
    t43 = *((char **)t42);
    t44 = (t0 + 1656);
    t45 = (t44 + 40U);
    t46 = *((char **)t45);
    t47 = (t0 + 1288);
    t48 = (t47 + 36U);
    t49 = *((char **)t48);
    xsi_vlog_generic_get_array_select_value(t21, 32, t40, t43, t46, 2, 1, t49, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng16, 4, t0, (char)119, t15, 32, (char)118, t20, 32, (char)118, t21, 32);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4252);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 4276);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 44U);
    t15 = *((char **)t9);
    t16 = (t0 + 4300);
    t17 = *((char **)t16);
    t18 = ((((char*)(t17))) + 40U);
    t19 = *((char **)t18);
    t22 = (t0 + 1288);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_array_select_value(t20, 32, t5, t15, t19, 2, 1, t24, 32, 1);
    t30 = (t0 + 1656);
    t31 = (t30 + 36U);
    t32 = *((char **)t31);
    t33 = (t0 + 1656);
    t34 = (t33 + 44U);
    t35 = *((char **)t34);
    t36 = (t0 + 1656);
    t37 = (t36 + 40U);
    t38 = *((char **)t37);
    t39 = (t0 + 1288);
    t40 = (t39 + 36U);
    t41 = *((char **)t40);
    xsi_vlog_generic_get_array_select_value(t21, 32, t32, t35, t38, 2, 1, t41, 32, 1);
    memset(t50, 0, 8);
    if (*((unsigned int *)t20) != *((unsigned int *)t21))
        goto LAB27;

LAB25:    t42 = (t20 + 4);
    t43 = (t21 + 4);
    if (*((unsigned int *)t42) != *((unsigned int *)t43))
        goto LAB27;

LAB26:    *((unsigned int *)t50) = 1;

LAB27:    memset(t6, 0, 8);
    t44 = (t50 + 4);
    t10 = *((unsigned int *)t44);
    t11 = (~(t10));
    t12 = *((unsigned int *)t50);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t44) == 0)
        goto LAB28;

LAB30:    t45 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t45) = 1;

LAB31:    t46 = (t6 + 4);
    t47 = (t50 + 4);
    t25 = *((unsigned int *)t50);
    t26 = (~(t25));
    *((unsigned int *)t6) = t26;
    *((unsigned int *)t46) = 0;
    if (*((unsigned int *)t47) != 0)
        goto LAB33;

LAB32:    t52 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t52 & 1U);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 & 1U);
    t48 = (t6 + 4);
    t54 = *((unsigned int *)t48);
    t55 = (~(t54));
    t56 = *((unsigned int *)t6);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB34;

LAB35:
LAB36:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1288);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB21;

LAB28:    *((unsigned int *)t6) = 1;
    goto LAB31;

LAB33:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t47);
    *((unsigned int *)t6) = (t27 | t28);
    t29 = *((unsigned int *)t46);
    t51 = *((unsigned int *)t47);
    *((unsigned int *)t46) = (t29 | t51);
    goto LAB32;

LAB34:    xsi_set_current_line(56, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    goto LAB36;

LAB37:    xsi_set_current_line(62, ng0);
    t9 = (t0 + 1196);
    t15 = (t9 + 36U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng19)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 32, t16, 32, t17, 32);
    t18 = (t0 + 1196);
    xsi_vlogvar_assign_value(t18, t21, 0, 0, 32);
    goto LAB39;

LAB40:    xsi_set_current_line(66, ng0);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB41:    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng20)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1288);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB7;

LAB42:    xsi_set_current_line(66, ng0);

LAB44:    xsi_set_current_line(67, ng0);
    t8 = (t0 + 4340);
    t9 = *((char **)t8);
    t15 = ((((char*)(t9))) + 36U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng21)));
    memset(t20, 0, 8);
    if (*((unsigned int *)t16) != *((unsigned int *)t17))
        goto LAB46;

LAB45:    t18 = (t16 + 4);
    t19 = (t17 + 4);
    if (*((unsigned int *)t18) != *((unsigned int *)t19))
        goto LAB46;

LAB47:    t22 = (t20 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB48;

LAB49:
LAB50:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1472);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB41;

LAB46:    *((unsigned int *)t20) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(67, ng0);

LAB51:    xsi_set_current_line(68, ng0);
    t23 = (t0 + 2224);
    xsi_process_wait(t23, 10000LL);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB52:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4356);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 24U);
    t5 = *((char **)t4);
    t4 = (t0 + 4372);
    t7 = *((char **)t4);
    t8 = ((((char*)(t7))) + 44U);
    t9 = *((char **)t8);
    t15 = ((char*)((ng22)));
    xsi_vlog_generic_get_index_select_value(t6, 1, t5, t9, 2, t15, 2, 2);
    t16 = (t6 + 4);
    t10 = *((unsigned int *)t16);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB53;

LAB54:
LAB55:    goto LAB50;

LAB53:    xsi_set_current_line(69, ng0);
    t17 = (t0 + 692U);
    t18 = *((char **)t17);
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)118, t18, 32);
    goto LAB55;

}

static void Always_80_2(char *t0)
{
    char t13[8];
    char t14[8];
    char t16[8];
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
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 2468U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2816);
    *((int *)t2) = 1;
    t3 = (t0 + 2496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(83, ng0);

LAB10:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2368);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:    xsi_set_current_line(81, ng0);

LAB9:    xsi_set_current_line(82, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1012);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);

LAB8:    goto LAB2;

LAB11:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 1380);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng26)));
    memset(t13, 0, 8);
    xsi_vlog_signed_mod(t13, 32, t5, 32, t11, 32);
    t12 = ((char*)((ng1)));
    memset(t14, 0, 8);
    xsi_vlog_signed_case_eq(t14, 32, t13, 32, t12, 32);
    t15 = (t14 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:
LAB14:    goto LAB8;

LAB12:    xsi_set_current_line(84, ng0);
    t17 = (t0 + 1012);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    memset(t16, 0, 8);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t20) == 0)
        goto LAB15;

LAB17:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;

LAB18:    t27 = (t16 + 4);
    t28 = (t19 + 4);
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    *((unsigned int *)t16) = t30;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB20;

LAB19:    t35 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t35 & 1U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 & 1U);
    t37 = (t0 + 1012);
    xsi_vlogvar_assign_value(t37, t16, 0, 0, 1);
    goto LAB14;

LAB15:    *((unsigned int *)t16) = 1;
    goto LAB18;

LAB20:    t31 = *((unsigned int *)t16);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t16) = (t31 | t32);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t33 | t34);
    goto LAB19;

}

static void Always_88_3(char *t0)
{
    char t3[8];
    char t34[8];
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
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;

LAB0:    t1 = (t0 + 2612U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);

LAB4:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2512);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 920);
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
    t24 = (t3 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t3);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB10;

LAB12:    xsi_set_current_line(89, ng0);
    t30 = (t0 + 1380);
    t31 = (t30 + 36U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng3)));
    memset(t34, 0, 8);
    xsi_vlog_signed_add(t34, 32, t32, 32, t33, 32);
    t35 = (t0 + 1380);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 32);
    goto LAB14;

}


extern void work_m_00000000003154920071_3898172076_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_33_1,(void *)Always_80_2,(void *)Always_88_3};
	xsi_register_didat("work_m_00000000003154920071_3898172076", "isim/test_isim_beh.exe.sim/work/m_00000000003154920071_3898172076.didat");
	xsi_register_executes(pe);
}
