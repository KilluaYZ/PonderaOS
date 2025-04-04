/* $Id$ */
/*-
 * Copyright (c) 2003-2007 Benedikt Meurer <benny@xfce.org>
 * All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA
 */

#if !defined(_LIBXFCE4UTIL_INSIDE_LIBXFCE4UTIL_H) && !defined(LIBXFCE4UTIL_COMPILATION)
#error "Only <libxfce4util/libxfce4util.h> can be included directly, this file may disappear or change contents"
#endif

#ifndef __LIBXFCE4UTIL_CONFIG_H__
#define __LIBXFCE4UTIL_CONFIG_H__

#include <glib.h>

G_BEGIN_DECLS

#define LIBXFCE4UTIL_MAJOR_VERSION	4
#define LIBXFCE4UTIL_MINOR_VERSION	20
#define LIBXFCE4UTIL_MICRO_VERSION	0

#define LIBXFCE4UTIL_CHECK_VERSION(major, minor, micro) \
  (LIBXFCE4UTIL_MAJOR_VERSION > (major) \
   || (LIBXFCE4UTIL_MAJOR_VERSION == (major) \
       && LIBXFCE4UTIL_MINOR_VERSION > (minor)) \
   || (LIBXFCE4UTIL_MAJOR_VERSION == (major) \
       && LIBXFCE4UTIL_MINOR_VERSION == (minor) \
       && LIBXFCE4UTIL_MICRO_VERSION >= (micro)))

extern const guint libxfce4util_major_version;
extern const guint libxfce4util_minor_version;
extern const guint libxfce4util_micro_version;

/* verify that G_GNUC_WARN_UNUSED_RESULT is defined */
#if !defined(G_GNUC_WARN_UNUSED_RESULT)
#if __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#define G_GNUC_WARN_UNUSED_RESULT __attribute__ ((warn_unused_result))
#else
#define G_GNUC_WARN_UNUSED_RESULT
#endif /* __GNUC__ */
#endif /* !defined(G_GNUC_WARN_UNUSED_RESULT) */

G_END_DECLS

#endif /* !__LIBXFCE4UTIL_CONFIG_H__ */
