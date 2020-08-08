/*
 * float32tofloat64.cpp
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

#include "float32tofloat64.h"
#include "float32tofloat64_private.h"

/* Block signals (default storage) */
B_float32tofloat64_T float32tofloat64_B;

/* Block states (default storage) */
DW_float32tofloat64_T float32tofloat64_DW;

/* Real-time model */
RT_MODEL_float32tofloat64_T float32tofloat64_M_ = RT_MODEL_float32tofloat64_T();
RT_MODEL_float32tofloat64_T *const float32tofloat64_M = &float32tofloat64_M_;

/* Forward declaration for local functions */
static void matlabCodegenHandle_matlabCod_i(ros_slros_internal_block_Subs_T *obj);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj);
static void matlabCodegenHandle_matlabCod_i(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

/* Model step function */
void float32tofloat64_step(void)
{
  SL_Bus_float32tofloat64_std_msgs_Float32 b_varargout_2;
  boolean_T b_varargout_1;
  SL_Bus_float32tofloat64_std_msgs_Float64 rtb_BusAssignment;

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe' */
  /* MATLABSystem: '<S3>/SourceBlock' incorporates:
   *  Inport: '<S4>/In1'
   */
  b_varargout_1 = Sub_float32tofloat64_428.getLatestMessage(&b_varargout_2);

  /* Outputs for Enabled SubSystem: '<S3>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S4>/Enable'
   */
  if (b_varargout_1) {
    float32tofloat64_B.In1 = b_varargout_2;
  }

  /* End of MATLABSystem: '<S3>/SourceBlock' */
  /* End of Outputs for SubSystem: '<S3>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe' */

  /* BusAssignment: '<Root>/Bus Assignment' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  rtb_BusAssignment.Data = float32tofloat64_B.In1.Data;

  /* Outputs for Atomic SubSystem: '<Root>/Publish' */
  /* MATLABSystem: '<S2>/SinkBlock' */
  Pub_float32tofloat64_435.publish(&rtb_BusAssignment);

  /* End of Outputs for SubSystem: '<Root>/Publish' */
}

/* Model initialize function */
void float32tofloat64_initialize(void)
{
  /* Registration code */

  /* block I/O */
  (void) memset((static_cast<void *>(&float32tofloat64_B)), 0,
                sizeof(B_float32tofloat64_T));

  /* states (dwork) */
  (void) memset(static_cast<void *>(&float32tofloat64_DW), 0,
                sizeof(DW_float32tofloat64_T));

  {
    char_T tmp[48];
    char_T tmp_0[8];
    int32_T i;
    static const char_T tmp_1[47] = { '/', 'c', 'a', 't', 'v', 'e', 'h', 'i',
      'c', 'l', 'e', '/', 'd', 'i', 's', 't', 'a', 'n', 'c', 'e', 'E', 's', 't',
      'i', 'm', 'a', 't', 'o', 'r', 'S', 't', 'e', 'e', 'r', 'i', 'n', 'g', 'B',
      'a', 's', 'e', 'd', '/', 'd', 'i', 's', 't' };

    static const char_T tmp_2[7] = { '/', 'd', 'i', 's', 't', '6', '4' };

    /* Start for Atomic SubSystem: '<Root>/Subscribe' */
    /* Start for MATLABSystem: '<S3>/SourceBlock' */
    float32tofloat64_DW.obj_c.matlabCodegenIsDeleted = false;
    float32tofloat64_DW.objisempty = true;
    float32tofloat64_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 47; i++) {
      tmp[i] = tmp_1[i];
    }

    tmp[47] = '\x00';
    Sub_float32tofloat64_428.createSubscriber(tmp, 1);
    float32tofloat64_DW.obj_c.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S3>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe' */

    /* Start for Atomic SubSystem: '<Root>/Publish' */
    /* Start for MATLABSystem: '<S2>/SinkBlock' */
    float32tofloat64_DW.obj.matlabCodegenIsDeleted = false;
    float32tofloat64_DW.objisempty_j = true;
    float32tofloat64_DW.obj.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      tmp_0[i] = tmp_2[i];
    }

    tmp_0[7] = '\x00';
    Pub_float32tofloat64_435.createPublisher(tmp_0, 1);
    float32tofloat64_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S2>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish' */
  }

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S3>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S4>/Out1' */
  float32tofloat64_B.In1 = float32tofloat64_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S3>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe' */
}

/* Model terminate function */
void float32tofloat64_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Subscribe' */
  /* Terminate for MATLABSystem: '<S3>/SourceBlock' */
  matlabCodegenHandle_matlabCod_i(&float32tofloat64_DW.obj_c);

  /* End of Terminate for SubSystem: '<Root>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<Root>/Publish' */
  /* Terminate for MATLABSystem: '<S2>/SinkBlock' */
  matlabCodegenHandle_matlabCodeg(&float32tofloat64_DW.obj);

  /* End of Terminate for SubSystem: '<Root>/Publish' */
}
