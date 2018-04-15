#include "icliente.h"
#include "observer.h"
#include "clientepessoafisica.h"
#include "clientepessoajuridica.h"
#include "observerpessoafisica.h"
#include "observerpessoajuridica.h"

#include <iostream>

using namespace std;

int main()
{
    ICliente *cliente = new ClientePessoaFisica;
    cliente->setEndereco("Rua tal");
    cliente->setTelefone("1111-2222");
    cliente->setCNPJ("123.123.123/0001-11");

    cliente->attach(new ObserverPessoaFisica);

    cliente->save();

    cout << endl;

    cliente = new ClientePessoaJuridica("Zé Atacados");
    cliente->setEndereco("Rua X");
    cliente->setTelefone("1234-5678");
    cliente->setCNPJ("123.123.123/0001-11");

    cliente->attach(new ObserverPessoaJuridica);
    cliente->attach(new ObserverPessoaJuridica);

    cliente->save();

    return 0;
}
