/*
 * Generated by Bluespec Compiler, version 2022.01 (build 066c7a8)
 * 
 * On Fri Dec  2 22:41:44 PST 2022
 * 
 */

/* Generation options: */
#ifndef __mkProc_h__
#define __mkProc_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"
#include "mkCsrFile.h"
#include "mkDMemory.h"
#include "mkIMemory.h"
#include "mkRFile.h"
#include "module_exec.h"
#include "module_decode.h"


/* Class declaration for the mkProc module */
class MOD_mkProc : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_mkCsrFile INST_csrf;
  MOD_mkDMemory INST_dMem;
  MOD_mkIMemory INST_iMem;
  MOD_Reg<tUInt32> INST_pc;
  MOD_mkRFile INST_rf;
  MOD_module_exec INST_instance_exec_1;
  MOD_module_decode INST_instance_decode_0;
 
 /* Constructor */
 public:
  MOD_mkProc(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUWide PORT_iMemInit_request_put;
  tUWide PORT_dMemInit_request_put;
 
 /* Publicly accessible definitions */
 public:
  tUWide DEF_exec___d20;
  tUWide DEF_decode___d7;
  tUInt32 DEF_rVal1__h383;
  tUInt32 DEF_rVal2__h384;
  tUInt32 DEF_epc__h2370;
  tUInt32 DEF_csrVal__h385;
  tUInt32 DEF_iMem_req_pc___d3;
  tUInt32 DEF_csrf_getMstatus____d4;
  tUInt8 DEF_csrf_started____d45;
  tUInt8 DEF_dMem_init_done____d272;
  tUInt8 DEF_iMem_init_done____d271;
  tUInt32 DEF_x__h1611;
  tUInt8 DEF_x__h1468;
  tUInt8 DEF_x__h1537;
  tUInt8 DEF_exec_0_BITS_120_TO_117___d21;
  tUInt8 DEF_exec_0_BIT_116___d33;
  tUInt8 DEF_exec_0_BITS_120_TO_117_1_EQ_3___d22;
  tUInt8 DEF_exec_0_BITS_120_TO_117_1_EQ_0___d29;
  tUInt8 DEF_exec_0_BITS_120_TO_117_1_EQ_12___d31;
  tUInt8 DEF_exec_0_BITS_120_TO_117_1_EQ_11___d30;
  tUInt8 DEF_exec_0_BITS_120_TO_117_1_EQ_4___d24;
  tUInt8 DEF_exec_0_BITS_120_TO_117_1_EQ_1___d28;
  tUInt8 DEF_NOT_exec_0_BITS_120_TO_117_1_EQ_3_2___d35;
 
 /* Local definitions */
 private:
  tUWide DEF_NOT_exec_0_BITS_120_TO_117_1_EQ_3_2_5_CONCAT_I_ETC___d232;
 
 /* Rules */
 public:
  void RL_doProc();
 
 /* Methods */
 public:
  tUInt32 METH_cpuToHost();
  tUInt8 METH_RDY_cpuToHost();
  void METH_hostToCpu(tUInt32 ARG_hostToCpu_startpc);
  tUInt8 METH_RDY_hostToCpu();
  void METH_iMemInit_request_put(tUWide ARG_iMemInit_request_put);
  tUInt8 METH_RDY_iMemInit_request_put();
  tUInt8 METH_iMemInit_done();
  tUInt8 METH_RDY_iMemInit_done();
  void METH_dMemInit_request_put(tUWide ARG_dMemInit_request_put);
  tUInt8 METH_RDY_dMemInit_request_put();
  tUInt8 METH_dMemInit_done();
  tUInt8 METH_RDY_dMemInit_done();
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkProc &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkProc &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkProc &backing);
  void vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_mkProc &backing);
};

#endif /* ifndef __mkProc_h__ */