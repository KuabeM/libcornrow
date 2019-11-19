#pragma once

#include <coro/audio/AudioTypes.h>

namespace coro {
namespace audio {
class Node;

class AudioCaps
{
public:
    Codecs      codecs = Codecs::Any;
    SampleRates rates = SampleRates::Any;
    ChannelFlags channels = ChannelFlags::Any;

    template<class In, class Out>
    static constexpr bool canIntersect(const In& in, const Out& out);

    //static constexpr bool canIntersect(const coro::audio::Node& in, const coro::audio::Node& out);
};

template<class In, class Out>
constexpr bool AudioCaps::canIntersect(const In& in, const Out& out)
//constexpr bool AudioCaps::canIntersect(const audio::Node& in, const audio::Node& out)
{
    // If in is RTP payloaded, but out does not accept it, we fail
    if (in.codecs.testFlag(Codec::RtpPayload) && !out.codecs.testFlag(Codec::RtpPayload)) {
        return false;
    }
    return ((in.codecs & out.codecs) &&
            (in.rates & out.rates) &&
            (in.channels & out.channels));
}

} // namespace audio
} // namespace coro
