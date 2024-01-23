#include <iostream> //átraukiame bibliotekà, kuri valdo skaitymà ið standartiniø srautø ir á juos
#include <fstream> //átraukiame bibliotekà, kuri leidþia áraðyti informacijà á failus ir ið jø
#include <iomanip> //átraukiame bibliotekà, kuri palengivna darbà su skaièiais
using namespace std;

//sukuriamos funkcijos: void - be informacijos gráþimo, int - su informacijos gráþimu
void duomenys();
void nuskaitymas();
int suma();
int skirtumas();
int sandauga();
double dalmuo();
//ávedame kintamuosius: double - didesniems skaièiams, float - skaièiui po kablelio
double a;
double b;
double sumaa;
double skirtumass;
double sandaugaa;
float dalmuoo;



int main() //pagrindinë funkcija
{
    setlocale(LC_ALL, "Lithuanian"); //ávedame lietuviø kalbà
    duomenys(); //duomenø funkcija
    nuskaitymas(); //nuskaitymo funkcija
    ofstream fout("Rezultatas.txt"); //failas, á kurá áraðysime duomenis

    fout << a << " + " << b << " = " << suma() << endl; //ávedame skaièiø sumà á atsakymø failà
    fout << a << " - " << b << " = " << skirtumas() << endl; //ávedame skaièiø skirtumà á atsakymø failà
    fout << a << " * " << b << " = " << sandauga() << endl; //ávedame skaièiø sandaugà á atsakymø failà
    fout << fixed <<setprecision(2)<< a << " / " << b << " = " << dalmuo() << endl; //ávedame skaièiø dalmená á atsakymø failà

    fout.close(); //uþdarome failà
    return 0;
}


void duomenys() //duomenø funkcija
{
    ofstream fout("Duomenys.txt"); //failas, á kurá áraðysime skaièius
    cout<<"Áveskite 2 skaièius"<<endl; //papraðome, kad vartotojas ávestø 2 skaièius
    cin>>a; //ávedamas pirmas skaitmuo
    cin>>b; // ávedamas antras skaitmuo
    fout<<a<<endl; //pirmas skaitmuo áraðomas á duomenø failà
    fout<<b; //antras skaitmuo áraðomas á duomenø failà
    fout.close(); //uþdaromas failas
}

void nuskaitymas() //nuskaitymo failas
{
    ifstream fin("Duomenys.txt"); //failas ið kurio nuraðysime duomenis
    fin>>a; //nuraðomas pirmas skaitmuo ið failo
    fin>>b; //nuraðomas antras skaitmuo ið failo
    fin.close(); //uþdaromas failas
}

int suma() //sumos funkcija
{
    sumaa = a + b; //skaièiø suma
    cout<<a<<" + "<<b<<" = "<<sumaa<<endl; //parodomas sumos veiksmas
    return sumaa; //funkcija gràþina atsakymà
}

int skirtumas() //skirtumo funkcija
{
    skirtumass = a - b; //skaièiø skirtumas
    cout<<a<<" - "<<b<<" = "<<skirtumass<<endl; //parodomas atimties veiksmas
    return skirtumass; //funkcija gràþina atsakymà
}

int sandauga() //sandaugos funkcija
{
    sandaugaa = a * b; //skaièiø sandauga
    cout<<a<<" * "<<b<<" = "<<sandaugaa<<endl; //parodomas sandaugos veiksmas
    return sandaugaa; //funkcija gràþina atsakymà
}

double dalmuo() //dalmens funkcija
{
    double dalmuoo = a / b;  // paverèiame atsakymà á double, dël tikslesnio dalinimo
    cout<< a << " / " << b << " = " <<setprecision(2)<< dalmuoo << endl; //padarome, kad po dalybos liktø 2 skaièiai po kablelio
    return dalmuoo; //funkcija gràþina atsakymà
}
