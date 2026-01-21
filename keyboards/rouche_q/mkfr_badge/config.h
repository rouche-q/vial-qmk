#pragma once

#undef I2C_DRIVER
#define I2C_DRIVER I2CD1
#undef I2C1_SCL_PIN
#define I2C1_SCL_PIN GP3
#undef I2C1_SDA_PIN
#define I2C1_SDA_PIN GP2
#define OLED_TIMEOUT 120000
