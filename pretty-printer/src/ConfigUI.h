/**
 *   Copyright (C) 2009  Cedric Tabin
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License along
 *   with this program; if not, write to the Free Software Foundation, Inc.,
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef PP_CONFIG_UI_H
#define PP_CONFIG_UI_H

//========================================== INCLUDES =========================================================

#include <gtk/gtk.h>
#include "PrettyPrinter.h"

//========================================== VARIABLES ========================================================

//just add the keyword extern if not in the ConfigUI.c
#ifndef PP_CONFIG_UI_PPOPTIONS
	extern
#endif

PrettyPrintingOptions* prettyPrintingOptions;

//========================================== FUNCTIONS ========================================================

GtkWidget* createPrettyPrinterConfigUI(GtkDialog* dialog);
void saveSettings();

#endif
