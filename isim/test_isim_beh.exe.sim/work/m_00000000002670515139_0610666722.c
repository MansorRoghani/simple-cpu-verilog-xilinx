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
static const char *ng0 = "C:/Users/kolob/Desktop/cpu/instruction_memory.v";
static unsigned int ng1[] = {1006698559U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1006764099U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {1006829600U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {2236418U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {2304006U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {2240527U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {2550267905U, 0U};
static unsigned int ng14[] = {6U, 0U};
static unsigned int ng15[] = {939982849U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {268435458U, 0U};
static unsigned int ng18[] = {8U, 0U};
static unsigned int ng19[] = {809959426U, 0U};
static unsigned int ng20[] = {10U, 0U};



static void Always_23_0(char *t0)
{
    char t7[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t22;
    int t23;
    unsigned int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1824);
    *((int *)t2) = 1;
    t3 = (t0 + 1656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(25, ng0);
    t4 = (t0 + 1104);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t8 = (t0 + 1104);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t11 = (t0 + 1104);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    t14 = (t0 + 784U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t15, 32, 2);
    t14 = (t0 + 1012);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 32);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t16 = *((unsigned int *)t2);
    t17 = (~(t16));
    t18 = *((unsigned int *)t3);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);

LAB9:    xsi_set_current_line(29, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1104);
    t6 = (t0 + 1104);
    t8 = (t6 + 44U);
    t9 = *((char **)t8);
    t10 = (t0 + 1104);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t7, t21, t9, t12, 2, 1, t13, 4, 2);
    t14 = (t7 + 4);
    t22 = *((unsigned int *)t14);
    t23 = (!(t22));
    t15 = (t21 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (!(t24));
    t26 = (t23 && t25);
    if (t26 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t6 = *((char **)t5);
    t8 = (t0 + 1104);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t7, t21, t6, t10, 2, 1, t11, 4, 2);
    t12 = (t7 + 4);
    t16 = *((unsigned int *)t12);
    t23 = (!(t16));
    t13 = (t21 + 4);
    t17 = *((unsigned int *)t13);
    t25 = (!(t17));
    t26 = (t23 && t25);
    if (t26 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t6 = *((char **)t5);
    t8 = (t0 + 1104);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t7, t21, t6, t10, 2, 1, t11, 4, 2);
    t12 = (t7 + 4);
    t16 = *((unsigned int *)t12);
    t23 = (!(t16));
    t13 = (t21 + 4);
    t17 = *((unsigned int *)t13);
    t25 = (!(t17));
    t26 = (t23 && t25);
    if (t26 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t6 = *((char **)t5);
    t8 = (t0 + 1104);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t7, t21, t6, t10, 2, 1, t11, 4, 2);
    t12 = (t7 + 4);
    t16 = *((unsigned int *)t12);
    t23 = (!(t16));
    t13 = (t21 + 4);
    t17 = *((unsigned int *)t13);
    t25 = (!(t17));
    t26 = (t23 && t25);
    if (t26 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t6 = *((char **)t5);
    t8 = (t0 + 1104);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t7, t21, t6, t10, 2, 1, t11, 4, 2);
    t12 = (t7 + 4);
    t16 = *((unsigned int *)t12);
    t23 = (!(t16));
    t13 = (t21 + 4);
    t17 = *((unsigned int *)t13);
    t25 = (!(t17));
    t26 = (t23 && t25);
    if (t26 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t6 = *((char **)t5);
    t8 = (t0 + 1104);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t7, t21, t6, t10, 2, 1, t11, 4, 2);
    t12 = (t7 + 4);
    t16 = *((unsigned int *)t12);
    t23 = (!(t16));
    t13 = (t21 + 4);
    t17 = *((unsigned int *)t13);
    t25 = (!(t17));
    t26 = (t23 && t25);
    if (t26 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t6 = *((char **)t5);
    t8 = (t0 + 1104);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t7, t21, t6, t10, 2, 1, t11, 4, 2);
    t12 = (t7 + 4);
    t16 = *((unsigned int *)t12);
    t23 = (!(t16));
    t13 = (t21 + 4);
    t17 = *((unsigned int *)t13);
    t25 = (!(t17));
    t26 = (t23 && t25);
    if (t26 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t6 = *((char **)t5);
    t8 = (t0 + 1104);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng16)));
    xsi_vlog_generic_convert_array_indices(t7, t21, t6, t10, 2, 1, t11, 4, 2);
    t12 = (t7 + 4);
    t16 = *((unsigned int *)t12);
    t23 = (!(t16));
    t13 = (t21 + 4);
    t17 = *((unsigned int *)t13);
    t25 = (!(t17));
    t26 = (t23 && t25);
    if (t26 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t6 = *((char **)t5);
    t8 = (t0 + 1104);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng18)));
    xsi_vlog_generic_convert_array_indices(t7, t21, t6, t10, 2, 1, t11, 4, 2);
    t12 = (t7 + 4);
    t16 = *((unsigned int *)t12);
    t23 = (!(t16));
    t13 = (t21 + 4);
    t17 = *((unsigned int *)t13);
    t25 = (!(t17));
    t26 = (t23 && t25);
    if (t26 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t6 = *((char **)t5);
    t8 = (t0 + 1104);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng20)));
    xsi_vlog_generic_convert_array_indices(t7, t21, t6, t10, 2, 1, t11, 4, 2);
    t12 = (t7 + 4);
    t16 = *((unsigned int *)t12);
    t23 = (!(t16));
    t13 = (t21 + 4);
    t17 = *((unsigned int *)t13);
    t25 = (!(t17));
    t26 = (t23 && t25);
    if (t26 == 1)
        goto LAB28;

LAB29:    goto LAB8;

LAB10:    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t21);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t21), t30);
    goto LAB11;

LAB12:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t21);
    t29 = (t18 - t19);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t21), t30);
    goto LAB13;

LAB14:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t21);
    t29 = (t18 - t19);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t21), t30);
    goto LAB15;

LAB16:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t21);
    t29 = (t18 - t19);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t21), t30);
    goto LAB17;

LAB18:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t21);
    t29 = (t18 - t19);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t21), t30);
    goto LAB19;

LAB20:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t21);
    t29 = (t18 - t19);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t21), t30);
    goto LAB21;

LAB22:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t21);
    t29 = (t18 - t19);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t21), t30);
    goto LAB23;

LAB24:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t21);
    t29 = (t18 - t19);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t21), t30);
    goto LAB25;

LAB26:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t21);
    t29 = (t18 - t19);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t21), t30);
    goto LAB27;

LAB28:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t21);
    t29 = (t18 - t19);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t21), t30);
    goto LAB29;

}


extern void work_m_00000000002670515139_0610666722_init()
{
	static char *pe[] = {(void *)Always_23_0};
	xsi_register_didat("work_m_00000000002670515139_0610666722", "isim/test_isim_beh.exe.sim/work/m_00000000002670515139_0610666722.didat");
	xsi_register_executes(pe);
}
