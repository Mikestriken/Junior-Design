/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: eMbEdEdSyStEmS.c
 *
 * Code generated for Simulink model 'eMbEdEdSyStEmS'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Wed Dec  7 14:46:22 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "eMbEdEdSyStEmS.h"
#include "eMbEdEdSyStEmS_private.h"

/* Block signals (default storage) */
B_eMbEdEdSyStEmS_T eMbEdEdSyStEmS_B;

/* Real-time model */
static RT_MODEL_eMbEdEdSyStEmS_T eMbEdEdSyStEmS_M_;
RT_MODEL_eMbEdEdSyStEmS_T *const eMbEdEdSyStEmS_M = &eMbEdEdSyStEmS_M_;

/* Model step function */
void eMbEdEdSyStEmS_step(void)
{
  /* Logic: '<Root>/NOT1' incorporates:
   *  Constant: '<Root>/Constant'
   *  Logic: '<Root>/NOT'
   */
  eMbEdEdSyStEmS_B.NOT1 = !(eMbEdEdSyStEmS_P.Constant_Value != 0.0);

  /* S-Function (c280xgpio_do): '<Root>/Digital Output' */
  {
    if (eMbEdEdSyStEmS_B.NOT1) {
      GpioDataRegs.GPBSET.bit.GPIO34 = 1U;
    } else {
      GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1U;
    }
  }

  /* Logic: '<Root>/NOT1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  eMbEdEdSyStEmS_B.NOT1 = !(eMbEdEdSyStEmS_P.Constant1_Value != 0.0);

  /* S-Function (c280xgpio_do): '<Root>/Digital Output1' */
  {
    if (eMbEdEdSyStEmS_B.NOT1) {
      GpioDataRegs.GPASET.bit.GPIO31 = 1U;
    } else {
      GpioDataRegs.GPACLEAR.bit.GPIO31 = 1U;
    }
  }

  {                                    /* Sample time: [0.2s, 0.0s] */
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  eMbEdEdSyStEmS_M->Timing.taskTime0 =
    ((time_T)(++eMbEdEdSyStEmS_M->Timing.clockTick0)) *
    eMbEdEdSyStEmS_M->Timing.stepSize0;
}

/* Model initialize function */
void eMbEdEdSyStEmS_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)eMbEdEdSyStEmS_M, 0,
                sizeof(RT_MODEL_eMbEdEdSyStEmS_T));
  rtmSetTFinal(eMbEdEdSyStEmS_M, -1);
  eMbEdEdSyStEmS_M->Timing.stepSize0 = 0.2;

  /* External mode info */
  eMbEdEdSyStEmS_M->Sizes.checksums[0] = (3263342886U);
  eMbEdEdSyStEmS_M->Sizes.checksums[1] = (2226791934U);
  eMbEdEdSyStEmS_M->Sizes.checksums[2] = (57742325U);
  eMbEdEdSyStEmS_M->Sizes.checksums[3] = (4225082568U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    eMbEdEdSyStEmS_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(eMbEdEdSyStEmS_M->extModeInfo,
      &eMbEdEdSyStEmS_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(eMbEdEdSyStEmS_M->extModeInfo,
                        eMbEdEdSyStEmS_M->Sizes.checksums);
    rteiSetTPtr(eMbEdEdSyStEmS_M->extModeInfo, rtmGetTPtr(eMbEdEdSyStEmS_M));
  }

  /* block I/O */
  (void) memset(((void *) &eMbEdEdSyStEmS_B), 0,
                sizeof(B_eMbEdEdSyStEmS_T));

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output' */
  EALLOW;
  GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCFU;
  GpioCtrlRegs.GPBDIR.all |= 0x4U;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output1' */
  EALLOW;
  GpioCtrlRegs.GPAMUX2.all &= 0x3FFFFFFFU;
  GpioCtrlRegs.GPADIR.all |= 0x80000000U;
  EDIS;
}

/* Model terminate function */
void eMbEdEdSyStEmS_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
