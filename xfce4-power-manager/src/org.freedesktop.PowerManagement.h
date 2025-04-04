/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __ORG_FREEDESKTOP_POWERMANAGEMENT_H__
#define __ORG_FREEDESKTOP_POWERMANAGEMENT_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.PowerManagement */

#define XFPM_TYPE_POWER_MANAGEMENT (xfpm_power_management_get_type ())
#define XFPM_POWER_MANAGEMENT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), XFPM_TYPE_POWER_MANAGEMENT, XfpmPowerManagement))
#define XFPM_IS_POWER_MANAGEMENT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), XFPM_TYPE_POWER_MANAGEMENT))
#define XFPM_POWER_MANAGEMENT_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), XFPM_TYPE_POWER_MANAGEMENT, XfpmPowerManagementIface))

struct _XfpmPowerManagement;
typedef struct _XfpmPowerManagement XfpmPowerManagement;
typedef struct _XfpmPowerManagementIface XfpmPowerManagementIface;

struct _XfpmPowerManagementIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_can_hibernate) (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_can_hybrid_sleep) (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_can_reboot) (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_can_shutdown) (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_can_suspend) (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_low_battery) (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_on_battery) (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_hibernate) (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_hybrid_sleep) (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_reboot) (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_shutdown) (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_suspend) (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation);

  void (*low_battery_changed) (
    XfpmPowerManagement *object,
    gboolean arg_low_battery);

  void (*on_battery_changed) (
    XfpmPowerManagement *object,
    gboolean arg_on_battery);

};

GType xfpm_power_management_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *xfpm_power_management_interface_info (void);
guint xfpm_power_management_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void xfpm_power_management_complete_shutdown (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation);

void xfpm_power_management_complete_reboot (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation);

void xfpm_power_management_complete_hibernate (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation);

void xfpm_power_management_complete_suspend (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation);

void xfpm_power_management_complete_hybrid_sleep (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation);

void xfpm_power_management_complete_can_shutdown (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation,
    gboolean can_shutdown);

void xfpm_power_management_complete_can_reboot (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation,
    gboolean can_reboot);

void xfpm_power_management_complete_can_suspend (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation,
    gboolean can_suspend);

void xfpm_power_management_complete_can_hibernate (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation,
    gboolean can_hibernate);

void xfpm_power_management_complete_can_hybrid_sleep (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation,
    gboolean can_hybrid_sleep);

void xfpm_power_management_complete_get_on_battery (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation,
    gboolean on_battery);

void xfpm_power_management_complete_get_low_battery (
    XfpmPowerManagement *object,
    GDBusMethodInvocation *invocation,
    gboolean low_battery);



/* D-Bus signal emissions functions: */
void xfpm_power_management_emit_on_battery_changed (
    XfpmPowerManagement *object,
    gboolean arg_on_battery);

void xfpm_power_management_emit_low_battery_changed (
    XfpmPowerManagement *object,
    gboolean arg_low_battery);



/* D-Bus method calls: */
void xfpm_power_management_call_shutdown (
    XfpmPowerManagement *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfpm_power_management_call_shutdown_finish (
    XfpmPowerManagement *proxy,
    GAsyncResult *res,
    GError **error);

gboolean xfpm_power_management_call_shutdown_sync (
    XfpmPowerManagement *proxy,
    GCancellable *cancellable,
    GError **error);

void xfpm_power_management_call_reboot (
    XfpmPowerManagement *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfpm_power_management_call_reboot_finish (
    XfpmPowerManagement *proxy,
    GAsyncResult *res,
    GError **error);

gboolean xfpm_power_management_call_reboot_sync (
    XfpmPowerManagement *proxy,
    GCancellable *cancellable,
    GError **error);

void xfpm_power_management_call_hibernate (
    XfpmPowerManagement *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfpm_power_management_call_hibernate_finish (
    XfpmPowerManagement *proxy,
    GAsyncResult *res,
    GError **error);

gboolean xfpm_power_management_call_hibernate_sync (
    XfpmPowerManagement *proxy,
    GCancellable *cancellable,
    GError **error);

void xfpm_power_management_call_suspend (
    XfpmPowerManagement *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfpm_power_management_call_suspend_finish (
    XfpmPowerManagement *proxy,
    GAsyncResult *res,
    GError **error);

gboolean xfpm_power_management_call_suspend_sync (
    XfpmPowerManagement *proxy,
    GCancellable *cancellable,
    GError **error);

void xfpm_power_management_call_hybrid_sleep (
    XfpmPowerManagement *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfpm_power_management_call_hybrid_sleep_finish (
    XfpmPowerManagement *proxy,
    GAsyncResult *res,
    GError **error);

gboolean xfpm_power_management_call_hybrid_sleep_sync (
    XfpmPowerManagement *proxy,
    GCancellable *cancellable,
    GError **error);

void xfpm_power_management_call_can_shutdown (
    XfpmPowerManagement *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfpm_power_management_call_can_shutdown_finish (
    XfpmPowerManagement *proxy,
    gboolean *out_can_shutdown,
    GAsyncResult *res,
    GError **error);

gboolean xfpm_power_management_call_can_shutdown_sync (
    XfpmPowerManagement *proxy,
    gboolean *out_can_shutdown,
    GCancellable *cancellable,
    GError **error);

void xfpm_power_management_call_can_reboot (
    XfpmPowerManagement *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfpm_power_management_call_can_reboot_finish (
    XfpmPowerManagement *proxy,
    gboolean *out_can_reboot,
    GAsyncResult *res,
    GError **error);

gboolean xfpm_power_management_call_can_reboot_sync (
    XfpmPowerManagement *proxy,
    gboolean *out_can_reboot,
    GCancellable *cancellable,
    GError **error);

void xfpm_power_management_call_can_suspend (
    XfpmPowerManagement *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfpm_power_management_call_can_suspend_finish (
    XfpmPowerManagement *proxy,
    gboolean *out_can_suspend,
    GAsyncResult *res,
    GError **error);

gboolean xfpm_power_management_call_can_suspend_sync (
    XfpmPowerManagement *proxy,
    gboolean *out_can_suspend,
    GCancellable *cancellable,
    GError **error);

void xfpm_power_management_call_can_hibernate (
    XfpmPowerManagement *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfpm_power_management_call_can_hibernate_finish (
    XfpmPowerManagement *proxy,
    gboolean *out_can_hibernate,
    GAsyncResult *res,
    GError **error);

gboolean xfpm_power_management_call_can_hibernate_sync (
    XfpmPowerManagement *proxy,
    gboolean *out_can_hibernate,
    GCancellable *cancellable,
    GError **error);

void xfpm_power_management_call_can_hybrid_sleep (
    XfpmPowerManagement *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfpm_power_management_call_can_hybrid_sleep_finish (
    XfpmPowerManagement *proxy,
    gboolean *out_can_hybrid_sleep,
    GAsyncResult *res,
    GError **error);

gboolean xfpm_power_management_call_can_hybrid_sleep_sync (
    XfpmPowerManagement *proxy,
    gboolean *out_can_hybrid_sleep,
    GCancellable *cancellable,
    GError **error);

void xfpm_power_management_call_get_on_battery (
    XfpmPowerManagement *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfpm_power_management_call_get_on_battery_finish (
    XfpmPowerManagement *proxy,
    gboolean *out_on_battery,
    GAsyncResult *res,
    GError **error);

gboolean xfpm_power_management_call_get_on_battery_sync (
    XfpmPowerManagement *proxy,
    gboolean *out_on_battery,
    GCancellable *cancellable,
    GError **error);

void xfpm_power_management_call_get_low_battery (
    XfpmPowerManagement *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfpm_power_management_call_get_low_battery_finish (
    XfpmPowerManagement *proxy,
    gboolean *out_low_battery,
    GAsyncResult *res,
    GError **error);

gboolean xfpm_power_management_call_get_low_battery_sync (
    XfpmPowerManagement *proxy,
    gboolean *out_low_battery,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define XFPM_TYPE_POWER_MANAGEMENT_PROXY (xfpm_power_management_proxy_get_type ())
#define XFPM_POWER_MANAGEMENT_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), XFPM_TYPE_POWER_MANAGEMENT_PROXY, XfpmPowerManagementProxy))
#define XFPM_POWER_MANAGEMENT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), XFPM_TYPE_POWER_MANAGEMENT_PROXY, XfpmPowerManagementProxyClass))
#define XFPM_POWER_MANAGEMENT_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), XFPM_TYPE_POWER_MANAGEMENT_PROXY, XfpmPowerManagementProxyClass))
#define XFPM_IS_POWER_MANAGEMENT_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), XFPM_TYPE_POWER_MANAGEMENT_PROXY))
#define XFPM_IS_POWER_MANAGEMENT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), XFPM_TYPE_POWER_MANAGEMENT_PROXY))

typedef struct _XfpmPowerManagementProxy XfpmPowerManagementProxy;
typedef struct _XfpmPowerManagementProxyClass XfpmPowerManagementProxyClass;
typedef struct _XfpmPowerManagementProxyPrivate XfpmPowerManagementProxyPrivate;

struct _XfpmPowerManagementProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  XfpmPowerManagementProxyPrivate *priv;
};

struct _XfpmPowerManagementProxyClass
{
  GDBusProxyClass parent_class;
};

GType xfpm_power_management_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (XfpmPowerManagementProxy, g_object_unref)
#endif

void xfpm_power_management_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
XfpmPowerManagement *xfpm_power_management_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
XfpmPowerManagement *xfpm_power_management_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void xfpm_power_management_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
XfpmPowerManagement *xfpm_power_management_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
XfpmPowerManagement *xfpm_power_management_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define XFPM_TYPE_POWER_MANAGEMENT_SKELETON (xfpm_power_management_skeleton_get_type ())
#define XFPM_POWER_MANAGEMENT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), XFPM_TYPE_POWER_MANAGEMENT_SKELETON, XfpmPowerManagementSkeleton))
#define XFPM_POWER_MANAGEMENT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), XFPM_TYPE_POWER_MANAGEMENT_SKELETON, XfpmPowerManagementSkeletonClass))
#define XFPM_POWER_MANAGEMENT_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), XFPM_TYPE_POWER_MANAGEMENT_SKELETON, XfpmPowerManagementSkeletonClass))
#define XFPM_IS_POWER_MANAGEMENT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), XFPM_TYPE_POWER_MANAGEMENT_SKELETON))
#define XFPM_IS_POWER_MANAGEMENT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), XFPM_TYPE_POWER_MANAGEMENT_SKELETON))

typedef struct _XfpmPowerManagementSkeleton XfpmPowerManagementSkeleton;
typedef struct _XfpmPowerManagementSkeletonClass XfpmPowerManagementSkeletonClass;
typedef struct _XfpmPowerManagementSkeletonPrivate XfpmPowerManagementSkeletonPrivate;

struct _XfpmPowerManagementSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  XfpmPowerManagementSkeletonPrivate *priv;
};

struct _XfpmPowerManagementSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType xfpm_power_management_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (XfpmPowerManagementSkeleton, g_object_unref)
#endif

XfpmPowerManagement *xfpm_power_management_skeleton_new (void);


G_END_DECLS

#endif /* __ORG_FREEDESKTOP_POWERMANAGEMENT_H__ */
