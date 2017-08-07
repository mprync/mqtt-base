#ifndef DEFAULTCALLBACKS_H
#define DEFAULTCALLBACKS_H

#include <iostream>

#include "ClientCallbacks.hpp"
#include "PublisherCallbacks.hpp"

class DefaultCallbacks : public virtual mqtt::ClientCallbacks, public virtual PublisherCallbacks
{
public:
    ~DefaultCallbacks() override;

    void onConnected() override;
    void onConnectionLost(const std::string &reason) override;
    void onMessageReceived(const std::string &topic, const std::string &payload) override;
    void onMessageSent(const std::string &topic, const std::string &payload) override;
    void onReconnectSuccess() override;
    void onReconnectFailure() override;
    void onPublishSuccess() override;
    void onPublishFailure() override;
};

#endif //DEFAULTCALLBACKS_H
