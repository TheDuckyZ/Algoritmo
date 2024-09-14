from Pessoa import Pessoa

class Diretor(Pessoa):
    id_diretor:int
    cargo:str

    def __init__(self, id_pessoa, nome, telefone, email, endereco, id_diretor, cargo):
        self.id_diretor = id_diretor
        self.cargo = cargo
        self.id_pessoa = id_pessoa
        super.__init__(self, id_pessoa, nome, telefone, email, endereco)
