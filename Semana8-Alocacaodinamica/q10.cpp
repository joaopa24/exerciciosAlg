#include <iostream>

using namespace std;

int main() {
    int n1, n2;

    // Lê o tamanho do primeiro vetor
    cin >> n1;

    // Aloca o primeiro vetor dinamicamente
    char* str1 = new char[n1];

    // Lê os elementos do primeiro vetor
    for (int i = 0; i < n1; i++) {
        cin >> str1[i];
    }

    // Lê o tamanho do segundo vetor
    cin >> n2;

    // Aloca o segundo vetor dinamicamente
    char* str2 = new char[n2];

    // Lê os elementos do segundo vetor
    for (int i = 0; i < n2; i++) {
        cin >> str2[i];
    }

    // Cria um vetor auxiliar para marcar quais caracteres devem ser mantidos
    bool* manter = new bool[n1];
    for (int i = 0; i < n1; i++) {
        manter[i] = true;
    }

    // Marca os caracteres que devem ser removidos
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (str1[i] == str2[j]) {
                manter[i] = false;
                break;
            }
        }
    }

    // Conta quantos caracteres devem ser mantidos
    int tamanho_resultante = 0;
    for (int i = 0; i < n1; i++) {
        if (manter[i]) {
            tamanho_resultante++;
        }
    }

    // Aloca o vetor resultante dinamicamente
    char* resultado = new char[tamanho_resultante];

    // Copia os caracteres que devem ser mantidos para o vetor resultante
    int j = 0;
    for (int i = 0; i < n1; i++) {
        if (manter[i]) {
            resultado[j] = str1[i];
            j++;
        }
    }

    // Imprime o resultado
    for (int i = 0; i < tamanho_resultante; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    // Libera a memória alocada
    delete[] str1;
    delete[] str2;
    delete[] manter;
    delete[] resultado;

    return 0;
}
