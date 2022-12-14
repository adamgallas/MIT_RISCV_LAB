/*
 * Generated by Bluespec Compiler, version 2022.01 (build 066c7a8)
 * 
 * On Fri Dec  2 22:41:44 PST 2022
 * 
 */

/* Generation options: */
#ifndef __mkConnectalMemoryInitializationInput_h__
#define __mkConnectalMemoryInitializationInput_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkConnectalMemoryInitializationInput module */
class MOD_mkConnectalMemoryInitializationInput : public Module {
 
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
  MOD_Reg<tUInt32> INST_done_requestAdapter_fbnbuff;
  MOD_Fifo<tUInt32> INST_done_requestAdapter_fifo;
  MOD_Reg<tUInt8> INST_request_requestAdapter_count;
  MOD_Reg<tUInt64> INST_request_requestAdapter_fbnbuff;
  MOD_Fifo<tUInt64> INST_request_requestAdapter_fifo;
 
 /* Constructor */
 public:
  MOD_mkConnectalMemoryInitializationInput(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_request_requestAdapter_fifo_i_notEmpty____d18;
  tUInt8 DEF_done_requestAdapter_fifo_i_notEmpty____d17;
  tUInt8 DEF_done_requestAdapter_fifo_notFull____d4;
  tUInt8 DEF_request_requestAdapter_fifo_notFull____d13;
  tUInt8 DEF_request_requestAdapter_count__h689;
  tUInt8 DEF_NOT_request_requestAdapter_count___d10;
 
 /* Local definitions */
 private:
 
 /* Rules */
 public:
 
 /* Methods */
 public:
  tUInt32 METH_portalIfc_messageSize_size(tUInt32 ARG_portalIfc_messageSize_size_methodNumber);
  tUInt8 METH_RDY_portalIfc_messageSize_size();
  tUInt8 METH_portalIfc_intr_status();
  tUInt8 METH_RDY_portalIfc_intr_status();
  tUInt32 METH_portalIfc_intr_channel();
  tUInt8 METH_RDY_portalIfc_intr_channel();
  void METH_portalIfc_requests_0_enq(tUInt32 ARG_portalIfc_requests_0_enq_v);
  tUInt8 METH_RDY_portalIfc_requests_0_enq();
  tUInt8 METH_portalIfc_requests_0_notFull();
  tUInt8 METH_RDY_portalIfc_requests_0_notFull();
  void METH_portalIfc_requests_1_enq(tUInt32 ARG_portalIfc_requests_1_enq_v);
  tUInt8 METH_RDY_portalIfc_requests_1_enq();
  tUInt8 METH_portalIfc_requests_1_notFull();
  tUInt8 METH_RDY_portalIfc_requests_1_notFull();
  tUInt32 METH_pipes_done_PipeOut_first();
  tUInt8 METH_RDY_pipes_done_PipeOut_first();
  void METH_pipes_done_PipeOut_deq();
  tUInt8 METH_RDY_pipes_done_PipeOut_deq();
  tUInt8 METH_pipes_done_PipeOut_notEmpty();
  tUInt8 METH_RDY_pipes_done_PipeOut_notEmpty();
  tUInt64 METH_pipes_request_PipeOut_first();
  tUInt8 METH_RDY_pipes_request_PipeOut_first();
  void METH_pipes_request_PipeOut_deq();
  tUInt8 METH_RDY_pipes_request_PipeOut_deq();
  tUInt8 METH_pipes_request_PipeOut_notEmpty();
  tUInt8 METH_RDY_pipes_request_PipeOut_notEmpty();
 
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
  void dump_VCD(tVCDDumpType dt,
		unsigned int levels,
		MOD_mkConnectalMemoryInitializationInput &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkConnectalMemoryInitializationInput &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkConnectalMemoryInitializationInput &backing);
};

#endif /* ifndef __mkConnectalMemoryInitializationInput_h__ */
