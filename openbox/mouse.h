/* -*- indent-tabs-mode: nil; tab-width: 4; c-basic-offset: 4; -*-

   mouse.h for the Openbox window manager
   Copyright (c) 2003        Ben Jansens

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   See the COPYING file for a copy of the GNU General Public License.
*/

#ifndef ob__mouse_h
#define ob__mouse_h

#include "action.h"
#include "frame.h"
#include "misc.h"

#include <X11/Xlib.h>

void mouse_startup(gboolean reconfig);
void mouse_shutdown(gboolean reconfig);

gboolean mouse_bind(char *buttonstr, char *contextstr, ObMouseAction mact,
                    ObAction *action);

void mouse_event(struct _ObClient *client, XEvent *e);

void mouse_grab_for_client(struct _ObClient *client, gboolean grab);

ObFrameContext mouse_button_frame_context(ObFrameContext context,
                                          guint button);

#endif
