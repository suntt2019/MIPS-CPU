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
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD/ise/bltzal_test.v";
static int ng1[] = {0, 0};
static const char *ng2 = " *BLTZAL test started.";
static int ng3[] = {1, 0};
static const char *ng4 = "      Read from file.";
static const char *ng5 = "../overall_test/bltzal-test.txt";
static unsigned int ng6[] = {12288U, 0U};
static const char *ng7 = "      Reset finished.";
static const char *ng8 = "      Start running";
static int ng9[] = {100, 0};
static unsigned int ng10[] = {4294967295U, 4294967295U};
static const char *ng11 = "      t=%d,Step[%d], PC=%h, StoredInstruction=%h, status=%h signals=%b";
static int ng12[] = {10, 0};
static unsigned int ng13[] = {1U, 0U};
static const char *ng14 = "      t=%d,Step[%d], PC=%h, StoredInstruction=%h, status=%h signals=%b, last instr: regs[%d]=%h";
static const char *ng15 = "../overall_test/bltzal-test-regs.txt";
static int ng16[] = {32, 0};
static const char *ng17 = "      regs[%d]=%h == %h";
static const char *ng18 = "Assertion Error";
static const char *ng19 = " *BLTZAL test finished.";
static int ng20[] = {5, 0};
static unsigned int ng21[] = {0U, 0U};



static void Initial_29_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1012);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1104);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_33_1(char *t0)
{
    char t6[8];
    char t7[8];
    char t23[8];
    char t26[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3096);
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
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4504);
    t3 = *((char **)t2);
    t4 = ((char*)((ng6)));
    xsi_vlogfile_readmemh(ng5, 0, ((char*)(t3)), 1, *((unsigned int *)t4), 0, 0);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2224);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(39, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(45, ng0);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB7:    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t8) != 0)
        goto LAB10;

LAB11:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB12;

LAB13:    memcpy(t34, t7, 8);

LAB14:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t8 = (t5 + 36U);
    t14 = *((char **)t8);
    t15 = (t0 + 4676);
    t19 = *((char **)t15);
    t20 = ((((char*)(t19))) + 24U);
    t21 = *((char **)t20);
    t20 = (t0 + 4704);
    t22 = *((char **)t20);
    t24 = ((((char*)(t22))) + 24U);
    t25 = *((char **)t24);
    t24 = (t0 + 4728);
    t27 = *((char **)t24);
    t33 = ((((char*)(t27))) + 36U);
    t38 = *((char **)t33);
    t39 = (t0 + 4752);
    t40 = *((char **)t39);
    t48 = ((((char*)(t40))) + 36U);
    t49 = *((char **)t48);
    t66 = (t0 + 1564);
    t72 = (t66 + 36U);
    t73 = *((char **)t72);
    t74 = (t0 + 4772);
    t75 = *((char **)t74);
    t76 = ((((char*)(t75))) + 36U);
    t77 = *((char **)t76);
    t78 = (t0 + 4792);
    t79 = *((char **)t78);
    t80 = ((((char*)(t79))) + 44U);
    t81 = *((char **)t80);
    t82 = (t0 + 4812);
    t83 = *((char **)t82);
    t84 = ((((char*)(t83))) + 40U);
    t85 = *((char **)t84);
    t86 = (t0 + 1564);
    t87 = (t86 + 36U);
    t88 = *((char **)t87);
    xsi_vlog_generic_get_array_select_value(t6, 32, t77, t81, t85, 2, 1, t88, 5, 2);
    xsi_vlogfile_write(1, 0, 0, ng14, 9, t0, (char)119, t4, 32, (char)119, t14, 32, (char)118, t21, 32, (char)118, t25, 32, (char)118, t38, 5, (char)118, t49, 26, (char)118, t73, 5, (char)118, t6, 32);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1656);
    xsi_vlogfile_readmemh(ng15, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(57, ng0);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB40:    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng16)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(61, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

LAB8:    *((unsigned int *)t7) = 1;
    goto LAB11;

LAB10:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB11;

LAB12:    t19 = (t0 + 4528);
    t20 = *((char **)t19);
    t21 = ((((char*)(t20))) + 24U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng10)));
    memset(t23, 0, 8);
    if (*((unsigned int *)t22) != *((unsigned int *)t21))
        goto LAB16;

LAB15:    t24 = (t22 + 4);
    t25 = (t21 + 4);
    if (*((unsigned int *)t24) != *((unsigned int *)t25))
        goto LAB16;

LAB17:    memset(t26, 0, 8);
    t27 = (t23 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t27) != 0)
        goto LAB20;

LAB21:    t35 = *((unsigned int *)t7);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t7 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB14;

LAB16:    *((unsigned int *)t23) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t26) = 1;
    goto LAB21;

LAB20:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB21;

LAB22:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t7 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t7);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB24;

LAB25:    xsi_set_current_line(45, ng0);

LAB27:    xsi_set_current_line(46, ng0);
    t72 = (t0 + 2224);
    xsi_process_wait(t72, 1000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(46, ng0);
    t73 = (t0 + 1380);
    t74 = (t73 + 36U);
    t75 = *((char **)t74);
    t76 = (t0 + 1288);
    t77 = (t76 + 36U);
    t78 = *((char **)t77);
    t79 = (t0 + 4544);
    t80 = *((char **)t79);
    t81 = ((((char*)(t80))) + 24U);
    t82 = *((char **)t81);
    t81 = (t0 + 4572);
    t83 = *((char **)t81);
    t84 = ((((char*)(t83))) + 24U);
    t85 = *((char **)t84);
    t84 = (t0 + 4596);
    t86 = *((char **)t84);
    t87 = ((((char*)(t86))) + 36U);
    t88 = *((char **)t87);
    t89 = (t0 + 4620);
    t90 = *((char **)t89);
    t91 = ((((char*)(t90))) + 36U);
    t92 = *((char **)t91);
    xsi_vlogfile_write(1, 0, 0, ng11, 7, t0, (char)119, t75, 32, (char)119, t78, 32, (char)118, t82, 32, (char)118, t85, 32, (char)118, t88, 5, (char)118, t92, 26);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 4636);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 36U);
    t5 = *((char **)t4);
    t8 = (t0 + 1564);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 5);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2224);
    xsi_process_wait(t2, 9000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(51, ng0);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB30:    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t8 = (t0 + 1288);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB7;

LAB31:    xsi_set_current_line(51, ng0);
    t14 = (t0 + 4660);
    t15 = *((char **)t14);
    t19 = ((((char*)(t15))) + 36U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng13)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t20) != *((unsigned int *)t21))
        goto LAB34;

LAB33:    t22 = (t20 + 4);
    t24 = (t21 + 4);
    if (*((unsigned int *)t22) != *((unsigned int *)t24))
        goto LAB34;

LAB35:    t25 = (t7 + 4);
    t16 = *((unsigned int *)t25);
    t17 = (~(t16));
    t18 = *((unsigned int *)t7);
    t28 = (t18 & t17);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t8 = (t0 + 1472);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB30;

LAB34:    *((unsigned int *)t7) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(51, ng0);
    t27 = (t0 + 2224);
    xsi_process_wait(t27, 10000LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    goto LAB38;

LAB41:    xsi_set_current_line(57, ng0);

LAB43:    xsi_set_current_line(58, ng0);
    t14 = (t0 + 1288);
    t15 = (t14 + 36U);
    t19 = *((char **)t15);
    t20 = (t0 + 4832);
    t21 = *((char **)t20);
    t22 = ((((char*)(t21))) + 36U);
    t24 = *((char **)t22);
    t25 = (t0 + 4852);
    t27 = *((char **)t25);
    t33 = ((((char*)(t27))) + 44U);
    t38 = *((char **)t33);
    t39 = (t0 + 4872);
    t40 = *((char **)t39);
    t48 = ((((char*)(t40))) + 40U);
    t49 = *((char **)t48);
    t66 = (t0 + 1288);
    t72 = (t66 + 36U);
    t73 = *((char **)t72);
    xsi_vlog_generic_get_array_select_value(t7, 32, t24, t38, t49, 2, 1, t73, 32, 1);
    t74 = (t0 + 1656);
    t75 = (t74 + 36U);
    t76 = *((char **)t75);
    t77 = (t0 + 1656);
    t78 = (t77 + 44U);
    t79 = *((char **)t78);
    t80 = (t0 + 1656);
    t81 = (t80 + 40U);
    t82 = *((char **)t81);
    t83 = (t0 + 1288);
    t84 = (t83 + 36U);
    t85 = *((char **)t84);
    xsi_vlog_generic_get_array_select_value(t23, 32, t76, t79, t82, 2, 1, t85, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng17, 4, t0, (char)119, t19, 32, (char)118, t7, 32, (char)118, t23, 32);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4892);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 36U);
    t5 = *((char **)t4);
    t8 = (t0 + 4912);
    t14 = *((char **)t8);
    t15 = ((((char*)(t14))) + 44U);
    t19 = *((char **)t15);
    t20 = (t0 + 4932);
    t21 = *((char **)t20);
    t22 = ((((char*)(t21))) + 40U);
    t24 = *((char **)t22);
    t25 = (t0 + 1288);
    t27 = (t25 + 36U);
    t33 = *((char **)t27);
    xsi_vlog_generic_get_array_select_value(t7, 32, t5, t19, t24, 2, 1, t33, 32, 1);
    t38 = (t0 + 1656);
    t39 = (t38 + 36U);
    t40 = *((char **)t39);
    t48 = (t0 + 1656);
    t49 = (t48 + 44U);
    t66 = *((char **)t49);
    t72 = (t0 + 1656);
    t73 = (t72 + 40U);
    t74 = *((char **)t73);
    t75 = (t0 + 1288);
    t76 = (t75 + 36U);
    t77 = *((char **)t76);
    xsi_vlog_generic_get_array_select_value(t23, 32, t40, t66, t74, 2, 1, t77, 32, 1);
    memset(t26, 0, 8);
    if (*((unsigned int *)t7) != *((unsigned int *)t23))
        goto LAB46;

LAB44:    t78 = (t7 + 4);
    t79 = (t23 + 4);
    if (*((unsigned int *)t78) != *((unsigned int *)t79))
        goto LAB46;

LAB45:    *((unsigned int *)t26) = 1;

LAB46:    memset(t6, 0, 8);
    t80 = (t26 + 4);
    t9 = *((unsigned int *)t80);
    t10 = (~(t9));
    t11 = *((unsigned int *)t26);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB50;

LAB48:    if (*((unsigned int *)t80) == 0)
        goto LAB47;

LAB49:    t81 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t81) = 1;

LAB50:    t82 = (t6 + 4);
    t83 = (t26 + 4);
    t16 = *((unsigned int *)t26);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t82) = 0;
    if (*((unsigned int *)t83) != 0)
        goto LAB52;

LAB51:    t31 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t31 & 1U);
    t32 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t32 & 1U);
    t84 = (t6 + 4);
    t35 = *((unsigned int *)t84);
    t36 = (~(t35));
    t37 = *((unsigned int *)t6);
    t41 = (t37 & t36);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB53;

LAB54:
LAB55:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t8 = (t0 + 1288);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB40;

LAB47:    *((unsigned int *)t6) = 1;
    goto LAB50;

LAB52:    t18 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t83);
    *((unsigned int *)t6) = (t18 | t28);
    t29 = *((unsigned int *)t82);
    t30 = *((unsigned int *)t83);
    *((unsigned int *)t82) = (t29 | t30);
    goto LAB51;

LAB53:    xsi_set_current_line(59, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    goto LAB55;

}

static void Always_65_2(char *t0)
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

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3104);
    *((int *)t2) = 1;
    t3 = (t0 + 2496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
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

LAB7:    xsi_set_current_line(68, ng0);

LAB10:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2368);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:    xsi_set_current_line(66, ng0);

LAB9:    xsi_set_current_line(67, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1104);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);

LAB8:    goto LAB2;

LAB11:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1380);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng20)));
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

LAB12:    xsi_set_current_line(69, ng0);
    t17 = (t0 + 1104);
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
    t37 = (t0 + 1104);
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

static void Always_73_3(char *t0)
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

LAB2:    xsi_set_current_line(73, ng0);

LAB4:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2512);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 1012);
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

LAB12:    xsi_set_current_line(74, ng0);
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

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 2756U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng21)));
    t3 = (t0 + 3148);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 2900U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng21)));
    t3 = (t0 + 3184);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 63U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 5);

LAB1:    return;
}


extern void work_m_00000000000891691444_1628578488_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_33_1,(void *)Always_65_2,(void *)Always_73_3,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_00000000000891691444_1628578488", "isim/test_isim_beh.exe.sim/work/m_00000000000891691444_1628578488.didat");
	xsi_register_executes(pe);
}
