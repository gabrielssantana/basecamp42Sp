/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:50:16 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/07 02:58:02 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Protótipo da função, serve para o compilador saber onde colocar a função que está em outro arquivo para ser usada neste arquivo
void	ft_putchar(char c);

//typedef serve para atribuirmos um apelido para um tipo específico, por exemplo se quero que o int se chame inteiro, passo um typedef int inteiro
//struct serve para gerar um novo tipo de dado personalizado, ele pode conter vários tipos diferentes em sua formação, por exemplo:
//struct s_pessoa {
//	char[]	nome;
//	char[]	sobrenome;
//	int		idade;
//	float	peso;
//}
typedef struct s_characters {
	char	fst;
	char	scd;
	char	trd;
}	t_characters;

//função que escreve os caracteres da linha na ordem e quantidade certa de acordo com os caracteres passados para nossa struct e quantidade de colunas
void	ft_start_end_print(t_characters chars, int col_pos, int columns)
{
//valida se é a primeira coluna e coloca o primeiro caracter
	if (col_pos == 0)
	{
		ft_putchar(chars.fst);
	}
//valida se é a última coluna e coloca o último caracter
	else if (col_pos == columns - 1)
	{
		ft_putchar(chars.trd);
	}
//se não for nenhum dos casos acima com certeza será um caracter que deve estar nas colunas do meio
	else
	{
		ft_putchar(chars.scd);
	}
}

//função que controla a escrita das linhas
void	ft_print_row(t_characters chars, int columns)
{
//declaração de col_pos, variável que controla qual foi a última coluna a ser escrita
	int	col_pos;

//inicialização com valor 0 da variável col_pos
	col_pos = 0;
//loop para inserir cada caracter de cada linha
	while (col_pos < columns)
	{
		ft_start_end_print(chars, col_pos, columns);
		col_pos++;
	}
	ft_putchar('\n');
}

//funcao para atribuir valores para as variáveis de nossa struct de modo dinâmico, sem ela teríamos que atribuir na mão cada uma
void	ft_init_struct(/*aqui recebemos o ponteiro(endereço) de onde está nossa struct*/t_characters *chars, char fst, char scd, char trd)
{
	//aqui em cada linha e com o operador -> atribuímos os valores de cada variável char recebidos como parâmetros desta função aos endereços das variáveis de nossa struct
	chars->fst = fst;
	chars->scd = scd;
	chars->trd = trd;
}

//nossa belíssima e excelentíssima função rush
void	rush(int x, int y)
{
//declaração de k, esta é nossa variável de controle das linhas do meio
	int				k;

//declaração das structs, aqui graças ao typedef atribuído antes da palavra chave struct lá no início deste arquivo, podemos criar as três variáveis structs e dar nomes a elas como se a struct fosse uma variável nativa do c
	t_characters	first_row;
	t_characters	middle_row;
	t_characters	last_row;

//este bloco chama a função que irá atrubuir para cada variável dentro de nossa struct o devido caractere que será usado para a exibição do programa
	ft_init_struct(&first_row, 'A', 'B', 'A');
	ft_init_struct(&middle_row, 'B', ' ', 'B');
	ft_init_struct(&last_row, 'C', 'B', 'C');

//valida se foi passado ao menos uma linha para ser impressa pelo programa e escreve a linha de cabeçalho no console
	if (y > 0)
	{
		ft_print_row(first_row, x);
	}
// inicialização com valor 0 da variável k, isto poderia ter sido inicializado logo abaixo da declaração das structs
	k = 0;
//valida se há linhas do meio e se houver escreve no console
	while (k < (y - 2))
	{
		ft_print_row(middle_row, x);
		k++;
	}
//valida se há mais de uma linha e se houver imprime a linha de rodapé após serem escritas todas as linhas do meio, se houverem
	if (y > 1)
	{
		ft_print_row(last_row, x);
	}
}
