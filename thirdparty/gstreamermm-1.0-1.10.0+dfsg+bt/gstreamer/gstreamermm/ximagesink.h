// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_XIMAGESINK_H
#define _GSTREAMERMM_XIMAGESINK_H

#include <gstreamermmconfig.h>

#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// Generated by generate_plugin_gmmproc_file. Don't edit this file.


#include <gstreamermm/videosink.h>
#include <gstreamermm/navigation.h>
#include <gstreamermm/videooverlay.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstXImageSink = struct _GstXImageSink;
using GstXImageSinkClass = struct _GstXImageSinkClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class XImageSink_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

/** A Wrapper for the ximagesink plugin.
 * Please note that not all plug-ins are available on all systems so care
 * must be taken that they exist before they are used otherwise there will
 * be errors and possibly a crash.
 *
 * @ingroup GstPlugins
 * @deprecated Plugins API is deprecated, and should not be used in a new code.
 */

class XImageSink
: public Gst::VideoSink, public Gst::Navigation, public Gst::VideoOverlay
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = XImageSink;
  using CppClassType = XImageSink_Class;
  using BaseObjectType = GstXImageSink;
  using BaseClassType = GstXImageSinkClass;

  // noncopyable
  XImageSink(const XImageSink&) = delete;
  XImageSink& operator=(const XImageSink&) = delete;

private:  friend class XImageSink_Class;
  static CppClassType ximagesink_class_;

protected:
  explicit XImageSink(const Glib::ConstructParams& construct_params);
  explicit XImageSink(GstXImageSink* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  XImageSink(XImageSink&& src) noexcept;
  XImageSink& operator=(XImageSink&& src) noexcept;

  ~XImageSink() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstXImageSink*       gobj()       { return reinterpret_cast<GstXImageSink*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstXImageSink* gobj() const { return reinterpret_cast<GstXImageSink*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstXImageSink* gobj_copy();

private:

  
protected:
  XImageSink();
  explicit XImageSink(const Glib::ustring& name);

public:
  /** Creates a new ximagesink plugin with a unique name.
   */
  
  static Glib::RefPtr<XImageSink> create();


  /** Creates a new ximagesink plugin with the given name.
   */
  
  static Glib::RefPtr<XImageSink> create(const Glib::ustring& name);


  /** X Display name.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_display() ;

/** X Display name.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_display() const;

  /** When enabled, runs the X display in synchronous mode. (unrelated to A/V sync, used only for debugging).
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_synchronous() ;

/** When enabled, runs the X display in synchronous mode. (unrelated to A/V sync, used only for debugging).
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_synchronous() const;

  /** The pixel aspect ratio of the device.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_pixel_aspect_ratio() ;

/** The pixel aspect ratio of the device.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_pixel_aspect_ratio() const;

  /** When enabled, reverse caps negotiation (scaling) will respect original aspect ratio.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_force_aspect_ratio() ;

/** When enabled, reverse caps negotiation (scaling) will respect original aspect ratio.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_force_aspect_ratio() const;

  /** When enabled, XEvents will be selected and handled.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_handle_events() ;

/** When enabled, XEvents will be selected and handled.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_handle_events() const;

  /** When enabled, the current frame will always be drawn in response to X Expose events.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_handle_expose() ;

/** When enabled, the current frame will always be drawn in response to X Expose events.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_handle_expose() const;

  /** Width of the window.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint64 > property_window_width() const;


  /** Height of the window.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint64 > property_window_height() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gst


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gst::XImageSink
   */
  Glib::RefPtr<Gst::XImageSink> wrap(GstXImageSink* object, bool take_copy = false);
}


#endif // GSTREAMERMM_DISABLE_DEPRECATED


#endif /* _GSTREAMERMM_XIMAGESINK_H */

