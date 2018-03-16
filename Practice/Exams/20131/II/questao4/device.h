#ifndef DEVICE_H
#define DEVICE_H

class Player;
class BackendVideo;

class Device
{
public:
    void setPlayer(Player *player);
    void setBackendVideo(BackendVideo *backend);
    virtual void play() = 0;
    virtual void showVideo() = 0;

protected:
    Player *player() const;
    BackendVideo *backendVideo() const;

private:
    Player *m_player;
    BackendVideo *m_backendVideo;
};

#endif // DEVICE_H
