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
static const char *ng0 = "C:/code/projects/MIPS-CPU/PCOCD/ise/tc.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {3, 0};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {8U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {1U, 0U};



static void Cont_20_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 2456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 3304);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 3228);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_21_1(char *t0)
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
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 2600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1656);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 3U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = (t0 + 3340);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 3U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 1);
    t27 = (t0 + 3236);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_22_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 2744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 3376);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 3244);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_23_3(char *t0)
{
    char t4[8];
    char t17[8];
    char t20[8];
    char t28[8];
    char t60[8];
    char t76[8];
    char t79[8];
    char t87[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t77;
    char *t78;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    int t111;
    int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;

LAB0:    t1 = (t0 + 2888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t11 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t11);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB8;

LAB9:    memcpy(t28, t4, 8);

LAB10:    memset(t60, 0, 8);
    t61 = (t28 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t28);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t61) != 0)
        goto LAB23;

LAB24:    t68 = (t60 + 4);
    t69 = *((unsigned int *)t60);
    t70 = *((unsigned int *)t68);
    t71 = (t69 || t70);
    if (t71 > 0)
        goto LAB25;

LAB26:    memcpy(t87, t60, 8);

LAB27:    t119 = (t0 + 3412);
    t120 = (t119 + 32U);
    t121 = *((char **)t120);
    t122 = (t121 + 40U);
    t123 = *((char **)t122);
    memset(t123, 0, 8);
    t124 = 1U;
    t125 = t124;
    t126 = (t87 + 4);
    t127 = *((unsigned int *)t87);
    t124 = (t124 & t127);
    t128 = *((unsigned int *)t126);
    t125 = (t125 & t128);
    t129 = (t123 + 4);
    t130 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t130 | t124);
    t131 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t131 | t125);
    xsi_driver_vfirst_trans(t119, 0, 0);
    t132 = (t0 + 3252);
    *((int *)t132) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t15 = (t0 + 1336U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng1)));
    memset(t17, 0, 8);
    if (*((unsigned int *)t16) != *((unsigned int *)t15))
        goto LAB13;

LAB11:    t18 = (t16 + 4);
    t19 = (t15 + 4);
    if (*((unsigned int *)t18) != *((unsigned int *)t19))
        goto LAB13;

LAB12:    *((unsigned int *)t17) = 1;

LAB13:    memset(t20, 0, 8);
    t21 = (t17 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t17);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t21) != 0)
        goto LAB16;

LAB17:    t29 = *((unsigned int *)t4);
    t30 = *((unsigned int *)t20);
    t31 = (t29 & t30);
    *((unsigned int *)t28) = t31;
    t32 = (t4 + 4);
    t33 = (t20 + 4);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB18;

LAB19:
LAB20:    goto LAB10;

LAB14:    *((unsigned int *)t20) = 1;
    goto LAB17;

LAB16:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB17;

LAB18:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t40 | t41);
    t42 = (t4 + 4);
    t43 = (t20 + 4);
    t44 = *((unsigned int *)t4);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (~(t46));
    t48 = *((unsigned int *)t20);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t52 = (t45 & t47);
    t53 = (t49 & t51);
    t54 = (~(t52));
    t55 = (~(t53));
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t54);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & t55);
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t54);
    t59 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t59 & t55);
    goto LAB20;

LAB21:    *((unsigned int *)t60) = 1;
    goto LAB24;

LAB23:    t67 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB24;

LAB25:    t72 = (t0 + 1840);
    t73 = (t72 + 36U);
    t74 = *((char **)t73);
    t75 = ((char*)((ng2)));
    memset(t76, 0, 8);
    if (*((unsigned int *)t74) != *((unsigned int *)t75))
        goto LAB30;

LAB28:    t77 = (t74 + 4);
    t78 = (t75 + 4);
    if (*((unsigned int *)t77) != *((unsigned int *)t78))
        goto LAB30;

LAB29:    *((unsigned int *)t76) = 1;

LAB30:    memset(t79, 0, 8);
    t80 = (t76 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t80) != 0)
        goto LAB33;

LAB34:    t88 = *((unsigned int *)t60);
    t89 = *((unsigned int *)t79);
    t90 = (t88 & t89);
    *((unsigned int *)t87) = t90;
    t91 = (t60 + 4);
    t92 = (t79 + 4);
    t93 = (t87 + 4);
    t94 = *((unsigned int *)t91);
    t95 = *((unsigned int *)t92);
    t96 = (t94 | t95);
    *((unsigned int *)t93) = t96;
    t97 = *((unsigned int *)t93);
    t98 = (t97 != 0);
    if (t98 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB27;

LAB31:    *((unsigned int *)t79) = 1;
    goto LAB34;

LAB33:    t86 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB34;

LAB35:    t99 = *((unsigned int *)t87);
    t100 = *((unsigned int *)t93);
    *((unsigned int *)t87) = (t99 | t100);
    t101 = (t60 + 4);
    t102 = (t79 + 4);
    t103 = *((unsigned int *)t60);
    t104 = (~(t103));
    t105 = *((unsigned int *)t101);
    t106 = (~(t105));
    t107 = *((unsigned int *)t79);
    t108 = (~(t107));
    t109 = *((unsigned int *)t102);
    t110 = (~(t109));
    t111 = (t104 & t106);
    t112 = (t108 & t110);
    t113 = (~(t111));
    t114 = (~(t112));
    t115 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t115 & t113);
    t116 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t116 & t114);
    t117 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t117 & t113);
    t118 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t118 & t114);
    goto LAB37;

}

static void Always_25_4(char *t0)
{
    char t14[8];
    char t23[8];
    char t24[8];
    char t25[8];
    char t81[8];
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    int t33;
    char *t34;
    unsigned int t35;
    int t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
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
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t82;

LAB0:    t1 = (t0 + 3032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 3260);
    *((int *)t2) = 1;
    t3 = (t0 + 3060);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
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

LAB7:    xsi_set_current_line(31, ng0);

LAB10:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);

LAB80:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB83;

LAB84:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB85;

LAB86:
LAB87:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(26, ng0);

LAB9:    xsi_set_current_line(27, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1656);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1932);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB11:    xsi_set_current_line(33, ng0);

LAB14:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);

LAB15:    t4 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB20;

LAB21:
LAB22:    goto LAB13;

LAB16:    xsi_set_current_line(35, ng0);

LAB23:    xsi_set_current_line(36, ng0);
    t11 = (t0 + 968U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t11) = t19;
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t20 & 15U);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 15U);
    t22 = (t0 + 1656);
    t26 = (t0 + 1656);
    t27 = (t26 + 44U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng3)));
    t30 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t23, t24, t25, ((int*)(t28)), 2, t29, 32, 1, t30, 32, 1);
    t31 = (t23 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t24 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    t38 = (t25 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB24;

LAB25:    goto LAB22;

LAB18:    xsi_set_current_line(38, ng0);

LAB26:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 968U);
    t4 = *((char **)t3);
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB22;

LAB20:    xsi_set_current_line(41, ng0);

LAB27:    goto LAB22;

LAB24:    t42 = *((unsigned int *)t25);
    t43 = (t42 + 0);
    t44 = *((unsigned int *)t23);
    t45 = *((unsigned int *)t24);
    t46 = (t44 - t45);
    t47 = (t46 + 1);
    xsi_vlogvar_assign_value(t22, t14, t43, *((unsigned int *)t24), t47);
    goto LAB25;

LAB28:    xsi_set_current_line(46, ng0);

LAB31:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1336U);
    t11 = *((char **)t4);

LAB32:    t4 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 2, t4, 2);
    if (t13 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 2, t2, 2);
    if (t13 == 1)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t12 = (t0 + 1932);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB30;

LAB33:    xsi_set_current_line(48, ng0);

LAB38:    xsi_set_current_line(49, ng0);
    t12 = (t0 + 1932);
    t15 = (t12 + 36U);
    t22 = *((char **)t15);
    t26 = (t0 + 1748);
    t27 = (t26 + 36U);
    t28 = *((char **)t27);
    memset(t14, 0, 8);
    if (*((unsigned int *)t22) != *((unsigned int *)t28))
        goto LAB40;

LAB39:    t29 = (t22 + 4);
    t30 = (t28 + 4);
    if (*((unsigned int *)t29) != *((unsigned int *)t30))
        goto LAB40;

LAB41:    t31 = (t14 + 4);
    t16 = *((unsigned int *)t31);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB42;

LAB43:
LAB44:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t12 = ((char*)((ng1)));
    memset(t14, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t12))
        goto LAB47;

LAB46:    t15 = (t4 + 4);
    t22 = (t12 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t22))
        goto LAB47;

LAB48:    memset(t23, 0, 8);
    t26 = (t14 + 4);
    t6 = *((unsigned int *)t26);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t26) != 0)
        goto LAB51;

LAB52:    t28 = (t23 + 4);
    t16 = *((unsigned int *)t23);
    t17 = *((unsigned int *)t28);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB53;

LAB54:    memcpy(t25, t23, 8);

LAB55:    t71 = (t25 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t25);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB63;

LAB64:
LAB65:    goto LAB37;

LAB35:    xsi_set_current_line(56, ng0);

LAB67:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1840);
    t4 = (t3 + 36U);
    t12 = *((char **)t4);
    t15 = ((char*)((ng1)));
    memset(t14, 0, 8);
    if (*((unsigned int *)t12) != *((unsigned int *)t15))
        goto LAB70;

LAB68:    t22 = (t12 + 4);
    t26 = (t15 + 4);
    if (*((unsigned int *)t22) != *((unsigned int *)t26))
        goto LAB70;

LAB69:    *((unsigned int *)t14) = 1;

LAB70:    t27 = (t14 + 4);
    t6 = *((unsigned int *)t27);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB71;

LAB72:
LAB73:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t12 = ((char*)((ng1)));
    memset(t14, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t12))
        goto LAB75;

LAB74:    t15 = (t4 + 4);
    t22 = (t12 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t22))
        goto LAB75;

LAB76:    t26 = (t14 + 4);
    t6 = *((unsigned int *)t26);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB77;

LAB78:
LAB79:    goto LAB37;

LAB40:    *((unsigned int *)t14) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(49, ng0);

LAB45:    xsi_set_current_line(50, ng0);
    t34 = (t0 + 1748);
    t38 = (t34 + 36U);
    t48 = *((char **)t38);
    t49 = (t0 + 1840);
    xsi_vlogvar_assign_value(t49, t48, 0, 0, 32);
    goto LAB44;

LAB47:    *((unsigned int *)t14) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t23) = 1;
    goto LAB52;

LAB51:    t27 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB52;

LAB53:    t29 = (t0 + 1244U);
    t30 = *((char **)t29);
    memset(t24, 0, 8);
    t29 = (t30 + 4);
    t19 = *((unsigned int *)t29);
    t20 = (~(t19));
    t21 = *((unsigned int *)t30);
    t32 = (t21 & t20);
    t35 = (t32 & 1U);
    if (t35 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t29) != 0)
        goto LAB58;

LAB59:    t39 = *((unsigned int *)t23);
    t42 = *((unsigned int *)t24);
    t44 = (t39 & t42);
    *((unsigned int *)t25) = t44;
    t34 = (t23 + 4);
    t38 = (t24 + 4);
    t48 = (t25 + 4);
    t45 = *((unsigned int *)t34);
    t50 = *((unsigned int *)t38);
    t51 = (t45 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB55;

LAB56:    *((unsigned int *)t24) = 1;
    goto LAB59;

LAB58:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB59;

LAB60:    t54 = *((unsigned int *)t25);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t25) = (t54 | t55);
    t49 = (t23 + 4);
    t56 = (t24 + 4);
    t57 = *((unsigned int *)t23);
    t58 = (~(t57));
    t59 = *((unsigned int *)t49);
    t60 = (~(t59));
    t61 = *((unsigned int *)t24);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t13 = (t58 & t60);
    t33 = (t62 & t64);
    t65 = (~(t13));
    t66 = (~(t33));
    t67 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t67 & t65);
    t68 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t68 & t66);
    t69 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t69 & t65);
    t70 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t70 & t66);
    goto LAB62;

LAB63:    xsi_set_current_line(52, ng0);

LAB66:    xsi_set_current_line(53, ng0);
    t77 = (t0 + 1840);
    t78 = (t77 + 36U);
    t79 = *((char **)t78);
    t80 = ((char*)((ng6)));
    memset(t81, 0, 8);
    xsi_vlog_unsigned_minus(t81, 32, t79, 32, t80, 32);
    t82 = (t0 + 1840);
    xsi_vlogvar_assign_value(t82, t81, 0, 0, 32);
    goto LAB65;

LAB71:    xsi_set_current_line(57, ng0);
    t28 = (t0 + 1748);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    t31 = (t0 + 1840);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 32);
    goto LAB73;

LAB75:    *((unsigned int *)t14) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(58, ng0);
    t27 = (t0 + 1840);
    t28 = (t27 + 36U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng6)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_minus(t23, 32, t29, 32, t30, 32);
    t31 = (t0 + 1840);
    xsi_vlogvar_assign_value(t31, t23, 0, 0, 32);
    goto LAB79;

LAB81:    xsi_set_current_line(66, ng0);

LAB88:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 1656);
    t12 = (t4 + 36U);
    t15 = *((char **)t12);
    memset(t23, 0, 8);
    t22 = (t23 + 4);
    t26 = (t15 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (t6 >> 0);
    *((unsigned int *)t23) = t7;
    t8 = *((unsigned int *)t26);
    t9 = (t8 >> 0);
    *((unsigned int *)t22) = t9;
    t10 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t10 & 15U);
    t16 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t16 & 15U);
    t27 = ((char*)((ng1)));
    xsi_vlogtype_concat(t14, 32, 32, 2U, t27, 28, t23, 4);
    t28 = (t0 + 1564);
    xsi_vlogvar_assign_value(t28, t14, 0, 0, 32);
    goto LAB87;

LAB83:    xsi_set_current_line(69, ng0);

LAB89:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 1748);
    t12 = (t4 + 36U);
    t15 = *((char **)t12);
    t22 = (t0 + 1564);
    xsi_vlogvar_assign_value(t22, t15, 0, 0, 32);
    goto LAB87;

LAB85:    xsi_set_current_line(72, ng0);

LAB90:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 1840);
    t12 = (t4 + 36U);
    t15 = *((char **)t12);
    t22 = (t0 + 1564);
    xsi_vlogvar_assign_value(t22, t15, 0, 0, 32);
    goto LAB87;

}


extern void work_m_00000000000367848866_0053799672_init()
{
	static char *pe[] = {(void *)Cont_20_0,(void *)Cont_21_1,(void *)Cont_22_2,(void *)Cont_23_3,(void *)Always_25_4};
	xsi_register_didat("work_m_00000000000367848866_0053799672", "isim/test_isim_beh.exe.sim/work/m_00000000000367848866_0053799672.didat");
	xsi_register_executes(pe);
}
