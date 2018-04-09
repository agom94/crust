/*
 * Copyright © 2017-2018 The Crust Firmware Authors.
 * SPDX-License-Identifier: (BSD-3-Clause OR GPL-2.0)
 */

#include <compiler.h>
#include <debug.h>
#include <error.h>
#include <sensor.h>
#include <stdint.h>
#include <util.h>

uint8_t sensor_get_sensor_capability(void)
{

    return SUCCESS;
}

uint8_t sensor_get_sensor_get_info(void)
{
    return SUCCESS;
}

uint16_t sensor_get_sensor_value(void)
{
    uint16_t value;

    return value;
}

uint8_t sensor_config_periodic_readings(void)
{
    return SUCCESS;
}

uint8_t sensor_config_sensor_bounds(void)
{

    return SUCCESS;
}

uint8_t sensor_async_sensor_value(void)
{

    return SUCCESS;
}