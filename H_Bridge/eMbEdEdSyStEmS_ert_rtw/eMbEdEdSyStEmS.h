/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: eMbEdEdSyStEmS.h
 *
 * Code generated for Simulink model 'eMbEdEdSyStEmS'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Wed Dec  7 20:00:43 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_eMbEdEdSyStEmS_h_
#define RTW_HEADER_eMbEdEdSyStEmS_h_
#ifndef eMbEdEdSyStEmS_COMMON_INCLUDES_
#define eMbEdEdSyStEmS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "ext_mode.h"
#include "c2000BoardSupport.h"
#include "MW_f2837xD_includes.h"
#include "IQmathLib.h"
#endif                                 /* eMbEdEdSyStEmS_COMMON_INCLUDES_ */

#include "eMbEdEdSyStEmS_types.h"
#include <string.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

extern void config_ePWMSyncSource(void);
extern void config_ePWMSyncSource(void);
extern void config_ePWM_GPIO (void);
extern void config_ePWM_TBSync (void);
extern void config_ePWM_GPIO (void);
extern void config_ePWM_XBAR(void);
extern void config_ePWM_TBSync(void);

/* Block signals (default storage) */
typedef struct {
  real_T Sum;                          /* '<Root>/Sum' */
  real_T startTime;                    /* '<S1>/startTime' */
} B_eMbEdEdSyStEmS_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */
} DW_eMbEdEdSyStEmS_T;

/* Parameters (default storage) */
struct P_eMbEdEdSyStEmS_T_ {
  real_T Constant4_Value;              /* Expression: .5
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Constant2_Value;              /* Expression: .7
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T SineWave_Amp;                 /* Expression: 1
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Bias;                /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Freq;                /* Expression: 2*pi*60
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Phase;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T Constant3_Value;              /* Expression: 0.5
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Gain_Gain;                    /* Expression: 2500
                                        * Referenced by: '<Root>/Gain'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_eMbEdEdSyStEmS_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_eMbEdEdSyStEmS_T eMbEdEdSyStEmS_P;

/* Block signals (default storage) */
extern B_eMbEdEdSyStEmS_T eMbEdEdSyStEmS_B;

/* Block states (default storage) */
extern DW_eMbEdEdSyStEmS_T eMbEdEdSyStEmS_DW;

/* Model entry point functions */
extern void eMbEdEdSyStEmS_initialize(void);
extern void eMbEdEdSyStEmS_step(void);
extern void eMbEdEdSyStEmS_terminate(void);

/* Real-time Model object */
extern RT_MODEL_eMbEdEdSyStEmS_T *const eMbEdEdSyStEmS_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Product1' : Unused code path elimination
 * Block '<S1>/Clock' : Unused code path elimination
 * Block '<S1>/Constant' : Unused code path elimination
 * Block '<S1>/Look-Up Table1' : Unused code path elimination
 * Block '<S1>/Math Function' : Unused code path elimination
 * Block '<S1>/Output' : Unused code path elimination
 * Block '<S1>/Sum' : Unused code path elimination
 * Block '<Root>/Sin' : Unused code path elimination
 */

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
 * '<Root>' : 'eMbEdEdSyStEmS'
 * '<S1>'   : 'eMbEdEdSyStEmS/Repeating Sequence'
 */
#endif                                 /* RTW_HEADER_eMbEdEdSyStEmS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */