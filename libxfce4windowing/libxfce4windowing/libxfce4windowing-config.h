/*
 * Copyright (c) 2022 Brian Tarricone <brian@tarricone.org>
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301 USA
 */

#ifndef __LIBXFCE4WINDOWING_CONFIG_H__
#define __LIBXFCE4WINDOWING_CONFIG_H__

#if !defined(__LIBXFCE4WINDOWING_H_INSIDE__) && !defined(LIBXFCE4WINDOWING_COMPILATION)
#error "Only libxfce4windowing.h can be included directly"
#endif

#include <glib.h>

G_BEGIN_DECLS

/**
 * LIBXFCE4WINDOWING_HAS_X11:
 *
 * A macro that is defined if libxfce4windowing was compiled with X11 support.
 *
 * Since: 4.19.3
 */
#define LIBXFCE4WINDOWING_HAS_X11

/**
 * LIBXFCE4WINDOWING_HAS_WAYLAND:
 *
 * A macro that is defined if libxfce4windowing was compiled with Wayland
 * support.
 *
 * Since: 4.19.3
 */
#define LIBXFCE4WINDOWING_HAS_WAYLAND

/**
 * LIBXFCE4WINDOWING_MAJOR_VERSION:
 *
 * A macro that evaluates to the major version of libxfce4windowing, in a format
 * that can be used by the C pre-processor.
 *
 */
#define LIBXFCE4WINDOWING_MAJOR_VERSION (4)

/**
 * LIBXFCE4WINDOWING_MINOR_VERSION:
 *
 * A macro that evaluates to the minor version of libxfce4windowing, in a format
 * that can be used by the C pre-processor.
 *
 */
#define LIBXFCE4WINDOWING_MINOR_VERSION (20)

/**
 * LIBXFCE4WINDOWING_MICRO_VERSION:
 *
 * A macro that evaluates to the micro version of libxfce4windowing, in a format
 * that can be used by the C pre-processor.
 *
 */
#define LIBXFCE4WINDOWING_MICRO_VERSION (0)

/**
 * LIBXFCE4WINDOWING_CHECK_VERSION:
 * @major : The major version of the library, i.e. 4
 * @minor : The minor version of the library, i.e. 18
 * @micro : The micro release of the library, i.e. 0
 *
 * A macro to compare libxfce4windowing versions to determine if a particular
 * function is available.
 *
 */
#define LIBXFCE4WINDOWING_CHECK_VERSION(major, minor, micro) \
  (LIBXFCE4WINDOWING_MAJOR_VERSION > (major) \
   || (LIBXFCE4WINDOWING_MAJOR_VERSION == (major) \
       && LIBXFCE4WINDOWING_MINOR_VERSION > (minor)) \
   || (LIBXFCE4WINDOWING_MAJOR_VERSION == (major) \
       && LIBXFCE4WINDOWING_MINOR_VERSION == (minor) \
       && LIBXFCE4WINDOWING_MICRO_VERSION >= (micro)))

extern const guint libxfce4windowing_major_version;
extern const guint libxfce4windowing_minor_version;
extern const guint libxfce4windowing_micro_version;

const gchar *libxfce4windowing_check_version(guint required_major,
                                             guint required_minor,
                                             guint required_micro);

G_END_DECLS

#endif /* !__LIBXFCE4WINDOWING_CONFIG_H__ */
