// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/videochroma.h>
#include <gstreamermm/private/videochroma_p.h>


/* gstreamermm - a C++ wrapper for gstreamer
 *
 * Copyright 2008-2015 The gstreamermm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gstreamermm/videoformat.h>

namespace Gst
{

namespace Enums
{

Glib::ustring get_name(VideoChromaSite site)
{
  return gst_video_chroma_to_string(static_cast<GstVideoChromaSite>(site));
}

VideoChromaSite video_chroma_site_from_string(const Glib::ustring& s)
{
  return static_cast<VideoChromaSite>(gst_video_chroma_from_string(s.c_str()));
}

}

VideoChromaResample::VideoChromaResample(Gst::VideoChromaMethod method, Gst::VideoChromaSite site,
  Gst::VideoChromaFlags flags, Gst::VideoFormat format, gint h_factor, gint v_factor)
{
  gobject_ = gst_video_chroma_resample_new (static_cast<GstVideoChromaMethod>(method),
    static_cast<GstVideoChromaSite>(site), static_cast<GstVideoChromaFlags>(flags),
    static_cast<GstVideoFormat>(format), h_factor, v_factor);
}

VideoChromaResample::VideoChromaResample(GstVideoChromaResample* castitem)
{
  gobject_ = castitem;
}

VideoChromaResample::~VideoChromaResample()
{
  gst_video_chroma_resample_free(gobject_);
}
}

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gst::VideoChromaSite>::value_type()
{
  return gst_video_chroma_site_get_type();
}

// static
GType Glib::Value<Gst::VideoChromaMethod>::value_type()
{
  return gst_video_chroma_method_get_type();
}

// static
GType Glib::Value<Gst::VideoChromaFlags>::value_type()
{
  return gst_video_chroma_flags_get_type();
}


namespace Gst
{


void VideoChromaResample::get_info(guint& n_lines, gint& offset) const
{
  gst_video_chroma_resample_get_info(const_cast<GstVideoChromaResample*>(gobj()), &(n_lines), &(offset));
}


} // namespace Gst


