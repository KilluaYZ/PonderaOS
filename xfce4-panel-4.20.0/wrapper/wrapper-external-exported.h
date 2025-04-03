/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __WRAPPER_EXTERNAL_EXPORTED_H__
#define __WRAPPER_EXTERNAL_EXPORTED_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.xfce.Panel.External */

#define WRAPPER_EXTERNAL_TYPE_EXPORTED (wrapper_external_exported_get_type ())
#define WRAPPER_EXTERNAL_EXPORTED(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), WRAPPER_EXTERNAL_TYPE_EXPORTED, WrapperExternalExported))
#define WRAPPER_EXTERNAL_IS_EXPORTED(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), WRAPPER_EXTERNAL_TYPE_EXPORTED))
#define WRAPPER_EXTERNAL_EXPORTED_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), WRAPPER_EXTERNAL_TYPE_EXPORTED, WrapperExternalExportedIface))

struct _WrapperExternalExported;
typedef struct _WrapperExternalExported WrapperExternalExported;
typedef struct _WrapperExternalExportedIface WrapperExternalExportedIface;

struct _WrapperExternalExportedIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_pointer_is_outside) (
    WrapperExternalExported *object,
    GDBusMethodInvocation *invocation);

  void (*embedded) (
    WrapperExternalExported *object);

  void (*pointer_enter) (
    WrapperExternalExported *object);

  void (*pointer_leave) (
    WrapperExternalExported *object);

  void (*set_requisition) (
    WrapperExternalExported *object,
    GVariant *arg_requisition);

};

GType wrapper_external_exported_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *wrapper_external_exported_interface_info (void);
guint wrapper_external_exported_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void wrapper_external_exported_complete_pointer_is_outside (
    WrapperExternalExported *object,
    GDBusMethodInvocation *invocation,
    gboolean is_outside);



/* D-Bus signal emissions functions: */
void wrapper_external_exported_emit_set_requisition (
    WrapperExternalExported *object,
    GVariant *arg_requisition);

void wrapper_external_exported_emit_embedded (
    WrapperExternalExported *object);

void wrapper_external_exported_emit_pointer_enter (
    WrapperExternalExported *object);

void wrapper_external_exported_emit_pointer_leave (
    WrapperExternalExported *object);



/* D-Bus method calls: */
void wrapper_external_exported_call_pointer_is_outside (
    WrapperExternalExported *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean wrapper_external_exported_call_pointer_is_outside_finish (
    WrapperExternalExported *proxy,
    gboolean *out_is_outside,
    GAsyncResult *res,
    GError **error);

gboolean wrapper_external_exported_call_pointer_is_outside_sync (
    WrapperExternalExported *proxy,
    gboolean *out_is_outside,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define WRAPPER_EXTERNAL_TYPE_EXPORTED_PROXY (wrapper_external_exported_proxy_get_type ())
#define WRAPPER_EXTERNAL_EXPORTED_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), WRAPPER_EXTERNAL_TYPE_EXPORTED_PROXY, WrapperExternalExportedProxy))
#define WRAPPER_EXTERNAL_EXPORTED_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), WRAPPER_EXTERNAL_TYPE_EXPORTED_PROXY, WrapperExternalExportedProxyClass))
#define WRAPPER_EXTERNAL_EXPORTED_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), WRAPPER_EXTERNAL_TYPE_EXPORTED_PROXY, WrapperExternalExportedProxyClass))
#define WRAPPER_EXTERNAL_IS_EXPORTED_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), WRAPPER_EXTERNAL_TYPE_EXPORTED_PROXY))
#define WRAPPER_EXTERNAL_IS_EXPORTED_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), WRAPPER_EXTERNAL_TYPE_EXPORTED_PROXY))

typedef struct _WrapperExternalExportedProxy WrapperExternalExportedProxy;
typedef struct _WrapperExternalExportedProxyClass WrapperExternalExportedProxyClass;
typedef struct _WrapperExternalExportedProxyPrivate WrapperExternalExportedProxyPrivate;

struct _WrapperExternalExportedProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  WrapperExternalExportedProxyPrivate *priv;
};

struct _WrapperExternalExportedProxyClass
{
  GDBusProxyClass parent_class;
};

GType wrapper_external_exported_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (WrapperExternalExportedProxy, g_object_unref)
#endif

void wrapper_external_exported_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
WrapperExternalExported *wrapper_external_exported_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
WrapperExternalExported *wrapper_external_exported_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void wrapper_external_exported_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
WrapperExternalExported *wrapper_external_exported_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
WrapperExternalExported *wrapper_external_exported_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define WRAPPER_EXTERNAL_TYPE_EXPORTED_SKELETON (wrapper_external_exported_skeleton_get_type ())
#define WRAPPER_EXTERNAL_EXPORTED_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), WRAPPER_EXTERNAL_TYPE_EXPORTED_SKELETON, WrapperExternalExportedSkeleton))
#define WRAPPER_EXTERNAL_EXPORTED_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), WRAPPER_EXTERNAL_TYPE_EXPORTED_SKELETON, WrapperExternalExportedSkeletonClass))
#define WRAPPER_EXTERNAL_EXPORTED_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), WRAPPER_EXTERNAL_TYPE_EXPORTED_SKELETON, WrapperExternalExportedSkeletonClass))
#define WRAPPER_EXTERNAL_IS_EXPORTED_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), WRAPPER_EXTERNAL_TYPE_EXPORTED_SKELETON))
#define WRAPPER_EXTERNAL_IS_EXPORTED_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), WRAPPER_EXTERNAL_TYPE_EXPORTED_SKELETON))

typedef struct _WrapperExternalExportedSkeleton WrapperExternalExportedSkeleton;
typedef struct _WrapperExternalExportedSkeletonClass WrapperExternalExportedSkeletonClass;
typedef struct _WrapperExternalExportedSkeletonPrivate WrapperExternalExportedSkeletonPrivate;

struct _WrapperExternalExportedSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  WrapperExternalExportedSkeletonPrivate *priv;
};

struct _WrapperExternalExportedSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType wrapper_external_exported_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (WrapperExternalExportedSkeleton, g_object_unref)
#endif

WrapperExternalExported *wrapper_external_exported_skeleton_new (void);


G_END_DECLS

#endif /* __WRAPPER_EXTERNAL_EXPORTED_H__ */
