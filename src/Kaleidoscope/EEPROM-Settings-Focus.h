/* -*- mode: c++ -*-
 * Kaleidoscope-EEPROM-Settings -- Basic EEPROM settings plugin for Kaleidoscope.
 * Copyright (C) 2017  Gergely Nagy
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <Kaleidoscope.h>

namespace FocusHooks {
  bool settings (const char *command);
  bool eeprom (const char *command);
};

#define FOCUS_HOOK_SETTINGS FOCUS_HOOK(FocusHooks::settings,            \
                                       "settings.valid?\n"              \
                                       "---------------\n"              \
                                       "Return whether the EEPROM settings are valid, or not.\n\n" \
                                       "settings.version\n"             \
                                       "----------------\n"             \
                                       "Return the version of the EEPROM settings.\n\n" \
                                       "settings.crc\n"                 \
                                       "------------\n"                 \
                                       "Return the CRC of the settings.")

#define FOCUS_HOOK_EEPROM FOCUS_HOOK(FocusHooks::eeprom,                \
                                     "eeprom.dump\n"                    \
                                     "-----------\n"                    \
                                     "Dump the contents of EEPROM.\n\n" \
                                     "eeprom.upload BYTES...\n"         \
                                     "----------------------\n"         \
                                     "Upload `BYTES` to EEPROM.")
