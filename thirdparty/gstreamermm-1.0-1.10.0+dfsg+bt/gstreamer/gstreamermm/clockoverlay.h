// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_CLOCKOVERLAY_H
#define _GSTREAMERMM_CLOCKOVERLAY_H

#include <gstreamermmconfig.h>

#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// Generated by generate_plugin_gmmproc_file. Don't edit this file.


#include <gstreamermm/element.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstClockOverlay = struct _GstClockOverlay;
using GstClockOverlayClass = struct _GstClockOverlayClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class ClockOverlay_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

/** A Wrapper for the clockoverlay plugin.
 * Please note that not all plug-ins are available on all systems so care
 * must be taken that they exist before they are used otherwise there will
 * be errors and possibly a crash.
 *
 * @ingroup GstPlugins
 * @deprecated Plugins API is deprecated, and should not be used in a new code.
 */

class ClockOverlay
: public Gst::Element
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = ClockOverlay;
  using CppClassType = ClockOverlay_Class;
  using BaseObjectType = GstClockOverlay;
  using BaseClassType = GstClockOverlayClass;

  // noncopyable
  ClockOverlay(const ClockOverlay&) = delete;
  ClockOverlay& operator=(const ClockOverlay&) = delete;

private:  friend class ClockOverlay_Class;
  static CppClassType clockoverlay_class_;

protected:
  explicit ClockOverlay(const Glib::ConstructParams& construct_params);
  explicit ClockOverlay(GstClockOverlay* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  ClockOverlay(ClockOverlay&& src) noexcept;
  ClockOverlay& operator=(ClockOverlay&& src) noexcept;

  ~ClockOverlay() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstClockOverlay*       gobj()       { return reinterpret_cast<GstClockOverlay*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstClockOverlay* gobj() const { return reinterpret_cast<GstClockOverlay*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstClockOverlay* gobj_copy();

private:

  
protected:
  ClockOverlay();
  explicit ClockOverlay(const Glib::ustring& name);

public:
  /** Creates a new clockoverlay plugin with a unique name.
   */
  
  static Glib::RefPtr<ClockOverlay> create();


  /** Creates a new clockoverlay plugin with the given name.
   */
  
  static Glib::RefPtr<ClockOverlay> create(const Glib::ustring& name);


  /** Format to use for time and date value, as in strftime.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_time_format() ;

/** Format to use for time and date value, as in strftime.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_time_format() const;


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
   * @relates Gst::ClockOverlay
   */
  Glib::RefPtr<Gst::ClockOverlay> wrap(GstClockOverlay* object, bool take_copy = false);
}


#endif // GSTREAMERMM_DISABLE_DEPRECATED


#endif /* _GSTREAMERMM_CLOCKOVERLAY_H */

