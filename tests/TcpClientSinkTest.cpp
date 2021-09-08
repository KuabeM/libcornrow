/*
 * Copyright (C) 2021 Manuel Weichselbaumer <mincequi@web.de>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <coro/audio/AudioTestSource.h>
#include <coro/audio/Peq.h>
#include <coro/core/Mainloop.h>
#include <coro/core/TcpClientSink.h>

using namespace coro::audio;
using namespace coro::core;

int main(int argc, char *argv[]) {

    AudioTestSource<AudioCodec::RawInt16, SampleRate::Rate44100, Channels::Stereo> source;
    TcpClientSink::Config config;
    config.host = argv[1];
    config.port = std::stoi(argv[2]);
    TcpClientSink sink(config);

    Node::link(source, sink);

    source.start();
}
