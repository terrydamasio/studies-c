#include <iostream>
#include <string>
using namespace std;

struct Livro {
    string titulo;
    string autor;
    int anoPublicacao;
};

// Função para exibir livros publicados após um determinado ano
void exibirLivrosRecentes(Livro livros[], int tamanho, int anoMinimo) {
    cout << "\nLivros publicados após " << anoMinimo << ":\n";
    bool encontrou = false;
    
    for (int i = 0; i < tamanho; i++) {
        if (livros[i].anoPublicacao > anoMinimo) {
            cout << "\nTítulo: " << livros[i].titulo << endl;
            cout << "Autor: " << livros[i].autor << endl;
            cout << "Ano: " << livros[i].anoPublicacao << endl;
            encontrou = true;
        }
    }
    
    if (!encontrou) {
        cout << "Nenhum livro encontrado após " << anoMinimo << ".\n";
    }
}

int main() {
    int N;
    cout << "Quantos livros deseja cadastrar? ";
    cin >> N;
    cin.ignore(); // Limpa o buffer
    
    Livro* livros = new Livro[N];
    
    // Cadastra os livros
    for (int i = 0; i < N; i++) {
        cout << "\nLivro " << i + 1 << ":\n";
        cout << "Título: ";
        getline(cin, livros[i].titulo);
        cout << "Autor: ";
        getline(cin, livros[i].autor);
        cout << "Ano de publicação: ";
        cin >> livros[i].anoPublicacao;
        cin.ignore(); // Limpa o buffer
    }
    
    // Filtra por ano
    int anoFiltro;
    cout << "\nDigite o ano mínimo para filtrar: ";
    cin >> anoFiltro;
    
    exibirLivrosRecentes(livros, N, anoFiltro);
    
    delete[] livros; // Libera memória
    return 0;
}