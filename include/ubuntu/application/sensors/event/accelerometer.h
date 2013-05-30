/*
 * Copyright © 2013 Canonical Ltd.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authored by: Ricardo Mendoza <ricardo.mendoza@canonical.com>
 */

#ifndef UBUNTU_APPLICATION_SENSORS_ACCELEROMETER_EVENT_H_
#define UBUNTU_APPLICATION_SENSORS_ACCELEROMETER_EVENT_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

    typedef void UASAccelerometerEvent;

    uint64_t
    uas_accelerometer_event_get_timestamp(
        UASAccelerometerEvent* event);
   
    float
    uas_accelerometer_event_get_acceleration_x(
        UASAccelerometerEvent* event);
  
    float
    uas_accelerometer_event_get_acceleration_y(
        UASAccelerometerEvent* event);
  
    float
    uas_accelerometer_event_get_acceleration_z(
        UASAccelerometerEvent* event);

#ifdef __cplusplus
}
#endif

#endif /* UBUNTU_APPLICATION_SENSORS_ACCELEROMETER_EVENT_H_ */