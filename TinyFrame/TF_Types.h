#define TF_TYPE_MCU_ID                      0x00
#define TF_TYPE_MCU_STATUS                  0x01

#define TF_TYPE_SAFETY_WATCHDOG_PING        0x08
#define TF_TYPE_SAFETY_WATCHDOG_CONFIG      0x09
#define TF_TYPE_SAFETY_WATCHDOG_STATUS      0x0A

#define TF_TYPE_EMERGENCY_STOP              0x0F

#define TF_TYPE_STEPPER_1_ENABLE            0x10
#define TF_TYPE_STEPPER_1_MODE              0x11
#define TF_TYPE_STEPPER_1_TELEMETRY         0x12
#define TF_TYPE_STEPPER_1_TARGET_SPEED      0x13
#define TF_TYPE_STEPPER_1_TARGET_POSITION   0x14
#define TF_TYPE_STEPPER_1_CURRENT_SPEED     0x15
#define TF_TYPE_STEPPER_1_CURRENT_POSITION  0x16
#define TF_TYPE_STEPPER_1_CONFIG            0x1E
#define TF_TYPE_STEPPER_1_STATUS            0x1F

#define TF_TYPE_STEPPER_2_ENABLE            0x20
#define TF_TYPE_STEPPER_2_MODE              0x21
#define TF_TYPE_STEPPER_2_TELEMETRY         0x22
#define TF_TYPE_STEPPER_2_TARGET_SPEED      0x23
#define TF_TYPE_STEPPER_2_TARGET_POSITION   0x24
#define TF_TYPE_STEPPER_2_CURRENT_SPEED     0x25
#define TF_TYPE_STEPPER_2_CURRENT_POSITION  0x26
#define TF_TYPE_STEPPER_2_CONFIG            0x2E
#define TF_TYPE_STEPPER_2_STATUS            0x2F

#define TF_TYPE_STEPPER_3_ENABLE            0x30
#define TF_TYPE_STEPPER_3_MODE              0x31
#define TF_TYPE_STEPPER_3_TELEMETRY         0x32
#define TF_TYPE_STEPPER_3_TARGET_SPEED      0x33
#define TF_TYPE_STEPPER_3_TARGET_POSITION   0x34
#define TF_TYPE_STEPPER_3_CURRENT_SPEED     0x35
#define TF_TYPE_STEPPER_3_CURRENT_POSITION  0x36
#define TF_TYPE_STEPPER_3_CONFIG            0x3E
#define TF_TYPE_STEPPER_3_STATUS            0x3F

#define TF_TYPE_STEPPER_4_ENABLE            0x40
#define TF_TYPE_STEPPER_4_MODE              0x41
#define TF_TYPE_STEPPER_4_TELEMETRY         0x42
#define TF_TYPE_STEPPER_4_TARGET_SPEED      0x43
#define TF_TYPE_STEPPER_4_TARGET_POSITION   0x44
#define TF_TYPE_STEPPER_4_CURRENT_SPEED     0x45
#define TF_TYPE_STEPPER_4_CURRENT_POSITION  0x46
#define TF_TYPE_STEPPER_4_CONFIG            0x4E
#define TF_TYPE_STEPPER_4_STATUS            0x4F

#define TF_TYPE_SERVOS_ENABLE               0x50
#define TF_TYPE_SERVOS_SET_TARGET           0x51
#define TF_TYPE_SERVOS_SET_VOLTAGE          0x52
#define TF_TYPE_SERVOS_STATUS               0x5F

#define TF_TYPE_DIGITAL_INPUT_STATES        0x60
#define TF_TYPE_DIGITAL_INPUT_CONFIG        0x61

#define TF_TYPE_DIGITAL_OUTPUT_STATES       0x62

#define TF_TYPE_ANALOG_INPUT_STATES         0x63
#define TF_TYPE_ANALOG_INPUT_CONFIG         0x64

#define TF_TYPE_ENCODER_1_STATE             0x70
#define TF_TYPE_ENCODER_1_CONFIG            0x70

#define TF_TYPE_ENCODER_2_STATE             0x78
#define TF_TYPE_ENCODER_2_CONFIG            0x78

#define TF_TYPE_RESET_BOARD                 0xFE
#define TF_TYPE_GO_TO_DFU                   0xFF