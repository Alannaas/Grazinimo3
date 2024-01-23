#include <iostream> //�traukiame bibliotek�, kuri valdo skaitym� i� standartini� sraut� ir � juos
#include <fstream> //�traukiame bibliotek�, kuri leid�ia �ra�yti informacij� � failus ir i� j�
#include <iomanip> //�traukiame bibliotek�, kuri palengivna darb� su skai�iais
using namespace std;

//sukuriamos funkcijos: void - be informacijos gr��imo, int - su informacijos gr��imu
void duomenys();
void nuskaitymas();
int suma();
int skirtumas();
int sandauga();
double dalmuo();
//�vedame kintamuosius: double - didesniems skai�iams, float - skai�iui po kablelio
double a;
double b;
double sumaa;
double skirtumass;
double sandaugaa;
float dalmuoo;



int main() //pagrindin� funkcija
{
    setlocale(LC_ALL, "Lithuanian"); //�vedame lietuvi� kalb�
    duomenys(); //duomen� funkcija
    nuskaitymas(); //nuskaitymo funkcija
    ofstream fout("Rezultatas.txt"); //failas, � kur� �ra�ysime duomenis

    fout << a << " + " << b << " = " << suma() << endl; //�vedame skai�i� sum� � atsakym� fail�
    fout << a << " - " << b << " = " << skirtumas() << endl; //�vedame skai�i� skirtum� � atsakym� fail�
    fout << a << " * " << b << " = " << sandauga() << endl; //�vedame skai�i� sandaug� � atsakym� fail�
    fout << fixed <<setprecision(2)<< a << " / " << b << " = " << dalmuo() << endl; //�vedame skai�i� dalmen� � atsakym� fail�

    fout.close(); //u�darome fail�
    return 0;
}


void duomenys() //duomen� funkcija
{
    ofstream fout("Duomenys.txt"); //failas, � kur� �ra�ysime skai�ius
    cout<<"�veskite 2 skai�ius"<<endl; //papra�ome, kad vartotojas �vest� 2 skai�ius
    cin>>a; //�vedamas pirmas skaitmuo
    cin>>b; // �vedamas antras skaitmuo
    fout<<a<<endl; //pirmas skaitmuo �ra�omas � duomen� fail�
    fout<<b; //antras skaitmuo �ra�omas � duomen� fail�
    fout.close(); //u�daromas failas
}

void nuskaitymas() //nuskaitymo failas
{
    ifstream fin("Duomenys.txt"); //failas i� kurio nura�ysime duomenis
    fin>>a; //nura�omas pirmas skaitmuo i� failo
    fin>>b; //nura�omas antras skaitmuo i� failo
    fin.close(); //u�daromas failas
}

int suma() //sumos funkcija
{
    sumaa = a + b; //skai�i� suma
    cout<<a<<" + "<<b<<" = "<<sumaa<<endl; //parodomas sumos veiksmas
    return sumaa; //funkcija gr��ina atsakym�
}

int skirtumas() //skirtumo funkcija
{
    skirtumass = a - b; //skai�i� skirtumas
    cout<<a<<" - "<<b<<" = "<<skirtumass<<endl; //parodomas atimties veiksmas
    return skirtumass; //funkcija gr��ina atsakym�
}

int sandauga() //sandaugos funkcija
{
    sandaugaa = a * b; //skai�i� sandauga
    cout<<a<<" * "<<b<<" = "<<sandaugaa<<endl; //parodomas sandaugos veiksmas
    return sandaugaa; //funkcija gr��ina atsakym�
}

double dalmuo() //dalmens funkcija
{
    double dalmuoo = a / b;  // paver�iame atsakym� � double, d�l tikslesnio dalinimo
    cout<< a << " / " << b << " = " <<setprecision(2)<< dalmuoo << endl; //padarome, kad po dalybos likt� 2 skai�iai po kablelio
    return dalmuoo; //funkcija gr��ina atsakym�
}
