from Pessoa import Pessoa
from Escola import Escola

class Professor(Pessoa):
    id_professor:int
    formacao:str
    escola:Escola
    