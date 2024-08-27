class Pessoa():
    def __init__(self, nome, idade, sexo, altura):
        self.nome = nome
        self.idade = idade
        self.sexo = sexo
        self.altura = altura

    def imprimir(self):
        print(f"Nome: {self.nome}\nIdade: {self.idade}\nSexo: {self.sexo}\nAltura: {self.altura}")

matheus = Pessoa("Matheus", "18", "Masculino", "1.84")
matheus.imprimir()

