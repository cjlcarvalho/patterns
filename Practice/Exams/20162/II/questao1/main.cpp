#include "ivideo.h"
#include "video1.h"
#include "codec1.h"
#include "icomponent.h"
#include "propagandaantes.h"
#include "propagandadepois.h"

int main()
{
    IVideo *video1 = new Video1;
    video1->setCodec(new Codec1);

    IComponent *videoComPropaganda = new PropagandaAntes(new PropagandaDepois(video1));

    videoComPropaganda->play();

    return 0;
}
