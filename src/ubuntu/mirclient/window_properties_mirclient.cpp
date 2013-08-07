/*
 * Copyright (C) 2013 Canonical Ltd
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
 * Authored by: Robert Carr <robert.carr@canonical.com>
 */

#include "window_properties_mirclient_priv.h"

namespace uamc = ubuntu::application::mir::client;

uamc::WindowProperties::WindowProperties()
    : cb(nullptr),
      input_ctx(nullptr)
{
    parameters.name = nullptr;
    parameters.width = 0;
    parameters.height = 0;
    parameters.buffer_usage = mir_buffer_usage_hardware;
}

UAUiWindowProperties* uamc::WindowProperties::as_u_window_properties()
{
    return static_cast<UAUiWindowProperties*>(this);
}
uamc::WindowProperties* uamc::WindowProperties::from_u_window_properties(UAUiWindowProperties* u_properties)
{
    return static_cast<uamc::WindowProperties*>(u_properties);
}

void uamc::WindowProperties::set_title(char const* window_title, size_t length)
{
    title = std::string(window_title, length);
    parameters.name = title.c_str();
}

void uamc::WindowProperties::set_input_cb_and_ctx(UAUiWindowInputEventCb callback, void* ctx)
{
    cb = callback;
    input_ctx = ctx;
}

MirSurfaceParameters const& uamc::WindowProperties::surface_parameters() const
{
    return parameters;
}

UAUiWindowInputEventCb uamc::WindowProperties::input_cb() const
{
    return cb;
}

void* uamc::WindowProperties::input_context() const
{
    return input_ctx;
}
