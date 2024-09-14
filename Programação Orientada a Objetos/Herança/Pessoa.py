class Pessoa(self):
    id_pessoa:int
    nome:str
    tel:str
    email:str
    endereco:str

    def __init__(self, id_pessoa, nome, telefone, email, endereco, id_diretor, cargo):
        self.id_pessoa = id_pessoa
        self.nome = nome
        self.telefone = telefone
        self.email = email
        self.endereco = endereco
