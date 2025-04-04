
/* This file is generated by glib-mkenums, do not modify it. This code is licensed under the same license as the containing project. Note that it links to GLib, so must comply with the LGPL linking clauses. */

#include <libxfce4panel/libxfce4panel-enums.h>
#include <libxfce4panel/libxfce4panel-enum-types.h>

#include <libxfce4panel/libxfce4panel-alias.h>

/* enumerations from "libxfce4panel-enums.h" */
GType
xfce_panel_plugin_mode_get_type (void)
{
	static GType type = 0;
	if (type == 0) {
	static const GEnumValue values[] = {
	{ XFCE_PANEL_PLUGIN_MODE_HORIZONTAL, "XFCE_PANEL_PLUGIN_MODE_HORIZONTAL", "horizontal" },
	{ XFCE_PANEL_PLUGIN_MODE_VERTICAL, "XFCE_PANEL_PLUGIN_MODE_VERTICAL", "vertical" },
	{ XFCE_PANEL_PLUGIN_MODE_DESKBAR, "XFCE_PANEL_PLUGIN_MODE_DESKBAR", "deskbar" },
	{ 0, NULL, NULL }
	};
	type = g_enum_register_static ("XfcePanelPluginMode", values);
  }
	return type;
}
GType
xfce_screen_position_get_type (void)
{
	static GType type = 0;
	if (type == 0) {
	static const GEnumValue values[] = {
	{ XFCE_SCREEN_POSITION_NONE, "XFCE_SCREEN_POSITION_NONE", "none" },
	{ XFCE_SCREEN_POSITION_NW_H, "XFCE_SCREEN_POSITION_NW_H", "nw-h" },
	{ XFCE_SCREEN_POSITION_N, "XFCE_SCREEN_POSITION_N", "n" },
	{ XFCE_SCREEN_POSITION_NE_H, "XFCE_SCREEN_POSITION_NE_H", "ne-h" },
	{ XFCE_SCREEN_POSITION_NW_V, "XFCE_SCREEN_POSITION_NW_V", "nw-v" },
	{ XFCE_SCREEN_POSITION_W, "XFCE_SCREEN_POSITION_W", "w" },
	{ XFCE_SCREEN_POSITION_SW_V, "XFCE_SCREEN_POSITION_SW_V", "sw-v" },
	{ XFCE_SCREEN_POSITION_NE_V, "XFCE_SCREEN_POSITION_NE_V", "ne-v" },
	{ XFCE_SCREEN_POSITION_E, "XFCE_SCREEN_POSITION_E", "e" },
	{ XFCE_SCREEN_POSITION_SE_V, "XFCE_SCREEN_POSITION_SE_V", "se-v" },
	{ XFCE_SCREEN_POSITION_SW_H, "XFCE_SCREEN_POSITION_SW_H", "sw-h" },
	{ XFCE_SCREEN_POSITION_S, "XFCE_SCREEN_POSITION_S", "s" },
	{ XFCE_SCREEN_POSITION_SE_H, "XFCE_SCREEN_POSITION_SE_H", "se-h" },
	{ XFCE_SCREEN_POSITION_FLOATING_H, "XFCE_SCREEN_POSITION_FLOATING_H", "floating-h" },
	{ XFCE_SCREEN_POSITION_FLOATING_V, "XFCE_SCREEN_POSITION_FLOATING_V", "floating-v" },
	{ 0, NULL, NULL }
	};
	type = g_enum_register_static ("XfceScreenPosition", values);
  }
	return type;
}

#define __LIBXFCE4PANEL_ENUM_TYPES_C__
#include <libxfce4panel/libxfce4panel-aliasdef.c>

/* Generated data ends here */

