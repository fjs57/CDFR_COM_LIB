/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-1.0.0-dev */

#include "protos/Stepper.pb.h"
#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

PB_BIND(StepperEnable, StepperEnable, AUTO)


PB_BIND(StepperMode, StepperMode, AUTO)


PB_BIND(StepperTelemetry, StepperTelemetry, AUTO)


PB_BIND(StepperSpeed, StepperSpeed, AUTO)


PB_BIND(StepperPosition, StepperPosition, AUTO)


PB_BIND(StepperConfig, StepperConfig, AUTO)


PB_BIND(StepperStatus, StepperStatus, AUTO)







#ifndef PB_CONVERT_DOUBLE_FLOAT
/* On some platforms (such as AVR), double is really float.
 * To be able to encode/decode double on these platforms, you need.
 * to define PB_CONVERT_DOUBLE_FLOAT in pb.h or compiler command line.
 */
PB_STATIC_ASSERT(sizeof(double) == 8, DOUBLE_MUST_BE_8_BYTES)
#endif

