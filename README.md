# Protótipo de E-Commerce


## Introdução:

O objetivo do nosso sistema será criar um ambiente no qual uma pessoa
pode buscar itens de interesse e comprá-los de lojas que tenham esse
produto em estoque.

Primeiramente, criaremos um 'site' que será responsável por armazenar todas as
contas criadas, sejam elas de lojas(venda) ou de clientes(compra). Portanto,
esse site deve possuir funcionalidade tanto de criação de conta,
quanto de login.

Depois de ter a conta criada (ou ter efetuado login), precisamos permitir, a depender
do tipo de conta, que sejam feitos cadastros de produtos no site ou buscas por
itens de interesse. No caso da busca, é importante que seja viável pesquisar
tanto por nome(ex: meia), quanto por tipo de item(ex: roupa), visando facilitar
a navegação. Além disso, é importante que os usuários consigam alterar suas
informações incialmente cadastradas(ex: mudança de endereço).

Por fim, se houver disponibilidade do produto desejado pelo cliente, deve ser
possível que ele faça um pedido, o qual ficará salvo no seu histórico de pedidos.

Por parte da loja, essas devem possuir funcionalidades para modificarem seus
produtos listados(seja para alterar o preço, modificar o estoque,
melhorar a descrição etc).


## Lista de Requisitos do site E-Commerce:

**1. Gerenciar as contas criadas. Portanto, devemos permitir operações de:**
- Criação de novas contas
- Acesso a cada conta por meio de login usando dados cadastrados

**2. Contas devem possuir um atributo que atue como chave primária.**
- Para contas de clientes, será o CPF
- Para contas de lojas, será o CNPJ

**3. Especificamente para clientes:**
- Possibilidade de buscar por loja(nome)
- Fazer um pedido que tenha diferentes produtos
- Modificar o pedido(excluir um item ou adicionar outro)
- Verificar o valor total do pedido, assim como todos os itens
- Consultar pedido

**4. Especificamente para lojas:**
- Possibilidade de alterar informações sobre seus produtos cadastrados
- Adicionar novos produtos
- Remover produtos
- Listar todos os seus itens atualmente em venda


## Como Utilizar:

**Comando para compilação:**
```sh
make
```

**Comando para execução:**
```sh
./e-commerce
```
