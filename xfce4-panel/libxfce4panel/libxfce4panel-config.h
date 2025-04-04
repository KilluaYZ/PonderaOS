/*
 * Copyright (C) 2009-2010 Nick Schermer <nick@xfce.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#if !defined(_LIBXFCE4PANEL_INSIDE_LIBXFCE4PANEL_H) && !defined(LIBXFCE4PANEL_COMPILATION)
#error "Only <libxfce4panel/libxfce4panel.h> can be included directly, this file may disappear or change contents"
#endif

#ifndef __LIBXFCE4PANEL_CONFIG_H__
#define __LIBXFCE4PANEL_CONFIG_H__

#include <glib-object.h>

G_BEGIN_DECLS

/**
 * LIBXFCE4PANEL_VERSION:
 *
 * String with the full version of the panel.
 *
 * Since: 4.8
 **/
#define LIBXFCE4PANEL_VERSION ("4.20.0")

/**
 * LIBXFCE4PANEL_MAJOR_VERSION:
 *
 * The major version number of the libxfce4panel library.
 * Like libxfce4panel_major_version, but from the headers used at
 * application compile time, rather than from the library
 * linked against at application run time.
 *
 * Since: 4.8
 **/
#define LIBXFCE4PANEL_MAJOR_VERSION (4)

/**
 * LIBXFCE4PANEL_MINOR_VERSION:
 *
 * The minor version number of the libxfce4panel library.
 * Like libxfce4panel_minor_version, but from the headers used at
 * application compile time, rather than from the library
 * linked against at application run time.
 *
 * Since: 4.8
 **/
#define LIBXFCE4PANEL_MINOR_VERSION (20)

/**
 * LIBXFCE4PANEL_MICRO_VERSION:
 *
 * The micro version number of the libxfce4panel library.
 * Like libxfce4panel_micro_version, but from the headers used at
 * application compile time, rather than from the library
 * linked against at application run time
 *
 * Since: 4.8
 **/
#define LIBXFCE4PANEL_MICRO_VERSION (0)

/**
 * LIBXFCE4PANEL_CHECK_VERSION:
 * @major : the major version number.
 * @minor : the minor version number.
 * @micro : the micro version number.
 *
 * Checks the version of the libxfce4panel library.
 *
 * Returns: %TRUE if the version of the libxfce4panel header files is
 *          the same as or newer than the passed-in version.
 *
 * Since: 4.8
 **/
#define LIBXFCE4PANEL_CHECK_VERSION(major, minor, micro) \
  (LIBXFCE4PANEL_MAJOR_VERSION > (major) \
   || (LIBXFCE4PANEL_MAJOR_VERSION == (major) \
       && LIBXFCE4PANEL_MINOR_VERSION > (minor)) \
   || (LIBXFCE4PANEL_MAJOR_VERSION == (major) \
       && LIBXFCE4PANEL_MINOR_VERSION == (minor) \
       && LIBXFCE4PANEL_MICRO_VERSION >= (micro)))

extern const guint libxfce4panel_major_version;
extern const guint libxfce4panel_minor_version;
extern const guint libxfce4panel_micro_version;

const gchar *
libxfce4panel_check_version (guint required_major,
                             guint required_minor,
                             guint required_micro);

G_END_DECLS

#endif /* !__LIBXFCE4PANEL_CONFIG_H__ */
