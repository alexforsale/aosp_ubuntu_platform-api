/*
 * Copyright (C) 2014 Canonical Ltd
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

#include <ubuntu/application/lifecycle_delegate.h>
#include <ubuntu/application/id.h>
#include <ubuntu/application/description.h>
#include <ubuntu/application/instance.h>
#include <ubuntu/application/options.h>
#include <ubuntu/application/sensors/haptic.h>

#include <ubuntu/application/location/service.h>
#include <ubuntu/application/location/heading_update.h>
#include <ubuntu/application/location/position_update.h>
#include <ubuntu/application/location/velocity_update.h>

#include <ubuntu/application/url_dispatcher/service.h>

#include <ubuntu/application/init.h>

// Application Module Config
void u_application_init(void*)
{
}

void u_application_finish()
{
}

// Lifecycle helpers
UApplicationLifecycleDelegate* u_application_lifecycle_delegate_new()
{
    return NULL;
}

void u_application_lifecycle_delegate_set_context (UApplicationLifecycleDelegate*, void*)
{
}

void u_application_lifecycle_delegate_ref (UApplicationLifecycleDelegate*)
{
}

void u_application_lifecycle_delegate_unref (UApplicationLifecycleDelegate*)
{
}

void u_application_lifecycle_delegate_set_application_resumed_cb (UApplicationLifecycleDelegate*, u_on_application_resumed)
{
}

void u_application_lifecycle_delegate_set_application_about_to_stop_cb (UApplicationLifecycleDelegate*, u_on_application_about_to_stop)
{
}

// Application Helpers

// UApplicationId
UApplicationId* u_application_id_new_from_stringn(const char*, size_t)
{
    return NULL;
}

void u_application_id_destroy(UApplicationId*)
{
}

int u_application_id_compare(UApplicationId*, UApplicationId*)
{
}

// UApplicationDescription
UApplicationDescription* u_application_description_new()
{
    return NULL;
}

void u_application_description_destroy (UApplicationDescription*)
{
}

void u_application_description_set_application_id (UApplicationDescription*, UApplicationId*)
{
}

void u_application_description_set_application_lifecycle_delegate (UApplicationDescription*, UApplicationLifecycleDelegate*)
{
}

// UApplicationOptions
UApplicationOptions* u_application_options_new_from_cmd_line(int, char**)
{
    return NULL;
}

void u_application_options_destroy(UApplicationOptions*)
{
}

// UApplicationInstance
UApplicationInstance* u_application_instance_new_from_description_with_options(UApplicationDescription*, UApplicationOptions*)
{
    return NULL;
}

// Sensors
UASensorsHaptic* ua_sensors_haptic_new()
{
    return NULL;
}

UStatus ua_sensors_haptic_enable(UASensorsHaptic*)
{
    return U_STATUS_ERROR;
}

UStatus ua_sensors_haptic_disable(UASensorsHaptic*)
{
    return U_STATUS_ERROR;
}

UStatus ua_sensors_haptic_vibrate_once(UASensorsHaptic*, uint32_t)
{
    return U_STATUS_ERROR;
}

UStatus ua_sensors_haptic_vibrate_with_pattern(UASensorsHaptic*, uint32_t*, uint32_t)
{
    return U_STATUS_ERROR;
}

// Location
void ua_location_service_controller_ref(UALocationServiceController*)
{
}

void ua_location_service_controller_unref(UALocationServiceController*)
{
}

void ua_location_service_controller_set_status_changed_handler(UALocationServiceController*, UALocationServiceStatusChangedHandler, void*)
{
}

UStatus ua_location_service_controller_query_status(UALocationServiceController*, UALocationServiceStatusFlags*)
{
    return U_STATUS_ERROR;
}

UStatus ua_location_service_controller_enable_service(UALocationServiceController*)
{
    return U_STATUS_ERROR;
}

UStatus ua_location_service_controller_disable_service(UALocationServiceController*)
{
    return U_STATUS_ERROR;
}

UStatus ua_location_service_controller_enable_gps(UALocationServiceController*)
{
    return U_STATUS_ERROR;
}

UStatus ua_location_service_controller_disable_gps(UALocationServiceController*)
{
    return U_STATUS_ERROR;
}

void ua_location_heading_update_ref(UALocationHeadingUpdate*)
{
}

void ua_location_heading_update_unref(UALocationHeadingUpdate*)
{
}

uint64_t ua_location_heading_update_get_timestamp(UALocationHeadingUpdate*)
{
    return 0;
}

double ua_location_heading_update_get_heading_in_degree(UALocationHeadingUpdate*)
{
    return 0;
}

void ua_location_position_update_ref(UALocationPositionUpdate*)
{
}

void ua_location_position_update_unref(UALocationPositionUpdate*)
{
}

uint64_t ua_location_position_update_get_timestamp(UALocationPositionUpdate*)
{
    return 0;
}

double ua_location_position_update_get_latitude_in_degree(UALocationPositionUpdate*)
{
    return 0;
}

double ua_location_position_update_get_longitude_in_degree(UALocationPositionUpdate*)
{
    return 0;
}

bool ua_location_position_update_has_altitude(UALocationPositionUpdate*)
{
    return 0;
}

double ua_location_position_update_get_altitude_in_meter(UALocationPositionUpdate*)
{
    return 0;
}

UALocationServiceSession* ua_location_service_create_session_for_low_accuracy(UALocationServiceRequirementsFlags)
{
    return NULL;
}

UALocationServiceSession* ua_location_service_create_session_for_high_accuracy(UALocationServiceRequirementsFlags)
{
    return NULL;
}

UALocationServiceController* ua_location_service_create_controller()
{
    return NULL;
}

void ua_location_service_session_ref(UALocationServiceSession*)
{
}

void ua_location_service_session_unref(UALocationServiceSession*)
{
}

void ua_location_service_session_set_position_updates_handler(UALocationServiceSession*, UALocationServiceSessionPositionUpdatesHandler, void*)
{
}

void ua_location_service_session_set_heading_updates_handler(UALocationServiceSession*, UALocationServiceSessionHeadingUpdatesHandler, void*)
{
}

void ua_location_service_session_set_velocity_updates_handler(UALocationServiceSession*, UALocationServiceSessionVelocityUpdatesHandler, void*)
{
}

UStatus ua_location_service_session_start_position_updates(UALocationServiceSession*)
{
    return U_STATUS_ERROR;
}

void ua_location_service_session_stop_position_updates(UALocationServiceSession*)
{
}

UStatus ua_location_service_session_start_heading_updates(UALocationServiceSession*)
{
    return U_STATUS_ERROR;
}

void ua_location_service_session_stop_heading_updates(UALocationServiceSession*)
{
}

UStatus ua_location_service_session_start_velocity_updates(UALocationServiceSession*)
{
    return U_STATUS_ERROR;
}

void ua_location_service_session_stop_velocity_updates(UALocationServiceSession*)
{
}

void ua_location_velocity_update_ref(UALocationVelocityUpdate*)
{
}

void ua_location_velocity_update_unref(UALocationVelocityUpdate*)
{
}

uint64_t ua_location_velocity_update_get_timestamp(UALocationVelocityUpdate*)
{
    return 0;
}

double ua_location_velocity_update_get_velocity_in_meters_per_second(UALocationVelocityUpdate*)
{
    return 0;
}

// URL Dispatcher

UAUrlDispatcherSession* ua_url_dispatcher_session()
{
    return NULL;
}

void ua_url_dispatcher_session_open(UAUrlDispatcherSession*, const char*, UAUrlDispatcherSessionDispatchHandler, void*)
{
}
