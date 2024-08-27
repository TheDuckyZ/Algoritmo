from categoria import Categoria
from transacao import Transacao
from funcoes import cadastrar_categoria, cadastrar_transacao, saldo_total

categoria_receitas = cadastrar_categoria("Receitas")
categoria_contas = cadastrar_categoria("Contas Fixas")
categoria_viagens = cadastrar_categoria("Viagens")

cadastrar_transacao(
    descricao="Salário",
    valor=2100.68,
    categoria=categoria_receitas
)

cadastrar_transacao(
    descricao="Internet",
    valor=-74.59,
    categoria=categoria_contas
)

cadastrar_transacao(
    descricao="Cancun",
    valor=-760.00,
    categoria=categoria_viagens
)

total = saldo_total()

print("Saldo Total: ", total)