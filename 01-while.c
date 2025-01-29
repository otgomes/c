algoritimo Enquanto
var
    opcao, cont:inteiro
início

    cont <- 1
    enquanto (cont <= 100) faça
        escreva("aguarde...")
        cont <- cont+1
    fimenquanto

    opcao <- 0
    enquanto (opcao <>3) faça
        escreva("Digite uma opção, 1 - para cadastrar, 2 - para consultar, 3 - para sair")
        leia(opcao)

        se(opcao=1) então
            escreva("Efetuar cadastro")
        fimse
        se(opcao=2) então
            escreva("Consultar cadastro")
        fimse
    fimenquanto
fim