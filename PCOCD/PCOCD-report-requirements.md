# PCOCD报告需求

* 总体数据通路图
  * P1（finished）
  * P2（finished）
  * P3（finished）
  * P4（finished）
* 各个模块定义
  * 基本描述（文字）
  * 模块接口（表：名称、方向、取值意义描述）
  * 功能定义（表：序号、名称、功能描述）
  * P1
    * mips (instruction_test, p1_test)
    * alu (alu_test)
    * controller // (controller_test)
    * dm (dm_test)
    * ext (ext_test)
    * gpr (gpr_test)
    * ifu (ifu_test)
    * im (im_test)
    * others(test, unit_test, macro, unit_test/macro)
  * P2 (Updated)
    * new: bac (bac_test)
    * new: reg32
    * update: mips
      * new: p2_test
      * update: instruction_test
    * update: controller(remove controller_test)
    * update: ifu (ifu_test)
  * P3(Updated)
    * new: main
    * new: bridge (bridge_test)
    * new: tc (tc_test)
    * new: cp0 (cp0_test)
    * update: mips
      * new: p3_test
      * update: instruction_test
    * update: dm, im, ifu and their tests (capacity)
  * P4(Updated)
    * new: practical, smoke
    * new: practical, smoke, sys tests
    * new: ucf files
    * new: divider
    * new: dt(dt_encoder, multi_dt), 
    * new: revert32(could be shadowed)
    * update: tc(set preset to 0 when count is 0)
    * update: dm, im, ifu (capacity to 256)
    * delete: remove all the tests
* 机器指令描述（表：助记符、操作码、功能）
  * MIPS-Lite3共计18条
* 测试程序+注释
  * test1
  * test2
  * test3-main
  * test3-int

* 测试结果+文字说明
  * test1/2：regs对拍（+每条指令log）
  * test3：指令简单log+TC、CP0等寄存器值+关键点标注（4180, add1, new-in32...）
  * test4：图片、提主频
* 收获体会