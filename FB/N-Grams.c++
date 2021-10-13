#include <iostream>
#include <vector>
#include <map>

using namespace std;

/* Imprimir n-grams encontrados y el n-gram que se repite mas
Entradad:       nGrams      vector que contiene todos los n-grams encontrados
                nGramFreq   string que representa el n-gram mas repetido
Complejidad:    O(n)    siendo n el tamaño de nGrams,
                        por cada n-gram encontrada lo va a mostrar en pantalla */
void printNGramsAndFreq(vector<string> nGrams, string nGramFreq) {
    for (int i = 0; i < nGrams.size(); i++) {
        if (i != nGrams.size()-1) {
            cout << nGrams[i] << " , ";
        } else {
            cout << nGrams[i] << endl;
        }
    }

    // en lugar de esto imprimir lista de n-grams que mayor se repiten
    cout << "Most frequent n-gram: " <<  nGramFreq << endl << endl;
}

/*
Obtener todos los n-grams que mayor se repiten
Entrada:    maxFreq     mayor numero de veces que un n-gram se repite
            nGramsfreq  mapa con n-grams y su numero de frecuencia
            ngrams      ngrams encontrado
Salida:     vector<string>  contiene todos aquellos n-grams que se repiten 
Complejidad: O(n) siendo n el tamaña de n-grams encontrados */
vector<string> getNGramsMostFreq (int maxFreq, map<string,int> nGramsFreq, vector<string> nGrams){
     vector<string> nGramsMostFreq;
     for (int i = 0; i < nGrams.size(); i++) {
         if (nGramsFreq[nGrams[i]] == maxFreq) { // Checar si no esta dentro de vector
             nGramsMostFreq.push_back(nGrams[i]);
         }
     } 
     return nGramsMostFreq;
}

/* Obtener n-grams y definir aquel que más se repite
Entrada:        text string del cual obtener n-grams
                n    numero de caracteres de cada string a generar
Salida:         bool verdadero si encontro n-grams, falso si no
Complejidad:    O(m * n) siendo m el tamaño de text y n el valor de n de entrada. */
bool calculateNGrams(string text, int n){
    vector<string> nGrams; // Vector para guardar nGrams
    map<string, int> freqNGrams; //Mapa para guardar los n-grams y veces que se repiten

    string gram = ""; // Representa cada n-gram que se genera
    string nGramFreq=""; // Almacena n-gram mas repetido

    int ind = 0, // Indice para recorrer text por cada caracter de este mismo
        count = 0, // Contador para checar si el tamaño de n-gram generado es n
        maxFreq = 0, // Mayor numero de veces que se repite un n-gram
        size = text.length(); // Tamaño del texto de entrada
    
    // Si n es mayor que el tamaño del texto, no encontrará ningún n-gram
    // o n es cero o un numero negativo
    if (n > text.length() || n < 1) {
        return false;
    }

    for (int i = 0; i < text.length(); i++) {
        gram = ""; //
        ind = i;
        if (i + (n-1) < text.length()){ // -1 por que empieza desde 0 indexación
            count = 0;
            while (count < n) { // Mientras gram no tenga aun n caracteres
                gram += text[ind];
                ind++;
                count++;
            }

            nGrams.push_back(gram); // Agregar ngram a vector
            freqNGrams[gram] += 1; // Sumar repeticion al mapa que contiene su llave
            
            // Evaluar si este n-gram el más repetido
            // Si encuentra dos o mas con el mismo numero de frecuencia imprime el primero encontrado
            if (freqNGrams[gram] > maxFreq) { 
                maxFreq = freqNGrams[gram];
                nGramFreq = gram;
            }
        }
    }

    vector<string> mostFreq = getNGramsMostFreq (maxFreq,freqNGrams,nGrams);
    printNGramsAndFreq(nGrams, nGramFreq);

    return true;
}

int main() {
    // Casos de prueba 
    // Válidos
    calculateNGrams("slang", 1);
    calculateNGrams("slang", 2);
    calculateNGrams("slang", 3);
    calculateNGrams("slang", 4);
    calculateNGrams("slang", 5);
    calculateNGrams("slang", 6);
    calculateNGrams("to be or not to be", 2);
    calculateNGrams("to be or not be be", 2); // b y be son los más repetidos, en este caso devolverá solo el primer encontrado: b
    
    // No válidos
    calculateNGrams("Hello world!", -3);
    calculateNGrams("coding", 8);
    calculateNGrams("", 2);
}
