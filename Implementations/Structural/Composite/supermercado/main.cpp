#include <string>
#include <iostream>

#include "component.h"
#include "categoria.h"
#include "produto.h"

int main()
{
    Produto *arroz = new Produto(1, "Arroz", 4.00);
    Produto *feijao = new Produto(2, "Feijao", 5.00);

    Categoria *alimentos = new Categoria(3, "Alimentos");

    alimentos->addChild(arroz);
    alimentos->addChild(feijao);

    Produto *camisa = new Produto(4, "Camisa", 10.00);

    Categoria *vestuario = new Categoria(5, "Vestuário");
    
    vestuario->addChild(camisa);

    Categoria *mercado = new Categoria(6, "Supermercado");

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

    return 0;
}
