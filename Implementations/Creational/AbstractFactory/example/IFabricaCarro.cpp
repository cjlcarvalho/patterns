class IFabricaCarro {
public:
    virtual IPneu* criarPneu() = 0;
    virtual IMotor* criarMotor() = 0;
    virtual IChassi* criarChassi() = 0;
    virtual IBanco* criarBanco() = 0;
};

class FabricaCarroPopular : IFabricaCarro public {
public:
    IPneu* criarPneu();
    IMotor* criarMotor();
    IChassi* criarChassi();
    IBanco* criarBanco();
};

IPneu* FabricaCarroPopular::criarPneu(){
    return new PneuPopular;
}

IMotor* FabricaCarroPopular::criarMotor(){
    return new MotorPopular;
}

IChassi* FabricaCarroPopular::criarChassi(){
    return new ChassiPopular;
}

IBanco* FabricaCarroPopular::criarBanco(){
    return new BancoPopular;
}

