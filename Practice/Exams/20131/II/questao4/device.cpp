#include "device.h"
#include "player.h"
#include "backendvideo.h"

void Device::setPlayer(Player *player)
{
    m_player = player;
}

void Device::setBackendVideo(BackendVideo *backendVideo)
{
    m_backendVideo = backendVideo;
}

Player *Device::player() const
{
    return m_player;
}

BackendVideo *Device::backendVideo() const
{
    return m_backendVideo;
}
