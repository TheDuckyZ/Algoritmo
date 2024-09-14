from Professor import Professor
from Escola import Escola
from Diretor import Diretor

obj_diretor = Diretor(1, "João", "", "", "", 1, "diretor")

obj_diretor.id_pessoa = 1
obj_diretor.nome = "João"
obj_diretor.id_diretor = 1
obj_diretor.cargo = "diretor"

objEscola = Escola()

objEscola.id_escola = 1
objEscola.local = "Bonfim"
objEscola.instituicao = "IF Baiano"
objEscola.diretor = obj_diretor

print(objEscola.diretor.nome)