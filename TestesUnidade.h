#ifndef TESTESUNIDADE_H_INCLUDED
#define TESTESUNIDADE_H_INCLUDED

#include "Domínios.h"
#include "Entidades.h"

using namespace std;

///Testes de unidade de domínios

class TUCodigo {
private:
    string VALOR_VALIDO   = "ALP777";
    string VALOR_INVALIDO = "B92Q$3";
    Codigo *codigo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUClasse {
private:
    string VALOR_VALIDO   = "UNIDADE";
    string VALOR_INVALIDO = "FINANCEIRO";
    Classe *classe;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUData {
private:
    string VALOR_VALIDO   = "06/MAR/2003";
    string VALOR_INVALIDO = "57/ZED/1998";
    Data *data;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUMatricula {
private:
    string VALOR_VALIDO   = "7268495";
    string VALOR_INVALIDO = "6847626";
    Matricula *matricula;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUResultado {
private:
    string VALOR_VALIDO   = "APROVADO";
    string VALOR_INVALIDO = "ABDUZIDO";
    Resultado *resultado;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUSenha {
private:
    string VALOR_VALIDO   = "T0p@t7";
    string VALOR_INVALIDO = "UNBN77";
    Senha *senha;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUTelefone {
private:
    string VALOR_VALIDO   = "+999565614";
    string VALOR_INVALIDO = "+98711245683219956";
    Telefone *telefone;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUTexto {
private:
    string VALOR_VALIDO   = "Mandou bem!";
    string VALOR_INVALIDO = "B0A            NOITE";
    Texto *texto;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///Testes de unidade de entidades


class TUDesenvolvedor {
private:
    string MATRICULA_VALIDA   = "1234569";
    string NOME_VALIDO   = "Joao Visconti";
    string SENHA_VALIDA   = "P@t0Do";
    string TELEFONE_VALIDO   = "+999565604";
    Desenvolvedor *desenvolvedor;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO = 0;
    const static int FALHA   = -1;
    int run();
};

class TUTeste {
private:
    string CODIGO_VALIDO   = "MAX999";
    string NOME_VALIDO   = "Laura Marques";
    string CLASSE_VALIDA   = "FUMACA";
    Teste *teste;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO = 0;
    const static int FALHA   = -1;
    int run();
};

class TUCasoDeTeste {
private:
    string CODIGO_VALIDO   = "1234569";
    string NOME_VALIDO   = "Gabriel Teixeira";
    string DATA_VALIDA   = "23/01/2003";
    string ACAO_VALIDA   = "documentacao";
    string RESPOSTA_VALIDA   = "Otimo Trabalho";
    string RESULTADO_VALIDO   = "REPROVADO";
    CasoDeTeste *casodeteste;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO = 0;
    const static int FALHA   = -1;
    int run();
};

#endif // TESTESUNIDADE_H_INCLUDED
