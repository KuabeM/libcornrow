// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_AUDIOCONVERT_H
#define _GSTREAMERMM_AUDIOCONVERT_H

#include <gstreamermmconfig.h>

#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// Generated by generate_plugin_gmmproc_file. Don't edit this file.


#include <gstreamermm/basetransform.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstAudioConvert = struct _GstAudioConvert;
using GstAudioConvertClass = struct _GstAudioConvertClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class AudioConvert_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

/** @addtogroup gstreamermmEnums gstreamermm Enums and Flags */

/** 
 *  @var AudioDitherMethod AUDIO_DITHER_NONE
 * No dithering.
 * 
 *  @var AudioDitherMethod AUDIO_DITHER_RPDF
 * Rectangular dithering.
 * 
 *  @var AudioDitherMethod AUDIO_DITHER_TPDF
 * Triangular dithering (default).
 * 
 *  @var AudioDitherMethod AUDIO_DITHER_TPDF_HF
 * High frequency triangular dithering.
 * 
 *  @enum AudioDitherMethod
 * 
 * Set of available dithering methods.
 *
 * @ingroup gstreamermmEnums
 */
enum AudioDitherMethod
{
  AUDIO_DITHER_NONE,
  AUDIO_DITHER_RPDF,
  AUDIO_DITHER_TPDF,
  AUDIO_DITHER_TPDF_HF
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::AudioDitherMethod> : public Glib::Value_Enum<Gst::AudioDitherMethod>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


/** 
 *  @var AudioNoiseShapingMethod AUDIO_NOISE_SHAPING_NONE
 * No noise shaping (default).
 * 
 *  @var AudioNoiseShapingMethod AUDIO_NOISE_SHAPING_ERROR_FEEDBACK
 * Error feedback.
 * 
 *  @var AudioNoiseShapingMethod AUDIO_NOISE_SHAPING_SIMPLE
 * Simple 2-pole noise shaping.
 * 
 *  @var AudioNoiseShapingMethod AUDIO_NOISE_SHAPING_MEDIUM
 * Medium 5-pole noise shaping.
 * 
 *  @var AudioNoiseShapingMethod AUDIO_NOISE_SHAPING_HIGH
 * High 8-pole noise shaping.
 * 
 *  @enum AudioNoiseShapingMethod
 * 
 * Set of available noise shaping methods
 *
 * @ingroup gstreamermmEnums
 */
enum AudioNoiseShapingMethod
{
  AUDIO_NOISE_SHAPING_NONE,
  AUDIO_NOISE_SHAPING_ERROR_FEEDBACK,
  AUDIO_NOISE_SHAPING_SIMPLE,
  AUDIO_NOISE_SHAPING_MEDIUM,
  AUDIO_NOISE_SHAPING_HIGH
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::AudioNoiseShapingMethod> : public Glib::Value_Enum<Gst::AudioNoiseShapingMethod>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


/** A Wrapper for the audioconvert plugin.
 * Please note that not all plug-ins are available on all systems so care
 * must be taken that they exist before they are used otherwise there will
 * be errors and possibly a crash.
 *
 * @ingroup GstPlugins
 * @deprecated Plugins API is deprecated, and should not be used in a new code.
 */

class AudioConvert
: public Gst::BaseTransform
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = AudioConvert;
  using CppClassType = AudioConvert_Class;
  using BaseObjectType = GstAudioConvert;
  using BaseClassType = GstAudioConvertClass;

  // noncopyable
  AudioConvert(const AudioConvert&) = delete;
  AudioConvert& operator=(const AudioConvert&) = delete;

private:  friend class AudioConvert_Class;
  static CppClassType audioconvert_class_;

protected:
  explicit AudioConvert(const Glib::ConstructParams& construct_params);
  explicit AudioConvert(GstAudioConvert* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  AudioConvert(AudioConvert&& src) noexcept;
  AudioConvert& operator=(AudioConvert&& src) noexcept;

  ~AudioConvert() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstAudioConvert*       gobj()       { return reinterpret_cast<GstAudioConvert*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstAudioConvert* gobj() const { return reinterpret_cast<GstAudioConvert*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstAudioConvert* gobj_copy();

private:

  
protected:
  AudioConvert();
  explicit AudioConvert(const Glib::ustring& name);

public:
  /** Creates a new audioconvert plugin with a unique name.
   */
  
  static Glib::RefPtr<AudioConvert> create();


  /** Creates a new audioconvert plugin with the given name.
   */
  
  static Glib::RefPtr<AudioConvert> create(const Glib::ustring& name);


  /** Selects between different dithering methods.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::AudioDitherMethod > property_dithering() ;

/** Selects between different dithering methods.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::AudioDitherMethod > property_dithering() const;

  /** Selects between different noise shaping methods.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::AudioNoiseShapingMethod > property_noise_shaping() ;

/** Selects between different noise shaping methods.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::AudioNoiseShapingMethod > property_noise_shaping() const;


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
   * @relates Gst::AudioConvert
   */
  Glib::RefPtr<Gst::AudioConvert> wrap(GstAudioConvert* object, bool take_copy = false);
}


#endif // GSTREAMERMM_DISABLE_DEPRECATED


#endif /* _GSTREAMERMM_AUDIOCONVERT_H */

