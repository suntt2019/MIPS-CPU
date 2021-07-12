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
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD-P4-3/alu_test.v";
static int ng1[] = {0, 0};
static const char *ng2 = " *ALU test started.";
static int ng3[] = {300, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {2U, 0U};
static const char *ng7 = "    Zero test: %h(%d) - %h(%d) = %h(%d) == %h(%d), Flag = %h, NFlag = %h == %h";
static const char *ng8 = "Assertion Error";
static int ng9[] = {100, 0};
static int ng10[] = {200, 0};
static const char *ng11 = "    Add(not overflow) test:  %h(%d) + %h(%d) = %h(%d) == %h(%d), Flag = %h, NFlag = %h == %h";
static unsigned int ng12[] = {2147483647U, 0U};
static int ng13[] = {1, 0};
static unsigned int ng14[] = {2147483648U, 0U};
static const char *ng15 = "    Add(overflow) test:  %h(%d) + %h(%d) = %h(%d) == %h(%d), Flag = %h, NFlag = %h == %h";
static const char *ng16 = "    Sub(not overflow) test:  %h(%d) - %h(%d) = %h(%d) == %h(%d), Flag = %h, NFlag = %h == %h";
static unsigned int ng17[] = {1879048192U, 0U};
static unsigned int ng18[] = {2415919104U, 0U};
static unsigned int ng19[] = {3758096384U, 0U};
static unsigned int ng20[] = {64U, 0U};
static const char *ng21 = "    And test:  %h(%d) & %h(%d) = %h(%d) == %h(%d), Flag = %h, NFlag = %h == %h";
static unsigned int ng22[] = {3U, 0U};
static unsigned int ng23[] = {236U, 0U};
static const char *ng24 = "    Or test:   %h(%d) | %h(%d) = %h(%d) == %h(%d), Flag = %h, NFlag = %h == %h";
static unsigned int ng25[] = {4U, 0U};
static const char *ng26 = "    Less test:   %h(%d) < %h(%d) = %h(%d) == %h(%d), Flag = %h, NFlag = %h == %h";
static unsigned int ng27[] = {5U, 0U};
static const char *ng28 = "    B test:   %h(%d) = %h(%d) == %h(%d), Flag = %h, NFlag = %h == %h";
static const char *ng29 = " *ALU test finished.";



static void Initial_30_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1012);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_34_1(char *t0)
{
    char t30[8];
    char t31[8];
    char t32[8];
    char t41[8];
    char t42[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;

LAB0:    t1 = (t0 + 2416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2612);
    *((int *)t2) = 1;
    t3 = (t0 + 2444);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2316);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1104);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 1104);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = (t0 + 1196);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t15 = (t0 + 692U);
    t16 = *((char **)t15);
    t15 = (t0 + 692U);
    t17 = *((char **)t15);
    t15 = (t0 + 1656);
    t18 = (t15 + 36U);
    t19 = *((char **)t18);
    t20 = (t0 + 1656);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    t23 = (t0 + 1472);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    t26 = (t0 + 784U);
    t27 = *((char **)t26);
    t26 = (t0 + 1748);
    t28 = (t26 + 36U);
    t29 = *((char **)t28);
    xsi_vlogfile_write(1, 0, 0, ng7, 12, t0, (char)118, t5, 32, (char)118, t8, 32, (char)118, t11, 32, (char)118, t14, 32, (char)118, t16, 32, (char)118, t17, 32, (char)118, t19, 32, (char)118, t22, 32, (char)118, t25, 32, (char)118, t27, 32, (char)118, t29, 32);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1656);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t31, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t5))
        goto LAB9;

LAB7:    t6 = (t3 + 4);
    t7 = (t5 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB9;

LAB8:    *((unsigned int *)t31) = 1;

LAB9:    memset(t32, 0, 8);
    t8 = (t31 + 4);
    t33 = *((unsigned int *)t8);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t8) != 0)
        goto LAB12;

LAB13:    t10 = (t32 + 4);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t10);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB14;

LAB15:    memcpy(t48, t32, 8);

LAB16:    memset(t30, 0, 8);
    t24 = (t48 + 4);
    t75 = *((unsigned int *)t24);
    t76 = (~(t75));
    t77 = *((unsigned int *)t48);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t24) == 0)
        goto LAB27;

LAB29:    t25 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t25) = 1;

LAB30:    t26 = (t30 + 4);
    t27 = (t48 + 4);
    t80 = *((unsigned int *)t48);
    t81 = (~(t80));
    *((unsigned int *)t30) = t81;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB32;

LAB31:    t86 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t86 & 1U);
    t87 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t87 & 1U);
    t28 = (t30 + 4);
    t88 = *((unsigned int *)t28);
    t89 = (~(t88));
    t90 = *((unsigned int *)t30);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB33;

LAB34:
LAB35:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2316);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB10:    *((unsigned int *)t32) = 1;
    goto LAB13;

LAB12:    t9 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB13;

LAB14:    t11 = (t0 + 784U);
    t12 = *((char **)t11);
    t11 = (t0 + 1748);
    t13 = (t11 + 36U);
    t14 = *((char **)t13);
    memset(t41, 0, 8);
    if (*((unsigned int *)t12) != *((unsigned int *)t14))
        goto LAB19;

LAB17:    t15 = (t12 + 4);
    t16 = (t14 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t16))
        goto LAB19;

LAB18:    *((unsigned int *)t41) = 1;

LAB19:    memset(t42, 0, 8);
    t17 = (t41 + 4);
    t43 = *((unsigned int *)t17);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t17) != 0)
        goto LAB22;

LAB23:    t49 = *((unsigned int *)t32);
    t50 = *((unsigned int *)t42);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t19 = (t32 + 4);
    t20 = (t42 + 4);
    t21 = (t48 + 4);
    t52 = *((unsigned int *)t19);
    t53 = *((unsigned int *)t20);
    t54 = (t52 | t53);
    *((unsigned int *)t21) = t54;
    t55 = *((unsigned int *)t21);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB16;

LAB20:    *((unsigned int *)t42) = 1;
    goto LAB23;

LAB22:    t18 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB23;

LAB24:    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t21);
    *((unsigned int *)t48) = (t57 | t58);
    t22 = (t32 + 4);
    t23 = (t42 + 4);
    t59 = *((unsigned int *)t32);
    t60 = (~(t59));
    t61 = *((unsigned int *)t22);
    t62 = (~(t61));
    t63 = *((unsigned int *)t42);
    t64 = (~(t63));
    t65 = *((unsigned int *)t23);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t71 & t69);
    t72 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t72 & t70);
    t73 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t73 & t69);
    t74 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t74 & t70);
    goto LAB26;

LAB27:    *((unsigned int *)t30) = 1;
    goto LAB30;

LAB32:    t82 = *((unsigned int *)t30);
    t83 = *((unsigned int *)t27);
    *((unsigned int *)t30) = (t82 | t83);
    t84 = *((unsigned int *)t26);
    t85 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t84 | t85);
    goto LAB31;

LAB33:    xsi_set_current_line(42, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB35;

LAB36:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1104);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 1104);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = (t0 + 1196);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t15 = (t0 + 692U);
    t16 = *((char **)t15);
    t15 = (t0 + 692U);
    t17 = *((char **)t15);
    t15 = (t0 + 1656);
    t18 = (t15 + 36U);
    t19 = *((char **)t18);
    t20 = (t0 + 1656);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    t23 = (t0 + 1472);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    t26 = (t0 + 784U);
    t27 = *((char **)t26);
    t26 = (t0 + 1748);
    t28 = (t26 + 36U);
    t29 = *((char **)t28);
    xsi_vlogfile_write(1, 0, 0, ng11, 12, t0, (char)118, t5, 32, (char)118, t8, 32, (char)118, t11, 32, (char)118, t14, 32, (char)118, t16, 32, (char)118, t17, 32, (char)118, t19, 32, (char)118, t22, 32, (char)118, t25, 32, (char)118, t27, 32, (char)118, t29, 32);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1656);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t31, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t5))
        goto LAB39;

LAB37:    t6 = (t3 + 4);
    t7 = (t5 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB39;

LAB38:    *((unsigned int *)t31) = 1;

LAB39:    memset(t32, 0, 8);
    t8 = (t31 + 4);
    t33 = *((unsigned int *)t8);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t8) != 0)
        goto LAB42;

LAB43:    t10 = (t32 + 4);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t10);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB44;

LAB45:    memcpy(t48, t32, 8);

LAB46:    memset(t30, 0, 8);
    t24 = (t48 + 4);
    t75 = *((unsigned int *)t24);
    t76 = (~(t75));
    t77 = *((unsigned int *)t48);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB60;

LAB58:    if (*((unsigned int *)t24) == 0)
        goto LAB57;

LAB59:    t25 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t25) = 1;

LAB60:    t26 = (t30 + 4);
    t27 = (t48 + 4);
    t80 = *((unsigned int *)t48);
    t81 = (~(t80));
    *((unsigned int *)t30) = t81;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB62;

LAB61:    t86 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t86 & 1U);
    t87 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t87 & 1U);
    t28 = (t30 + 4);
    t88 = *((unsigned int *)t28);
    t89 = (~(t88));
    t90 = *((unsigned int *)t30);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB63;

LAB64:
LAB65:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2316);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB66;
    goto LAB1;

LAB40:    *((unsigned int *)t32) = 1;
    goto LAB43;

LAB42:    t9 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB43;

LAB44:    t11 = (t0 + 784U);
    t12 = *((char **)t11);
    t11 = (t0 + 1748);
    t13 = (t11 + 36U);
    t14 = *((char **)t13);
    memset(t41, 0, 8);
    if (*((unsigned int *)t12) != *((unsigned int *)t14))
        goto LAB49;

LAB47:    t15 = (t12 + 4);
    t16 = (t14 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t16))
        goto LAB49;

LAB48:    *((unsigned int *)t41) = 1;

LAB49:    memset(t42, 0, 8);
    t17 = (t41 + 4);
    t43 = *((unsigned int *)t17);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t17) != 0)
        goto LAB52;

LAB53:    t49 = *((unsigned int *)t32);
    t50 = *((unsigned int *)t42);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t19 = (t32 + 4);
    t20 = (t42 + 4);
    t21 = (t48 + 4);
    t52 = *((unsigned int *)t19);
    t53 = *((unsigned int *)t20);
    t54 = (t52 | t53);
    *((unsigned int *)t21) = t54;
    t55 = *((unsigned int *)t21);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB46;

LAB50:    *((unsigned int *)t42) = 1;
    goto LAB53;

LAB52:    t18 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB53;

LAB54:    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t21);
    *((unsigned int *)t48) = (t57 | t58);
    t22 = (t32 + 4);
    t23 = (t42 + 4);
    t59 = *((unsigned int *)t32);
    t60 = (~(t59));
    t61 = *((unsigned int *)t22);
    t62 = (~(t61));
    t63 = *((unsigned int *)t42);
    t64 = (~(t63));
    t65 = *((unsigned int *)t23);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t71 & t69);
    t72 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t72 & t70);
    t73 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t73 & t69);
    t74 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t74 & t70);
    goto LAB56;

LAB57:    *((unsigned int *)t30) = 1;
    goto LAB60;

LAB62:    t82 = *((unsigned int *)t30);
    t83 = *((unsigned int *)t27);
    *((unsigned int *)t30) = (t82 | t83);
    t84 = *((unsigned int *)t26);
    t85 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t84 | t85);
    goto LAB61;

LAB63:    xsi_set_current_line(49, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB65;

LAB66:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1104);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 1104);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = (t0 + 1196);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t15 = (t0 + 692U);
    t16 = *((char **)t15);
    t15 = (t0 + 692U);
    t17 = *((char **)t15);
    t15 = (t0 + 1656);
    t18 = (t15 + 36U);
    t19 = *((char **)t18);
    t20 = (t0 + 1656);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    t23 = (t0 + 1472);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    t26 = (t0 + 784U);
    t27 = *((char **)t26);
    t26 = (t0 + 1748);
    t28 = (t26 + 36U);
    t29 = *((char **)t28);
    xsi_vlogfile_write(1, 0, 0, ng15, 12, t0, (char)118, t5, 32, (char)118, t8, 32, (char)118, t11, 32, (char)118, t14, 32, (char)118, t16, 32, (char)118, t17, 32, (char)118, t19, 32, (char)118, t22, 32, (char)118, t25, 32, (char)118, t27, 32, (char)118, t29, 32);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1656);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t31, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t5))
        goto LAB69;

LAB67:    t6 = (t3 + 4);
    t7 = (t5 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB69;

LAB68:    *((unsigned int *)t31) = 1;

LAB69:    memset(t32, 0, 8);
    t8 = (t31 + 4);
    t33 = *((unsigned int *)t8);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t8) != 0)
        goto LAB72;

LAB73:    t10 = (t32 + 4);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t10);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB74;

LAB75:    memcpy(t48, t32, 8);

LAB76:    memset(t30, 0, 8);
    t24 = (t48 + 4);
    t75 = *((unsigned int *)t24);
    t76 = (~(t75));
    t77 = *((unsigned int *)t48);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB90;

LAB88:    if (*((unsigned int *)t24) == 0)
        goto LAB87;

LAB89:    t25 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t25) = 1;

LAB90:    t26 = (t30 + 4);
    t27 = (t48 + 4);
    t80 = *((unsigned int *)t48);
    t81 = (~(t80));
    *((unsigned int *)t30) = t81;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB92;

LAB91:    t86 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t86 & 1U);
    t87 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t87 & 1U);
    t28 = (t30 + 4);
    t88 = *((unsigned int *)t28);
    t89 = (~(t88));
    t90 = *((unsigned int *)t30);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB93;

LAB94:
LAB95:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng9)));
    memset(t30, 0, 8);
    xsi_vlog_signed_unary_minus(t30, 32, t2, 32);
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t30, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2316);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB96;
    goto LAB1;

LAB70:    *((unsigned int *)t32) = 1;
    goto LAB73;

LAB72:    t9 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB73;

LAB74:    t11 = (t0 + 784U);
    t12 = *((char **)t11);
    t11 = (t0 + 1748);
    t13 = (t11 + 36U);
    t14 = *((char **)t13);
    memset(t41, 0, 8);
    if (*((unsigned int *)t12) != *((unsigned int *)t14))
        goto LAB79;

LAB77:    t15 = (t12 + 4);
    t16 = (t14 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t16))
        goto LAB79;

LAB78:    *((unsigned int *)t41) = 1;

LAB79:    memset(t42, 0, 8);
    t17 = (t41 + 4);
    t43 = *((unsigned int *)t17);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t17) != 0)
        goto LAB82;

LAB83:    t49 = *((unsigned int *)t32);
    t50 = *((unsigned int *)t42);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t19 = (t32 + 4);
    t20 = (t42 + 4);
    t21 = (t48 + 4);
    t52 = *((unsigned int *)t19);
    t53 = *((unsigned int *)t20);
    t54 = (t52 | t53);
    *((unsigned int *)t21) = t54;
    t55 = *((unsigned int *)t21);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB84;

LAB85:
LAB86:    goto LAB76;

LAB80:    *((unsigned int *)t42) = 1;
    goto LAB83;

LAB82:    t18 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB83;

LAB84:    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t21);
    *((unsigned int *)t48) = (t57 | t58);
    t22 = (t32 + 4);
    t23 = (t42 + 4);
    t59 = *((unsigned int *)t32);
    t60 = (~(t59));
    t61 = *((unsigned int *)t22);
    t62 = (~(t61));
    t63 = *((unsigned int *)t42);
    t64 = (~(t63));
    t65 = *((unsigned int *)t23);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t71 & t69);
    t72 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t72 & t70);
    t73 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t73 & t69);
    t74 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t74 & t70);
    goto LAB86;

LAB87:    *((unsigned int *)t30) = 1;
    goto LAB90;

LAB92:    t82 = *((unsigned int *)t30);
    t83 = *((unsigned int *)t27);
    *((unsigned int *)t30) = (t82 | t83);
    t84 = *((unsigned int *)t26);
    t85 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t84 | t85);
    goto LAB91;

LAB93:    xsi_set_current_line(56, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB95;

LAB96:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1104);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 1104);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = (t0 + 1196);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t15 = (t0 + 692U);
    t16 = *((char **)t15);
    t15 = (t0 + 692U);
    t17 = *((char **)t15);
    t15 = (t0 + 1656);
    t18 = (t15 + 36U);
    t19 = *((char **)t18);
    t20 = (t0 + 1656);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    t23 = (t0 + 1472);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    t26 = (t0 + 784U);
    t27 = *((char **)t26);
    t26 = (t0 + 1748);
    t28 = (t26 + 36U);
    t29 = *((char **)t28);
    xsi_vlogfile_write(1, 0, 0, ng16, 12, t0, (char)118, t5, 32, (char)118, t8, 32, (char)118, t11, 32, (char)118, t14, 32, (char)118, t16, 32, (char)118, t17, 32, (char)118, t19, 32, (char)118, t22, 32, (char)118, t25, 32, (char)118, t27, 32, (char)118, t29, 32);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1656);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t31, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t5))
        goto LAB99;

LAB97:    t6 = (t3 + 4);
    t7 = (t5 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB99;

LAB98:    *((unsigned int *)t31) = 1;

LAB99:    memset(t32, 0, 8);
    t8 = (t31 + 4);
    t33 = *((unsigned int *)t8);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t8) != 0)
        goto LAB102;

LAB103:    t10 = (t32 + 4);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t10);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB104;

LAB105:    memcpy(t48, t32, 8);

LAB106:    memset(t30, 0, 8);
    t24 = (t48 + 4);
    t75 = *((unsigned int *)t24);
    t76 = (~(t75));
    t77 = *((unsigned int *)t48);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB120;

LAB118:    if (*((unsigned int *)t24) == 0)
        goto LAB117;

LAB119:    t25 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t25) = 1;

LAB120:    t26 = (t30 + 4);
    t27 = (t48 + 4);
    t80 = *((unsigned int *)t48);
    t81 = (~(t80));
    *((unsigned int *)t30) = t81;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB122;

LAB121:    t86 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t86 & 1U);
    t87 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t87 & 1U);
    t28 = (t30 + 4);
    t88 = *((unsigned int *)t28);
    t89 = (~(t88));
    t90 = *((unsigned int *)t30);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB123;

LAB124:
LAB125:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2316);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB126;
    goto LAB1;

LAB100:    *((unsigned int *)t32) = 1;
    goto LAB103;

LAB102:    t9 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB103;

LAB104:    t11 = (t0 + 784U);
    t12 = *((char **)t11);
    t11 = (t0 + 1748);
    t13 = (t11 + 36U);
    t14 = *((char **)t13);
    memset(t41, 0, 8);
    if (*((unsigned int *)t12) != *((unsigned int *)t14))
        goto LAB109;

LAB107:    t15 = (t12 + 4);
    t16 = (t14 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t16))
        goto LAB109;

LAB108:    *((unsigned int *)t41) = 1;

LAB109:    memset(t42, 0, 8);
    t17 = (t41 + 4);
    t43 = *((unsigned int *)t17);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t17) != 0)
        goto LAB112;

LAB113:    t49 = *((unsigned int *)t32);
    t50 = *((unsigned int *)t42);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t19 = (t32 + 4);
    t20 = (t42 + 4);
    t21 = (t48 + 4);
    t52 = *((unsigned int *)t19);
    t53 = *((unsigned int *)t20);
    t54 = (t52 | t53);
    *((unsigned int *)t21) = t54;
    t55 = *((unsigned int *)t21);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB114;

LAB115:
LAB116:    goto LAB106;

LAB110:    *((unsigned int *)t42) = 1;
    goto LAB113;

LAB112:    t18 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB113;

LAB114:    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t21);
    *((unsigned int *)t48) = (t57 | t58);
    t22 = (t32 + 4);
    t23 = (t42 + 4);
    t59 = *((unsigned int *)t32);
    t60 = (~(t59));
    t61 = *((unsigned int *)t22);
    t62 = (~(t61));
    t63 = *((unsigned int *)t42);
    t64 = (~(t63));
    t65 = *((unsigned int *)t23);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t71 & t69);
    t72 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t72 & t70);
    t73 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t73 & t69);
    t74 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t74 & t70);
    goto LAB116;

LAB117:    *((unsigned int *)t30) = 1;
    goto LAB120;

LAB122:    t82 = *((unsigned int *)t30);
    t83 = *((unsigned int *)t27);
    *((unsigned int *)t30) = (t82 | t83);
    t84 = *((unsigned int *)t26);
    t85 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t84 | t85);
    goto LAB121;

LAB123:    xsi_set_current_line(63, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB125;

LAB126:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 1104);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 1104);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = (t0 + 1196);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t15 = (t0 + 692U);
    t16 = *((char **)t15);
    t15 = (t0 + 692U);
    t17 = *((char **)t15);
    t15 = (t0 + 1656);
    t18 = (t15 + 36U);
    t19 = *((char **)t18);
    t20 = (t0 + 1656);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    t23 = (t0 + 1472);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    t26 = (t0 + 784U);
    t27 = *((char **)t26);
    t26 = (t0 + 1748);
    t28 = (t26 + 36U);
    t29 = *((char **)t28);
    xsi_vlogfile_write(1, 0, 0, ng16, 12, t0, (char)118, t5, 32, (char)118, t8, 32, (char)118, t11, 32, (char)118, t14, 32, (char)118, t16, 32, (char)118, t17, 32, (char)118, t19, 32, (char)118, t22, 32, (char)118, t25, 32, (char)118, t27, 32, (char)118, t29, 32);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1656);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t31, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t5))
        goto LAB129;

LAB127:    t6 = (t3 + 4);
    t7 = (t5 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB129;

LAB128:    *((unsigned int *)t31) = 1;

LAB129:    memset(t32, 0, 8);
    t8 = (t31 + 4);
    t33 = *((unsigned int *)t8);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t8) != 0)
        goto LAB132;

LAB133:    t10 = (t32 + 4);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t10);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB134;

LAB135:    memcpy(t48, t32, 8);

LAB136:    memset(t30, 0, 8);
    t24 = (t48 + 4);
    t75 = *((unsigned int *)t24);
    t76 = (~(t75));
    t77 = *((unsigned int *)t48);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB150;

LAB148:    if (*((unsigned int *)t24) == 0)
        goto LAB147;

LAB149:    t25 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t25) = 1;

LAB150:    t26 = (t30 + 4);
    t27 = (t48 + 4);
    t80 = *((unsigned int *)t48);
    t81 = (~(t80));
    *((unsigned int *)t30) = t81;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB152;

LAB151:    t86 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t86 & 1U);
    t87 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t87 & 1U);
    t28 = (t30 + 4);
    t88 = *((unsigned int *)t28);
    t89 = (~(t88));
    t90 = *((unsigned int *)t30);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB153;

LAB154:
LAB155:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2316);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB156;
    goto LAB1;

LAB130:    *((unsigned int *)t32) = 1;
    goto LAB133;

LAB132:    t9 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB133;

LAB134:    t11 = (t0 + 784U);
    t12 = *((char **)t11);
    t11 = (t0 + 1748);
    t13 = (t11 + 36U);
    t14 = *((char **)t13);
    memset(t41, 0, 8);
    if (*((unsigned int *)t12) != *((unsigned int *)t14))
        goto LAB139;

LAB137:    t15 = (t12 + 4);
    t16 = (t14 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t16))
        goto LAB139;

LAB138:    *((unsigned int *)t41) = 1;

LAB139:    memset(t42, 0, 8);
    t17 = (t41 + 4);
    t43 = *((unsigned int *)t17);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB140;

LAB141:    if (*((unsigned int *)t17) != 0)
        goto LAB142;

LAB143:    t49 = *((unsigned int *)t32);
    t50 = *((unsigned int *)t42);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t19 = (t32 + 4);
    t20 = (t42 + 4);
    t21 = (t48 + 4);
    t52 = *((unsigned int *)t19);
    t53 = *((unsigned int *)t20);
    t54 = (t52 | t53);
    *((unsigned int *)t21) = t54;
    t55 = *((unsigned int *)t21);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB144;

LAB145:
LAB146:    goto LAB136;

LAB140:    *((unsigned int *)t42) = 1;
    goto LAB143;

LAB142:    t18 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB143;

LAB144:    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t21);
    *((unsigned int *)t48) = (t57 | t58);
    t22 = (t32 + 4);
    t23 = (t42 + 4);
    t59 = *((unsigned int *)t32);
    t60 = (~(t59));
    t61 = *((unsigned int *)t22);
    t62 = (~(t61));
    t63 = *((unsigned int *)t42);
    t64 = (~(t63));
    t65 = *((unsigned int *)t23);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t71 & t69);
    t72 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t72 & t70);
    t73 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t73 & t69);
    t74 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t74 & t70);
    goto LAB146;

LAB147:    *((unsigned int *)t30) = 1;
    goto LAB150;

LAB152:    t82 = *((unsigned int *)t30);
    t83 = *((unsigned int *)t27);
    *((unsigned int *)t30) = (t82 | t83);
    t84 = *((unsigned int *)t26);
    t85 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t84 | t85);
    goto LAB151;

LAB153:    xsi_set_current_line(70, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB155;

LAB156:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 1104);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 1104);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = (t0 + 1196);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t15 = (t0 + 692U);
    t16 = *((char **)t15);
    t15 = (t0 + 692U);
    t17 = *((char **)t15);
    t15 = (t0 + 1656);
    t18 = (t15 + 36U);
    t19 = *((char **)t18);
    t20 = (t0 + 1656);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    t23 = (t0 + 1472);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    t26 = (t0 + 784U);
    t27 = *((char **)t26);
    t26 = (t0 + 1748);
    t28 = (t26 + 36U);
    t29 = *((char **)t28);
    xsi_vlogfile_write(1, 0, 0, ng21, 12, t0, (char)118, t5, 32, (char)118, t8, 32, (char)118, t11, 32, (char)118, t14, 32, (char)118, t16, 32, (char)118, t17, 32, (char)118, t19, 32, (char)118, t22, 32, (char)118, t25, 32, (char)118, t27, 32, (char)118, t29, 32);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1656);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t31, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t5))
        goto LAB159;

LAB157:    t6 = (t3 + 4);
    t7 = (t5 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB159;

LAB158:    *((unsigned int *)t31) = 1;

LAB159:    memset(t32, 0, 8);
    t8 = (t31 + 4);
    t33 = *((unsigned int *)t8);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB160;

LAB161:    if (*((unsigned int *)t8) != 0)
        goto LAB162;

LAB163:    t10 = (t32 + 4);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t10);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB164;

LAB165:    memcpy(t48, t32, 8);

LAB166:    memset(t30, 0, 8);
    t24 = (t48 + 4);
    t75 = *((unsigned int *)t24);
    t76 = (~(t75));
    t77 = *((unsigned int *)t48);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB180;

LAB178:    if (*((unsigned int *)t24) == 0)
        goto LAB177;

LAB179:    t25 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t25) = 1;

LAB180:    t26 = (t30 + 4);
    t27 = (t48 + 4);
    t80 = *((unsigned int *)t48);
    t81 = (~(t80));
    *((unsigned int *)t30) = t81;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB182;

LAB181:    t86 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t86 & 1U);
    t87 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t87 & 1U);
    t28 = (t30 + 4);
    t88 = *((unsigned int *)t28);
    t89 = (~(t88));
    t90 = *((unsigned int *)t30);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB183;

LAB184:
LAB185:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2316);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB186;
    goto LAB1;

LAB160:    *((unsigned int *)t32) = 1;
    goto LAB163;

LAB162:    t9 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB163;

LAB164:    t11 = (t0 + 784U);
    t12 = *((char **)t11);
    t11 = (t0 + 1748);
    t13 = (t11 + 36U);
    t14 = *((char **)t13);
    memset(t41, 0, 8);
    if (*((unsigned int *)t12) != *((unsigned int *)t14))
        goto LAB169;

LAB167:    t15 = (t12 + 4);
    t16 = (t14 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t16))
        goto LAB169;

LAB168:    *((unsigned int *)t41) = 1;

LAB169:    memset(t42, 0, 8);
    t17 = (t41 + 4);
    t43 = *((unsigned int *)t17);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB170;

LAB171:    if (*((unsigned int *)t17) != 0)
        goto LAB172;

LAB173:    t49 = *((unsigned int *)t32);
    t50 = *((unsigned int *)t42);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t19 = (t32 + 4);
    t20 = (t42 + 4);
    t21 = (t48 + 4);
    t52 = *((unsigned int *)t19);
    t53 = *((unsigned int *)t20);
    t54 = (t52 | t53);
    *((unsigned int *)t21) = t54;
    t55 = *((unsigned int *)t21);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB174;

LAB175:
LAB176:    goto LAB166;

LAB170:    *((unsigned int *)t42) = 1;
    goto LAB173;

LAB172:    t18 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB173;

LAB174:    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t21);
    *((unsigned int *)t48) = (t57 | t58);
    t22 = (t32 + 4);
    t23 = (t42 + 4);
    t59 = *((unsigned int *)t32);
    t60 = (~(t59));
    t61 = *((unsigned int *)t22);
    t62 = (~(t61));
    t63 = *((unsigned int *)t42);
    t64 = (~(t63));
    t65 = *((unsigned int *)t23);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t71 & t69);
    t72 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t72 & t70);
    t73 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t73 & t69);
    t74 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t74 & t70);
    goto LAB176;

LAB177:    *((unsigned int *)t30) = 1;
    goto LAB180;

LAB182:    t82 = *((unsigned int *)t30);
    t83 = *((unsigned int *)t27);
    *((unsigned int *)t30) = (t82 | t83);
    t84 = *((unsigned int *)t26);
    t85 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t84 | t85);
    goto LAB181;

LAB183:    xsi_set_current_line(77, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB185;

LAB186:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 1104);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 1104);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = (t0 + 1196);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t15 = (t0 + 692U);
    t16 = *((char **)t15);
    t15 = (t0 + 692U);
    t17 = *((char **)t15);
    t15 = (t0 + 1656);
    t18 = (t15 + 36U);
    t19 = *((char **)t18);
    t20 = (t0 + 1656);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    t23 = (t0 + 1472);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    t26 = (t0 + 784U);
    t27 = *((char **)t26);
    t26 = (t0 + 1748);
    t28 = (t26 + 36U);
    t29 = *((char **)t28);
    xsi_vlogfile_write(1, 0, 0, ng24, 12, t0, (char)118, t5, 32, (char)118, t8, 32, (char)118, t11, 32, (char)118, t14, 32, (char)118, t16, 32, (char)118, t17, 32, (char)118, t19, 32, (char)118, t22, 32, (char)118, t25, 32, (char)118, t27, 32, (char)118, t29, 32);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1656);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t31, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t5))
        goto LAB189;

LAB187:    t6 = (t3 + 4);
    t7 = (t5 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB189;

LAB188:    *((unsigned int *)t31) = 1;

LAB189:    memset(t32, 0, 8);
    t8 = (t31 + 4);
    t33 = *((unsigned int *)t8);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB190;

LAB191:    if (*((unsigned int *)t8) != 0)
        goto LAB192;

LAB193:    t10 = (t32 + 4);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t10);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB194;

LAB195:    memcpy(t48, t32, 8);

LAB196:    memset(t30, 0, 8);
    t24 = (t48 + 4);
    t75 = *((unsigned int *)t24);
    t76 = (~(t75));
    t77 = *((unsigned int *)t48);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB210;

LAB208:    if (*((unsigned int *)t24) == 0)
        goto LAB207;

LAB209:    t25 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t25) = 1;

LAB210:    t26 = (t30 + 4);
    t27 = (t48 + 4);
    t80 = *((unsigned int *)t48);
    t81 = (~(t80));
    *((unsigned int *)t30) = t81;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB212;

LAB211:    t86 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t86 & 1U);
    t87 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t87 & 1U);
    t28 = (t30 + 4);
    t88 = *((unsigned int *)t28);
    t89 = (~(t88));
    t90 = *((unsigned int *)t30);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB213;

LAB214:
LAB215:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2316);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB216;
    goto LAB1;

LAB190:    *((unsigned int *)t32) = 1;
    goto LAB193;

LAB192:    t9 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB193;

LAB194:    t11 = (t0 + 784U);
    t12 = *((char **)t11);
    t11 = (t0 + 1748);
    t13 = (t11 + 36U);
    t14 = *((char **)t13);
    memset(t41, 0, 8);
    if (*((unsigned int *)t12) != *((unsigned int *)t14))
        goto LAB199;

LAB197:    t15 = (t12 + 4);
    t16 = (t14 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t16))
        goto LAB199;

LAB198:    *((unsigned int *)t41) = 1;

LAB199:    memset(t42, 0, 8);
    t17 = (t41 + 4);
    t43 = *((unsigned int *)t17);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB200;

LAB201:    if (*((unsigned int *)t17) != 0)
        goto LAB202;

LAB203:    t49 = *((unsigned int *)t32);
    t50 = *((unsigned int *)t42);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t19 = (t32 + 4);
    t20 = (t42 + 4);
    t21 = (t48 + 4);
    t52 = *((unsigned int *)t19);
    t53 = *((unsigned int *)t20);
    t54 = (t52 | t53);
    *((unsigned int *)t21) = t54;
    t55 = *((unsigned int *)t21);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB204;

LAB205:
LAB206:    goto LAB196;

LAB200:    *((unsigned int *)t42) = 1;
    goto LAB203;

LAB202:    t18 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB203;

LAB204:    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t21);
    *((unsigned int *)t48) = (t57 | t58);
    t22 = (t32 + 4);
    t23 = (t42 + 4);
    t59 = *((unsigned int *)t32);
    t60 = (~(t59));
    t61 = *((unsigned int *)t22);
    t62 = (~(t61));
    t63 = *((unsigned int *)t42);
    t64 = (~(t63));
    t65 = *((unsigned int *)t23);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t71 & t69);
    t72 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t72 & t70);
    t73 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t73 & t69);
    t74 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t74 & t70);
    goto LAB206;

LAB207:    *((unsigned int *)t30) = 1;
    goto LAB210;

LAB212:    t82 = *((unsigned int *)t30);
    t83 = *((unsigned int *)t27);
    *((unsigned int *)t30) = (t82 | t83);
    t84 = *((unsigned int *)t26);
    t85 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t84 | t85);
    goto LAB211;

LAB213:    xsi_set_current_line(84, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB215;

LAB216:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 1104);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 1104);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = (t0 + 1196);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t15 = (t0 + 692U);
    t16 = *((char **)t15);
    t15 = (t0 + 692U);
    t17 = *((char **)t15);
    t15 = (t0 + 1656);
    t18 = (t15 + 36U);
    t19 = *((char **)t18);
    t20 = (t0 + 1656);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    t23 = (t0 + 1472);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    t26 = (t0 + 784U);
    t27 = *((char **)t26);
    t26 = (t0 + 1748);
    t28 = (t26 + 36U);
    t29 = *((char **)t28);
    xsi_vlogfile_write(1, 0, 0, ng26, 12, t0, (char)118, t5, 32, (char)118, t8, 32, (char)118, t11, 32, (char)118, t14, 32, (char)118, t16, 32, (char)118, t17, 32, (char)118, t19, 32, (char)118, t22, 32, (char)118, t25, 32, (char)118, t27, 32, (char)118, t29, 32);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1656);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t31, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t5))
        goto LAB219;

LAB217:    t6 = (t3 + 4);
    t7 = (t5 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB219;

LAB218:    *((unsigned int *)t31) = 1;

LAB219:    memset(t32, 0, 8);
    t8 = (t31 + 4);
    t33 = *((unsigned int *)t8);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB220;

LAB221:    if (*((unsigned int *)t8) != 0)
        goto LAB222;

LAB223:    t10 = (t32 + 4);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t10);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB224;

LAB225:    memcpy(t48, t32, 8);

LAB226:    memset(t30, 0, 8);
    t24 = (t48 + 4);
    t75 = *((unsigned int *)t24);
    t76 = (~(t75));
    t77 = *((unsigned int *)t48);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB240;

LAB238:    if (*((unsigned int *)t24) == 0)
        goto LAB237;

LAB239:    t25 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t25) = 1;

LAB240:    t26 = (t30 + 4);
    t27 = (t48 + 4);
    t80 = *((unsigned int *)t48);
    t81 = (~(t80));
    *((unsigned int *)t30) = t81;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB242;

LAB241:    t86 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t86 & 1U);
    t87 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t87 & 1U);
    t28 = (t30 + 4);
    t88 = *((unsigned int *)t28);
    t89 = (~(t88));
    t90 = *((unsigned int *)t30);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB243;

LAB244:
LAB245:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2316);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB246;
    goto LAB1;

LAB220:    *((unsigned int *)t32) = 1;
    goto LAB223;

LAB222:    t9 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB223;

LAB224:    t11 = (t0 + 784U);
    t12 = *((char **)t11);
    t11 = (t0 + 1748);
    t13 = (t11 + 36U);
    t14 = *((char **)t13);
    memset(t41, 0, 8);
    if (*((unsigned int *)t12) != *((unsigned int *)t14))
        goto LAB229;

LAB227:    t15 = (t12 + 4);
    t16 = (t14 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t16))
        goto LAB229;

LAB228:    *((unsigned int *)t41) = 1;

LAB229:    memset(t42, 0, 8);
    t17 = (t41 + 4);
    t43 = *((unsigned int *)t17);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB230;

LAB231:    if (*((unsigned int *)t17) != 0)
        goto LAB232;

LAB233:    t49 = *((unsigned int *)t32);
    t50 = *((unsigned int *)t42);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t19 = (t32 + 4);
    t20 = (t42 + 4);
    t21 = (t48 + 4);
    t52 = *((unsigned int *)t19);
    t53 = *((unsigned int *)t20);
    t54 = (t52 | t53);
    *((unsigned int *)t21) = t54;
    t55 = *((unsigned int *)t21);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB234;

LAB235:
LAB236:    goto LAB226;

LAB230:    *((unsigned int *)t42) = 1;
    goto LAB233;

LAB232:    t18 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB233;

LAB234:    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t21);
    *((unsigned int *)t48) = (t57 | t58);
    t22 = (t32 + 4);
    t23 = (t42 + 4);
    t59 = *((unsigned int *)t32);
    t60 = (~(t59));
    t61 = *((unsigned int *)t22);
    t62 = (~(t61));
    t63 = *((unsigned int *)t42);
    t64 = (~(t63));
    t65 = *((unsigned int *)t23);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t71 & t69);
    t72 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t72 & t70);
    t73 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t73 & t69);
    t74 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t74 & t70);
    goto LAB236;

LAB237:    *((unsigned int *)t30) = 1;
    goto LAB240;

LAB242:    t82 = *((unsigned int *)t30);
    t83 = *((unsigned int *)t27);
    *((unsigned int *)t30) = (t82 | t83);
    t84 = *((unsigned int *)t26);
    t85 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t84 | t85);
    goto LAB241;

LAB243:    xsi_set_current_line(91, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB245;

LAB246:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 1196);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 1196);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 692U);
    t10 = *((char **)t9);
    t9 = (t0 + 692U);
    t11 = *((char **)t9);
    t9 = (t0 + 1656);
    t12 = (t9 + 36U);
    t13 = *((char **)t12);
    t14 = (t0 + 1656);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 1472);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    t20 = (t0 + 784U);
    t21 = *((char **)t20);
    t20 = (t0 + 1748);
    t22 = (t20 + 36U);
    t23 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng28, 10, t0, (char)118, t5, 32, (char)118, t8, 32, (char)118, t10, 32, (char)118, t11, 32, (char)118, t13, 32, (char)118, t16, 32, (char)118, t19, 32, (char)118, t21, 32, (char)118, t23, 32);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1656);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t31, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t5))
        goto LAB249;

LAB247:    t6 = (t3 + 4);
    t7 = (t5 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB249;

LAB248:    *((unsigned int *)t31) = 1;

LAB249:    memset(t32, 0, 8);
    t8 = (t31 + 4);
    t33 = *((unsigned int *)t8);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB250;

LAB251:    if (*((unsigned int *)t8) != 0)
        goto LAB252;

LAB253:    t10 = (t32 + 4);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t10);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB254;

LAB255:    memcpy(t48, t32, 8);

LAB256:    memset(t30, 0, 8);
    t24 = (t48 + 4);
    t75 = *((unsigned int *)t24);
    t76 = (~(t75));
    t77 = *((unsigned int *)t48);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB270;

LAB268:    if (*((unsigned int *)t24) == 0)
        goto LAB267;

LAB269:    t25 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t25) = 1;

LAB270:    t26 = (t30 + 4);
    t27 = (t48 + 4);
    t80 = *((unsigned int *)t48);
    t81 = (~(t80));
    *((unsigned int *)t30) = t81;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB272;

LAB271:    t86 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t86 & 1U);
    t87 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t87 & 1U);
    t28 = (t30 + 4);
    t88 = *((unsigned int *)t28);
    t89 = (~(t88));
    t90 = *((unsigned int *)t30);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB273;

LAB274:
LAB275:    xsi_set_current_line(100, ng0);
    xsi_vlogfile_write(1, 0, 0, ng29, 1, t0);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

LAB250:    *((unsigned int *)t32) = 1;
    goto LAB253;

LAB252:    t9 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB253;

LAB254:    t11 = (t0 + 784U);
    t12 = *((char **)t11);
    t11 = (t0 + 1748);
    t13 = (t11 + 36U);
    t14 = *((char **)t13);
    memset(t41, 0, 8);
    if (*((unsigned int *)t12) != *((unsigned int *)t14))
        goto LAB259;

LAB257:    t15 = (t12 + 4);
    t16 = (t14 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t16))
        goto LAB259;

LAB258:    *((unsigned int *)t41) = 1;

LAB259:    memset(t42, 0, 8);
    t17 = (t41 + 4);
    t43 = *((unsigned int *)t17);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB260;

LAB261:    if (*((unsigned int *)t17) != 0)
        goto LAB262;

LAB263:    t49 = *((unsigned int *)t32);
    t50 = *((unsigned int *)t42);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t19 = (t32 + 4);
    t20 = (t42 + 4);
    t21 = (t48 + 4);
    t52 = *((unsigned int *)t19);
    t53 = *((unsigned int *)t20);
    t54 = (t52 | t53);
    *((unsigned int *)t21) = t54;
    t55 = *((unsigned int *)t21);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB264;

LAB265:
LAB266:    goto LAB256;

LAB260:    *((unsigned int *)t42) = 1;
    goto LAB263;

LAB262:    t18 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB263;

LAB264:    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t21);
    *((unsigned int *)t48) = (t57 | t58);
    t22 = (t32 + 4);
    t23 = (t42 + 4);
    t59 = *((unsigned int *)t32);
    t60 = (~(t59));
    t61 = *((unsigned int *)t22);
    t62 = (~(t61));
    t63 = *((unsigned int *)t42);
    t64 = (~(t63));
    t65 = *((unsigned int *)t23);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t71 & t69);
    t72 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t72 & t70);
    t73 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t73 & t69);
    t74 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t74 & t70);
    goto LAB266;

LAB267:    *((unsigned int *)t30) = 1;
    goto LAB270;

LAB272:    t82 = *((unsigned int *)t30);
    t83 = *((unsigned int *)t27);
    *((unsigned int *)t30) = (t82 | t83);
    t84 = *((unsigned int *)t26);
    t85 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t84 | t85);
    goto LAB271;

LAB273:    xsi_set_current_line(98, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB275;

}


extern void work_m_00000000000300933831_2602956921_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Always_34_1};
	xsi_register_didat("work_m_00000000000300933831_2602956921", "isim/test_isim_beh.exe.sim/work/m_00000000000300933831_2602956921.didat");
	xsi_register_executes(pe);
}
