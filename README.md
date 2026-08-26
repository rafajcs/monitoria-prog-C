# Apostila e Material de Monitoria de Linguagem C

Este repositório reúne o material complementar utilizado para as monitorias da disciplina de Linguagem C. O projeto foi elaborado para auxiliar alunos que já possuem experiência prévia com programação (especialmente Python) na transição para a linguagem C.

A proposta pedagógica deste repositório não é apenas ensinar a sintaxe do C, mas também instigar os alunos a entenderem o que acontece por baixo dos panos (representação em memória, alocação, etc).

> **Aviso:** Este projeto está em **desenvolvimento incremental**. A apostila e os materiais não estão concluídos e são construídos progressivamente ao longo do semestre, acompanhando o andamento das aulas e incorporando o feedback (dúvidas e dificuldades) dos alunos na monitoria.

## Estrutura do Repositório

O repositório é organizado para separar o material mais detalhado (apostila) do material mais conciso (slides) e dos materiais práticos (códigos e exercícios).

- **`apostila/`**: Contém o código-fonte em LaTeX da apostila, que é o material principal e mais aprofundado.
- **`guias/`**: Guias rápidos e práticos em Markdown para lembrar rapidamente o assunto e programar (estilo cheatsheet).
- **`slides/`**: Contém os slides de apoio usados durante as sessões de monitoria, sendo mais focados, visuais e concisos.
- **`codigos/`**: Contém exemplos de código C referentes a cada capítulo. Os códigos são organizados por assunto para fácil compilação e teste.
- **`exercicios/`**: Exercícios separados por capítulo. Cada capítulo tem exercícios com progressão: fixação, aplicação e desafio.
- **`docs/`**: Documentos de apoio, planejamento da monitoria e guias de contribuição.

## Como utilizar

- **Onde encontrar a Apostila**: O arquivo PDF da apostila pode ser gerado a partir do diretório `apostila/` (ver instruções abaixo) ou baixado caso disponibilizado nas releases.
- **Guias Rápidos em Markdown**: Acesse a pasta `guias/` para resumos práticos orientados à programação, ideais para visualizar direto no GitHub.
- **Onde encontrar os Slides**: Acesse a pasta `slides/` e procure o diretório do capítulo correspondente.
- **Onde encontrar Exercícios e Códigos**: Navegue em `exercicios/` para testar seus conhecimentos e em `codigos/` para ler e executar os exemplos em C abordados nos capítulos.

## Como compilar a Apostila

A apostila foi escrita em LaTeX. Para compilar o documento em PDF (usando LuaLaTeX ou XeLaTeX devido às configurações de fontes como `TeX Gyre Pagella`):

```bash
cd apostila
lualatex main.tex
# ou
xelatex main.tex
```

## Como compilar os códigos em C

Para compilar e executar os códigos de exemplo (assumindo o GCC):

```bash
cd codigos/01-introducao
gcc hello.c -o hello
./hello
```

## Estado Atual do Desenvolvimento

- **Capítulo 1:** Introdução (Concluído)
- **Capítulo 2:** Variáveis, Tipos e Operadores (Em andamento)
- Demais capítulos serão desenvolvidos incrementalmente no decorrer do semestre.
