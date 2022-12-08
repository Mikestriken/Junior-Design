/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: eMbEdEdSyStEmS_data.c
 *
 * Code generated for Simulink model 'eMbEdEdSyStEmS'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Wed Dec  7 18:32:46 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "eMbEdEdSyStEmS.h"

/* Block parameters (default storage) */
P_eMbEdEdSyStEmS_T eMbEdEdSyStEmS_P = {
  /* Mask Parameter: RepeatingSequence_rep_seq_y
   * Referenced by: '<S1>/Look-Up Table1'
   */
  { 0.0, 0.016666666666666666 },

  /* Expression: .5
   * Referenced by: '<Root>/Constant4'
   */
  0.5,

  /* Expression: .7
   * Referenced by: '<Root>/Constant2'
   */
  0.7,

  /* Expression: 2*pi*60
   * Referenced by: '<Root>/Constant'
   */
  376.99111843077515,

  /* Expression: period
   * Referenced by: '<S1>/Constant'
   */
  0.016667,

  /* Expression: rep_seq_t - min(rep_seq_t)
   * Referenced by: '<S1>/Look-Up Table1'
   */
  { 0.0, 0.016666666666666666 },

  /* Expression: .5
   * Referenced by: '<Root>/Constant3'
   */
  0.5,

  /* Expression: 2500
   * Referenced by: '<Root>/Gain'
   */
  2500.0
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
