#include <string>
#include <iostream>

#include "component.h"
#include "marketcomposite.h"
#include "produto.h"

int main()
{
    Component *arroz = new Produto(4.00);
    Component *feijao = new Produto(5.00);

    Component *alimentos = new MarketComposite;

    alimentos->addChild(arroz);
    alimentos->addChild(feijao);

    Component *camisa = new Produto(10.00);

    Component *vestuario = new MarketComposite;
    
    vestuario->addChild(camisa);

    Component *mercado = new MarketComposite;

    mercado->addChild(vestuario);
    mercado->addChild(alimentos);

    mercado->mostrar();

    std::cout << std::endl;

    feijao->aumentarPreco(0.2);

    mercado->mostrar();

    std::cout << std::endl;

    alimentos->aumentarPreco(0.1);

    mercado->mostrar();

    std::cout << std::endl;

    mercado->aumentarPreco(0.3);

    mercado->mostrar();

    std::cout << std::endl;

    std::cout << alimentos->removeChild(feijao) << "\n\n";  // feijao está presente

    std::cout << alimentos->removeChild(camisa) << "\n\n";  // camisa não está presente

    mercado->mostrar();

    return 0;
}
