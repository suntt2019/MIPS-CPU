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
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD-P4-3/gpr_test.v";
static int ng1[] = {0, 0};
static const char *ng2 = " *GPR test started.";
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static const char *ng5 = "    Reset test:";
static int ng6[] = {32, 0};
static const char *ng7 = "      regs[%d]=%h == %h, regs[%d]=%h == %h";
static const char *ng8 = "Assertion Error";
static int ng9[] = {2, 0};
static unsigned int ng10[] = {1U, 0U};
static int ng11[] = {20, 0};
static unsigned int ng12[] = {4275835444U, 0U};
static const char *ng13 = "    Write test(WE=1): regs[%d]<-%h, regs[%d]=%h == %h";
static unsigned int ng14[] = {19088743U, 0U};
static const char *ng15 = "    Write test(WE=0): regs[%d]<-%h, regs[%d]=%h == %h";
static unsigned int ng16[] = {591751049U, 0U};
static const char *ng17 = "    Write test(EN=1, /*$0): regs[%d]<-%h, regs[%d]=%h == %h";*/
static unsigned int ng18[] = {305450479U, 0U};
static const char *ng19 = "    Flag test(FlagOp=Set): regs[%d]<-%h, regs[%d]=%h == %h";
static int ng20[] = {30, 0};
static const char *ng21 = "    Flag test(FlagOp=Dis): regs[%d]<-%h, regs[%d]=%h == %h";
static unsigned int ng22[] = {2U, 0U};
static int ng23[] = {21, 0};
static unsigned int ng24[] = {2557891634U, 0U};
static unsigned int ng25[] = {303182900U, 0U};
static const char *ng26 = "    Flag test(FlagOp=SetAndWr): regs[%d]<-%h, regs[%d]=%h == %h, NFlag=%h, Flag=%h == %h";
static const char *ng27 = " *GPR test finished.";



static void Initial_34_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(34, ng0);

LAB2:    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1104);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1196);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_38_1(char *t0)
{
    char t6[8];
    char t20[8];
    char t21[8];
    char t25[8];
    char t26[8];
    char t33[8];
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
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;

LAB0:    t1 = (t0 + 2692U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3032);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(45, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(46, ng0);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB7:    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
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

LAB9:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1564);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB8:    xsi_set_current_line(46, ng0);

LAB10:    xsi_set_current_line(47, ng0);
    t13 = (t0 + 2024);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = (t0 + 1564);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 5);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1656);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 2024);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 692U);
    t13 = *((char **)t7);
    t7 = ((char*)((ng3)));
    t14 = (t0 + 2024);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t16, 32, t17, 32);
    t18 = (t0 + 784U);
    t19 = *((char **)t18);
    t18 = ((char*)((ng3)));
    xsi_vlogfile_write(1, 0, 0, ng7, 7, t0, (char)119, t5, 32, (char)118, t13, 32, (char)118, t7, 32, (char)119, t6, 32, (char)118, t19, 32, (char)118, t18, 32);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t20, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB14;

LAB12:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB14;

LAB13:    *((unsigned int *)t20) = 1;

LAB14:    memset(t21, 0, 8);
    t7 = (t20 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t20);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t7) != 0)
        goto LAB17;

LAB18:    t14 = (t21 + 4);
    t22 = *((unsigned int *)t21);
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB19;

LAB20:    memcpy(t33, t21, 8);

LAB21:    memset(t6, 0, 8);
    t65 = (t33 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t33);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t65) == 0)
        goto LAB32;

LAB34:    t71 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t71) = 1;

LAB35:    t72 = (t6 + 4);
    t73 = (t33 + 4);
    t74 = *((unsigned int *)t33);
    t75 = (~(t74));
    *((unsigned int *)t6) = t75;
    *((unsigned int *)t72) = 0;
    if (*((unsigned int *)t73) != 0)
        goto LAB37;

LAB36:    t80 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t80 & 1U);
    t81 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t81 & 1U);
    t82 = (t6 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t6);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB38;

LAB39:
LAB40:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB7;

LAB15:    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB17:    t13 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB18;

LAB19:    t15 = (t0 + 784U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng3)));
    memset(t25, 0, 8);
    if (*((unsigned int *)t16) != *((unsigned int *)t15))
        goto LAB24;

LAB22:    t17 = (t16 + 4);
    t18 = (t15 + 4);
    if (*((unsigned int *)t17) != *((unsigned int *)t18))
        goto LAB24;

LAB23:    *((unsigned int *)t25) = 1;

LAB24:    memset(t26, 0, 8);
    t19 = (t25 + 4);
    t27 = *((unsigned int *)t19);
    t28 = (~(t27));
    t29 = *((unsigned int *)t25);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t19) != 0)
        goto LAB27;

LAB28:    t34 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t26);
    t36 = (t34 & t35);
    *((unsigned int *)t33) = t36;
    t37 = (t21 + 4);
    t38 = (t26 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB21;

LAB25:    *((unsigned int *)t26) = 1;
    goto LAB28;

LAB27:    t32 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB28;

LAB29:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t21 + 4);
    t48 = (t26 + 4);
    t49 = *((unsigned int *)t21);
    t50 = (~(t49));
    t51 = *((unsigned int *)t47);
    t52 = (~(t51));
    t53 = *((unsigned int *)t26);
    t54 = (~(t53));
    t55 = *((unsigned int *)t48);
    t56 = (~(t55));
    t57 = (t50 & t52);
    t58 = (t54 & t56);
    t59 = (~(t57));
    t60 = (~(t58));
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t61 & t59);
    t62 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t62 & t60);
    t63 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t63 & t59);
    t64 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t64 & t60);
    goto LAB31;

LAB32:    *((unsigned int *)t6) = 1;
    goto LAB35;

LAB37:    t76 = *((unsigned int *)t6);
    t77 = *((unsigned int *)t73);
    *((unsigned int *)t6) = (t76 | t77);
    t78 = *((unsigned int *)t72);
    t79 = *((unsigned int *)t73);
    *((unsigned int *)t72) = (t78 | t79);
    goto LAB36;

LAB38:    xsi_set_current_line(49, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB40;

LAB41:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1748);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 1840);
    t13 = (t7 + 36U);
    t14 = *((char **)t13);
    t15 = (t0 + 1748);
    t16 = (t15 + 36U);
    t17 = *((char **)t16);
    t18 = (t0 + 692U);
    t19 = *((char **)t18);
    t18 = (t0 + 1840);
    t32 = (t18 + 36U);
    t37 = *((char **)t32);
    xsi_vlogfile_write(1, 0, 0, ng13, 6, t0, (char)118, t5, 5, (char)118, t14, 32, (char)118, t17, 5, (char)118, t19, 32, (char)118, t37, 32);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1840);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t20, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t5))
        goto LAB44;

LAB42:    t7 = (t3 + 4);
    t13 = (t5 + 4);
    if (*((unsigned int *)t7) != *((unsigned int *)t13))
        goto LAB44;

LAB43:    *((unsigned int *)t20) = 1;

LAB44:    memset(t6, 0, 8);
    t14 = (t20 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t20);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB48;

LAB46:    if (*((unsigned int *)t14) == 0)
        goto LAB45;

LAB47:    t15 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t15) = 1;

LAB48:    t16 = (t6 + 4);
    t17 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    *((unsigned int *)t6) = t23;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB50;

LAB49:    t30 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t30 & 1U);
    t31 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t31 & 1U);
    t18 = (t6 + 4);
    t34 = *((unsigned int *)t18);
    t35 = (~(t34));
    t36 = *((unsigned int *)t6);
    t40 = (t36 & t35);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB51;

LAB52:
LAB53:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1564);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB45:    *((unsigned int *)t6) = 1;
    goto LAB48;

LAB50:    t24 = *((unsigned int *)t6);
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t6) = (t24 | t27);
    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t28 | t29);
    goto LAB49;

LAB51:    xsi_set_current_line(55, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB53;

LAB54:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1748);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 1840);
    t13 = (t7 + 36U);
    t14 = *((char **)t13);
    t15 = (t0 + 1748);
    t16 = (t15 + 36U);
    t17 = *((char **)t16);
    t18 = (t0 + 692U);
    t19 = *((char **)t18);
    t18 = ((char*)((ng12)));
    xsi_vlogfile_write(1, 0, 0, ng15, 6, t0, (char)118, t5, 5, (char)118, t14, 32, (char)118, t17, 5, (char)118, t19, 32, (char)118, t18, 32);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t20, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB57;

LAB55:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB57;

LAB56:    *((unsigned int *)t20) = 1;

LAB57:    memset(t6, 0, 8);
    t7 = (t20 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t20);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB61;

LAB59:    if (*((unsigned int *)t7) == 0)
        goto LAB58;

LAB60:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB61:    t14 = (t6 + 4);
    t15 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    *((unsigned int *)t6) = t23;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB63;

LAB62:    t30 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t30 & 1U);
    t31 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t31 & 1U);
    t16 = (t6 + 4);
    t34 = *((unsigned int *)t16);
    t35 = (~(t34));
    t36 = *((unsigned int *)t6);
    t40 = (t36 & t35);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB64;

LAB65:
LAB66:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1564);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB58:    *((unsigned int *)t6) = 1;
    goto LAB61;

LAB63:    t24 = *((unsigned int *)t6);
    t27 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t24 | t27);
    t28 = *((unsigned int *)t14);
    t29 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t28 | t29);
    goto LAB62;

LAB64:    xsi_set_current_line(59, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB66;

LAB67:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1748);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 1840);
    t13 = (t7 + 36U);
    t14 = *((char **)t13);
    t15 = (t0 + 1748);
    t16 = (t15 + 36U);
    t17 = *((char **)t16);
    t18 = (t0 + 692U);
    t19 = *((char **)t18);
    t18 = ((char*)((ng3)));
    xsi_vlogfile_write(1, 0, 0, ng17, 6, t0, (char)118, t5, 5, (char)118, t14, 32, (char)118, t17, 5, (char)118, t19, 32, (char)118, t18, 32);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t20, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB70;

LAB68:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB70;

LAB69:    *((unsigned int *)t20) = 1;

LAB70:    memset(t6, 0, 8);
    t7 = (t20 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t20);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB74;

LAB72:    if (*((unsigned int *)t7) == 0)
        goto LAB71;

LAB73:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB74:    t14 = (t6 + 4);
    t15 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    *((unsigned int *)t6) = t23;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB76;

LAB75:    t30 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t30 & 1U);
    t31 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t31 & 1U);
    t16 = (t6 + 4);
    t34 = *((unsigned int *)t16);
    t35 = (~(t34));
    t36 = *((unsigned int *)t6);
    t40 = (t36 & t35);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB77;

LAB78:
LAB79:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB71:    *((unsigned int *)t6) = 1;
    goto LAB74;

LAB76:    t24 = *((unsigned int *)t6);
    t27 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t24 | t27);
    t28 = *((unsigned int *)t14);
    t29 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t28 | t29);
    goto LAB75;

LAB77:    xsi_set_current_line(63, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB79;

LAB80:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1932);
    t5 = (t4 + 36U);
    t7 = *((char **)t5);
    t13 = ((char*)((ng20)));
    t14 = (t0 + 876U);
    t15 = *((char **)t14);
    t14 = (t0 + 1932);
    t16 = (t14 + 36U);
    t17 = *((char **)t16);
    xsi_vlogfile_write(1, 0, 0, ng19, 6, t0, (char)119, t3, 32, (char)118, t7, 32, (char)119, t13, 32, (char)118, t15, 32, (char)118, t17, 32);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 1932);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t20, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t5))
        goto LAB83;

LAB81:    t7 = (t3 + 4);
    t13 = (t5 + 4);
    if (*((unsigned int *)t7) != *((unsigned int *)t13))
        goto LAB83;

LAB82:    *((unsigned int *)t20) = 1;

LAB83:    memset(t6, 0, 8);
    t14 = (t20 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t20);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB87;

LAB85:    if (*((unsigned int *)t14) == 0)
        goto LAB84;

LAB86:    t15 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t15) = 1;

LAB87:    t16 = (t6 + 4);
    t17 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    *((unsigned int *)t6) = t23;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB89;

LAB88:    t30 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t30 & 1U);
    t31 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t31 & 1U);
    t18 = (t6 + 4);
    t34 = *((unsigned int *)t18);
    t35 = (~(t34));
    t36 = *((unsigned int *)t6);
    t40 = (t36 & t35);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB90;

LAB91:
LAB92:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB93;
    goto LAB1;

LAB84:    *((unsigned int *)t6) = 1;
    goto LAB87;

LAB89:    t24 = *((unsigned int *)t6);
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t6) = (t24 | t27);
    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t28 | t29);
    goto LAB88;

LAB90:    xsi_set_current_line(68, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB92;

LAB93:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1932);
    t5 = (t4 + 36U);
    t7 = *((char **)t5);
    t13 = ((char*)((ng20)));
    t14 = (t0 + 876U);
    t15 = *((char **)t14);
    t14 = ((char*)((ng18)));
    xsi_vlogfile_write(1, 0, 0, ng21, 6, t0, (char)119, t3, 32, (char)118, t7, 32, (char)119, t13, 32, (char)118, t15, 32, (char)118, t14, 32);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng18)));
    memset(t20, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB96;

LAB94:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB96;

LAB95:    *((unsigned int *)t20) = 1;

LAB96:    memset(t6, 0, 8);
    t7 = (t20 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t20);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB100;

LAB98:    if (*((unsigned int *)t7) == 0)
        goto LAB97;

LAB99:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB100:    t14 = (t6 + 4);
    t15 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    *((unsigned int *)t6) = t23;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB102;

LAB101:    t30 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t30 & 1U);
    t31 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t31 & 1U);
    t16 = (t6 + 4);
    t34 = *((unsigned int *)t16);
    t35 = (~(t34));
    t36 = *((unsigned int *)t6);
    t40 = (t36 & t35);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB103;

LAB104:
LAB105:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1564);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB106;
    goto LAB1;

LAB97:    *((unsigned int *)t6) = 1;
    goto LAB100;

LAB102:    t24 = *((unsigned int *)t6);
    t27 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t24 | t27);
    t28 = *((unsigned int *)t14);
    t29 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t28 | t29);
    goto LAB101;

LAB103:    xsi_set_current_line(73, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB105;

LAB106:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 1748);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 1840);
    t13 = (t7 + 36U);
    t14 = *((char **)t13);
    t15 = (t0 + 1748);
    t16 = (t15 + 36U);
    t17 = *((char **)t16);
    t18 = (t0 + 692U);
    t19 = *((char **)t18);
    t18 = (t0 + 1840);
    t32 = (t18 + 36U);
    t37 = *((char **)t32);
    t38 = (t0 + 1932);
    t39 = (t38 + 36U);
    t47 = *((char **)t39);
    t48 = (t0 + 876U);
    t65 = *((char **)t48);
    t48 = (t0 + 1932);
    t71 = (t48 + 36U);
    t72 = *((char **)t71);
    xsi_vlogfile_write(1, 0, 0, ng26, 9, t0, (char)118, t5, 5, (char)118, t14, 32, (char)118, t17, 5, (char)118, t19, 32, (char)118, t37, 32, (char)118, t47, 32, (char)118, t65, 32, (char)118, t72, 32);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1840);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t20, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t5))
        goto LAB109;

LAB107:    t7 = (t3 + 4);
    t13 = (t5 + 4);
    if (*((unsigned int *)t7) != *((unsigned int *)t13))
        goto LAB109;

LAB108:    *((unsigned int *)t20) = 1;

LAB109:    memset(t21, 0, 8);
    t14 = (t20 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t20);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t14) != 0)
        goto LAB112;

LAB113:    t16 = (t21 + 4);
    t22 = *((unsigned int *)t21);
    t23 = *((unsigned int *)t16);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB114;

LAB115:    memcpy(t33, t21, 8);

LAB116:    memset(t6, 0, 8);
    t82 = (t33 + 4);
    t66 = *((unsigned int *)t82);
    t67 = (~(t66));
    t68 = *((unsigned int *)t33);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB130;

LAB128:    if (*((unsigned int *)t82) == 0)
        goto LAB127;

LAB129:    t88 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t88) = 1;

LAB130:    t89 = (t6 + 4);
    t90 = (t33 + 4);
    t74 = *((unsigned int *)t33);
    t75 = (~(t74));
    *((unsigned int *)t6) = t75;
    *((unsigned int *)t89) = 0;
    if (*((unsigned int *)t90) != 0)
        goto LAB132;

LAB131:    t80 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t80 & 1U);
    t81 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t81 & 1U);
    t91 = (t6 + 4);
    t83 = *((unsigned int *)t91);
    t84 = (~(t83));
    t85 = *((unsigned int *)t6);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB133;

LAB134:
LAB135:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    xsi_vlogfile_write(1, 0, 0, ng27, 1, t0);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

LAB110:    *((unsigned int *)t21) = 1;
    goto LAB113;

LAB112:    t15 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB113;

LAB114:    t17 = (t0 + 876U);
    t18 = *((char **)t17);
    t17 = (t0 + 1932);
    t19 = (t17 + 36U);
    t32 = *((char **)t19);
    memset(t25, 0, 8);
    if (*((unsigned int *)t18) != *((unsigned int *)t32))
        goto LAB119;

LAB117:    t37 = (t18 + 4);
    t38 = (t32 + 4);
    if (*((unsigned int *)t37) != *((unsigned int *)t38))
        goto LAB119;

LAB118:    *((unsigned int *)t25) = 1;

LAB119:    memset(t26, 0, 8);
    t39 = (t25 + 4);
    t27 = *((unsigned int *)t39);
    t28 = (~(t27));
    t29 = *((unsigned int *)t25);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t39) != 0)
        goto LAB122;

LAB123:    t34 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t26);
    t36 = (t34 & t35);
    *((unsigned int *)t33) = t36;
    t48 = (t21 + 4);
    t65 = (t26 + 4);
    t71 = (t33 + 4);
    t40 = *((unsigned int *)t48);
    t41 = *((unsigned int *)t65);
    t42 = (t40 | t41);
    *((unsigned int *)t71) = t42;
    t43 = *((unsigned int *)t71);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB124;

LAB125:
LAB126:    goto LAB116;

LAB120:    *((unsigned int *)t26) = 1;
    goto LAB123;

LAB122:    t47 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB123;

LAB124:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t71);
    *((unsigned int *)t33) = (t45 | t46);
    t72 = (t21 + 4);
    t73 = (t26 + 4);
    t49 = *((unsigned int *)t21);
    t50 = (~(t49));
    t51 = *((unsigned int *)t72);
    t52 = (~(t51));
    t53 = *((unsigned int *)t26);
    t54 = (~(t53));
    t55 = *((unsigned int *)t73);
    t56 = (~(t55));
    t57 = (t50 & t52);
    t58 = (t54 & t56);
    t59 = (~(t57));
    t60 = (~(t58));
    t61 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t61 & t59);
    t62 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t62 & t60);
    t63 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t63 & t59);
    t64 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t64 & t60);
    goto LAB126;

LAB127:    *((unsigned int *)t6) = 1;
    goto LAB130;

LAB132:    t76 = *((unsigned int *)t6);
    t77 = *((unsigned int *)t90);
    *((unsigned int *)t6) = (t76 | t77);
    t78 = *((unsigned int *)t89);
    t79 = *((unsigned int *)t90);
    *((unsigned int *)t89) = (t78 | t79);
    goto LAB131;

LAB133:    xsi_set_current_line(78, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB135;

}

static void Always_85_2(char *t0)
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

LAB0:    t1 = (t0 + 2836U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);

LAB4:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2736);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 1196);
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
    t24 = (t0 + 1196);
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


extern void work_m_00000000000411150654_3761321980_init()
{
	static char *pe[] = {(void *)Initial_34_0,(void *)Always_38_1,(void *)Always_85_2};
	xsi_register_didat("work_m_00000000000411150654_3761321980", "isim/test_isim_beh.exe.sim/work/m_00000000000411150654_3761321980.didat");
	xsi_register_executes(pe);
}
