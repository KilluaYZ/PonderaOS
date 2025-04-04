/* vi:set et ai sw=2 sts=2 ts=2: */
/*-
 * Copyright (c) 2005-2006 Benedikt Meurer <benny@xfce.org>
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
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#if !defined(THUNARX_INSIDE_THUNARX_H) && !defined(THUNARX_COMPILATION)
#error "Only <thunarx/thunarx.h> can be included directly, this file may disappear or change contents"
#endif

#ifndef __THUNARX_CONFIG_H__
#define __THUNARX_CONFIG_H__

#include <glib-object.h>

G_BEGIN_DECLS

#define THUNARX_MAJOR_VERSION 4
#define THUNARX_MINOR_VERSION 20
#define THUNARX_MICRO_VERSION 0

#define THUNARX_CHECK_VERSION(major,minor,micro) \
  (THUNARX_MAJOR_VERSION > (major) \
   || (THUNARX_MAJOR_VERSION == (major) \
       && THUNARX_MINOR_VERSION > (minor)) \
   || (THUNARX_MAJOR_VERSION == (major) \
       && THUNARX_MINOR_VERSION == (minor) \
       && THUNARX_MICRO_VERSION >= (micro)))

extern const guint thunarx_major_version;
extern const guint thunarx_minor_version;
extern const guint thunarx_micro_version;

const gchar *thunarx_check_version (guint required_major,
                                    guint required_minor,
                                    guint required_micro);

/* verify that G_GNUC_WARN_UNUSED_RESULT is defined */
#if !defined(G_GNUC_WARN_UNUSED_RESULT)
#if __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#define G_GNUC_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
#define G_GNUC_WARN_UNUSED_RESULT
#endif /* __GNUC__ */
#endif /* !defined(G_GNUC_WARN_UNUSED_RESULT) */

G_END_DECLS

#endif /* !__THUNARX_CONFIG_H__ */
