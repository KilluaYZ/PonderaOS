/*-
 * Copyright (c) 2006 Benedikt Meurer <benny@xfce.org>.
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301 USA
 */

#ifndef __EXO_DIE_UTILS_H__
#define __EXO_DIE_UTILS_H__

#include <exo/exo.h>
#include <gio/gio.h>
#include <exo-desktop-item-edit/exo-die-enum-types.h>

G_BEGIN_DECLS

void      exo_die_g_key_file_set_locale_value (GKeyFile          *key_file,
                                               const gchar       *group,
                                               const gchar       *key,
                                               const gchar       *value);

GFile    *exo_die_g_key_file_save             (GKeyFile          *key_file,
                                               gboolean           create,
                                               gboolean           trust,
                                               GFile             *base,
                                               ExoDieEditorMode   mode,
                                               GError           **error);

G_END_DECLS

#endif /* !__EXO_DIE_UTILS_H__ */
