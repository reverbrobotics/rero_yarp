//
// Created by lukas on 2021-01-26.
//

#ifndef AUDIOTEST_HOTWORDDETECTIONCLIENT_H
#define AUDIOTEST_HOTWORDDETECTIONCLIENT_H

#include "portaudio.h"
#include <iostream>
#include <memory>
#include <string>
#include <utility>
#include <grpcpp/grpcpp.h>
#include <thread>
#include <chrono>
#include <functional>
#include "audio.grpc.pb.h"
#include "hotword.grpc.pb.h"

#define CHECK_OVERFLOW  (0)
#define CHECK_UNDERFLOW  (0)

using grpc::Status;
using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReader;
using grpc::ClientWriter;
using grpc::ClientReaderWriter;

using rero::StreamRequest;
using rero::AudioStreamer;
using rero::HotwordDetection;
using rero::HotwordResult;
using rero::Audio;
using namespace std::chrono;


class HotwordDetectionClient {
public:
    HotwordDetectionClient(
            const std::shared_ptr<Channel>& audio_channel,
            const std::shared_ptr<Channel>& hotword_channel,
            uint32_t sampleRate = 16000,
            uint32_t numChannels = 1,
            std::string format = "paInt16",
            uint32_t framesPerBuffer = 2000,
            uint32_t bytesPerSample = 2,
            uint32_t ringbufferSize = 10
    );

    void StreamAudioAsync();

    void StreamHotwords(const std::function<void(rero::HotwordResult)>& callback);

    rero::HotwordResult getHotwordResult();

    void StopStream();

    bool isStreaming() const { return streaming; }

    void StreamAudio();

    std::vector<float> recordEmbedding();

    HotwordResult recognizeHotword();

    std::string addEmbeddingToHotword(const std::vector<float>& embedding, const std::string& hotwordKey);
    std::string saveHotword(const std::string& hotwordKey, const std::string& filename);

    uint16_t getNumBytes() const { return numBytes; }

    uint16_t getNumChannels() const { return numChannels; }

    uint16_t getSampleRate() const { return sampleRate; }

    uint16_t getFramesPerBuffer() const { return framesPerBuffer; }

private:
    std::unique_ptr<AudioStreamer::Stub> audio_stub_;
    std::unique_ptr<HotwordDetection::Stub> hotword_stub_;
    uint32_t sampleRate;
    uint32_t numChannels;
    std::string format;
    uint32_t framesPerBuffer;
    uint32_t bytesPerSample;
    uint32_t numBytes{};
    std::thread streamThread;
    std::atomic_bool streaming{};
    ClientContext sr_context;
    std::unique_ptr<ClientReaderWriter<rero::Audio, rero::HotwordResult> > readerWriter;
};


#endif //AUDIOTEST_HOTWORDDETECTIONCLIENT_H
