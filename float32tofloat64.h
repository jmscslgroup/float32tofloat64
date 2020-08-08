/*
 * float32tofloat64.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "float32tofloat64".
 *
 * Model version              : 1.45
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C++ source code generated on : Sat Aug  8 09:57:17 2020
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_float32tofloat64_h_
#define RTW_HEADER_float32tofloat64_h_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "float32tofloat64_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  SL_Bus_float32tofloat64_std_msgs_Float32 In1;/* '<S4>/In1' */
} B_float32tofloat64_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  ros_slros_internal_block_Publ_T obj; /* '<S2>/SinkBlock' */
  ros_slros_internal_block_Subs_T obj_c;/* '<S3>/SourceBlock' */
  boolean_T objisempty;                /* '<S3>/SourceBlock' */
  boolean_T objisempty_j;              /* '<S2>/SinkBlock' */
} DW_float32tofloat64_T;

/* Parameters (default storage) */
struct P_float32tofloat64_T_ {
  SL_Bus_float32tofloat64_std_msgs_Float32 Out1_Y0;/* Computed Parameter: Out1_Y0
                                                    * Referenced by: '<S4>/Out1'
                                                    */
  SL_Bus_float32tofloat64_std_msgs_Float32 Constant_Value;/* Computed Parameter: Constant_Value
                                                           * Referenced by: '<S3>/Constant'
                                                           */
  SL_Bus_float32tofloat64_std_msgs_Float64 Constant_Value_a;/* Computed Parameter: Constant_Value_a
                                                             * Referenced by: '<S1>/Constant'
                                                             */
};

/* Real-time Model Data Structure */
struct tag_RTM_float32tofloat64_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern P_float32tofloat64_T float32tofloat64_P;

#ifdef __cplusplus

}
#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern B_float32tofloat64_T float32tofloat64_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern DW_float32tofloat64_T float32tofloat64_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void float32tofloat64_initialize(void);
  extern void float32tofloat64_step(void);
  extern void float32tofloat64_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_float32tofloat64_T *const float32tofloat64_M;

#ifdef __cplusplus

}
#endif

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'float32tofloat64'
 * '<S1>'   : 'float32tofloat64/Blank Message'
 * '<S2>'   : 'float32tofloat64/Publish'
 * '<S3>'   : 'float32tofloat64/Subscribe'
 * '<S4>'   : 'float32tofloat64/Subscribe/Enabled Subsystem'
 */
#endif                                 /* RTW_HEADER_float32tofloat64_h_ */
