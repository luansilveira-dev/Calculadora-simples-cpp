#include <iostream>


void soma(double n1, double n2){
    double r = n1 + n2;
    std::cout << n1 << " + " << n2 << " = " << r <<"\n";

}

void sub(double n1, double n2){
    double r = n1 - n2;
    std::cout << n1 << " - " << n2 << " = " << r <<"\n";
}

void mult(double n1 , double n2){
    double r = n1 * n2;
    std::cout << n1 << " x " << n2 << " = " << r <<"\n";
}

void divi(double n1, double n2){
    double r = n1 / n2;
    std::cout << n1 << " / " << n2 << " = " << r << "\n";
} 

void menu(){
    std::cout <<"\n\n+----------------------+\n| Escolha uma Operacao |\n+----------------------+\n| 1 - Adicao           |\n| 2 - Subtracao        |\n| 3 - Multiplicacao    |\n| 4 - Divicao          |\n| 5 - Sair             |\n+----------------------+\n\n";

}
int main(){
    bool run = true;
    while(run){
        menu();
        std::string op;
        std::cout << "Digite o numero da sua operacao escolhida: "; std::cin >> op;
        if (op == "1"){
            double n1, n2 ;
            std::cout << "Numero: ";  std::cin >> n1;
            std::cout << "Numero: "; std::cin >> n2;
            soma(n1, n2);
        }

        else if (op == "2"){
            double n1, n2 ;
            std::cout << "Numero: ";  std::cin >> n1;
            std::cout << "Numero: "; std::cin >> n2;
            sub(n1, n2);
        }

        else if (op == "3"){
            double n1, n2 ;
            std::cout << "Numero: ";  std::cin >> n1;
            std::cout << "Numero: "; std::cin >> n2;
            mult(n1, n2);
        }

         else if (op == "4"){
            double n1, n2 ;
            std::cout << "Numero: ";  std::cin >> n1;
            std::cout << "Numero: "; std::cin >> n2;
            divi(n1, n2);
        }

        else if(op == "5"){
            system("pause");
            run = false;
        }
    }
    return 0;
}