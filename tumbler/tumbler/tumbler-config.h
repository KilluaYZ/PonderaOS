/* vi:set et ai sw=2 sts=2 ts=2: */
/*-
 * Copyright (c) 2009 Jannis Pohlmann <jannis@xfce.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#if !defined(_TUMBLER_INSIDE_TUMBLER_H) && !defined(TUMBLER_COMPILATION)
#error "Only <tumbler/tumbler.h> may be included directly. This file might disappear or change contents."
#endif

#ifndef __TUMBLER_CONFIG_H__
#define __TUMBLER_CONFIG_H__

#include <glib-object.h>

G_BEGIN_DECLS

#define TUMBLER_MAJOR_VERSION 4
#define TUMBLER_MINOR_VERSION 20
#define TUMBLER_MICRO_VERSION 0

#define TUMBLER_CHECK_VERSION(major, minor, micro) \
  (TUMBLER_MAJOR_VERSION > (major) \
   || (TUMBLER_MAJOR_VERSION == (major) \
       && TUMBLER_MINOR_VERSION > (minor)) \
   || (TUMBLER_MAJOR_VERSION == (major) \
       && TUMBLER_MINOR_VERSION == (minor) \
       && TUMBLER_MICRO_VERSION >= (micro)))

extern const guint tumbler_major_version;
extern const guint tumbler_minor_version;
extern const guint tumbler_micro_version;

const gchar *
tumbler_check_version (guint required_major,
                       guint required_minor,
                       guint required_micro);

/* verify that G_GNUC_NULL_TERMINATED is defined */
#if !defined(G_GNUC_NULL_TERMINATED)
#if __GNUC__ >= 4
#define G_GNUC_NULL_TERMINATED __attribute__ ((__sentinel__))
#else
#define G_GNUC_NULL_TERMINATED
#endif /* __GNUC__ */
#endif /* !defined(G_GNUC_NULL_TERMINATED) */

/* verify that G_GNUC_WARN_UNUSED_RESULT is defined */
#if !defined(G_GNUC_WARN_UNUSED_RESULT)
#if __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#define G_GNUC_WARN_UNUSED_RESULT __attribute__ ((warn_unused_result))
#else
#define G_GNUC_WARN_UNUSED_RESULT
#endif /* __GNUC__ */
#endif /* !defined(G_GNUC_WARN_UNUSED_RESULT) */

G_END_DECLS

#endif /* !__TUMBLER_CONFIG_H__ */
