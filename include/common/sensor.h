/*
 * Copyright © 2017-2018 The Crust Firmware Authors.
 * SPDX-License-Identifier: (BSD-3-Clause OR GPL-2.0)
 */

#ifndef COMMON_SENSOR_H
#define COMMON_SENSOR_H

#include <stdint.h>

uint8_t sensor_get_sensor_capability(void);

uint8_t sensor_get_sensor_get_info(void);

uint16_t sensor_get_sensor_value(void);

uint8_t sensor_config_periodic_readings(void);

uint8_t sensor_config_sensor_bounds(void);

uint8_t sensor_async_sensor_value(void);

#endif /* COMMON_SENSOR_H */
