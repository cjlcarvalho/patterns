#include "ibusinessprocess.h"
#include "avaliacao.h"
#include "twitternotifier.h"
#include "emailnotifier.h"
#include "blognotifier.h"

#include <string>

using namespace std;

int main()
{
    IBusinessProcess *process = new TwitterNotifier(new BlogNotifier(new EmailNotifier(new Avaliacao("Padrões de Projeto"))));

    process->finalizeProcess();

    return 0;
}
