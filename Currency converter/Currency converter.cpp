//COMPUTER PROGRAMMING LAB FINALPROJECT

//INCLUDING LIBRARIES

#include <iostream>
#include<conio.h>
#include<algorithm>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;

//______________________________INCLUDING STRUCTURE_____________________________//
struct currency {
    float value;//20
    string from;
    string To;
}p1;
//_____________________________________________________________________________
void dollar_conversion_file(void);
void getpoint(currency&);
float givencurrency(currency&);
float givenresult(currency&);
void  storecontentinfile(currency&, float);
void currencynames(void);
void remove();
void uppercase(currency&);
void uppercase1(currency& p1);
void uppercase2(currency& p1);
void use_again();
//____________________________________________________________________________

int main()
{
    dollar_conversion_file();
    remove();
    currencynames();
start:
    /**************FUNCTION NAME AS getpoint(p1) IS CALLED IN THE FUNCTION givencurrency(p1) *********/
    float result = givencurrency(p1);//getpoint(p1)//called in the same function
    storecontentinfile(p1, result);
    /********************TO ENTER THE CURRENCY AGAIN*****************/

    cout << "IF YOU WANT TO USE CURRENCY CONVERTER AGAIN.";
    cout << "PRESS key B/b";
    cout << endl;
    char op;
    cout << "YOUR CHOICE IS :";
    cin >> op;

    switch (op)
    {
    case 'B':
        goto start;

        break;
    case 'b':
        goto start;
        break;
    default:
        system("CLS");
        cout << endl;
        cout << "THANKS FOR USINF CURRENCY CONVERTER ";
        exit((0));

        break;
    }
    _getch();
}
//____________________________________________________________________________________

void dollar_conversion_file(void)
{
    ifstream myfile;
    myfile.open("C:\\Users\\DELL\\Desktop\\currency.txt", ios::in);
    string output;
    if (!myfile)
    {
        cout << "File could not be opened" << endl;
        exit(0);
    }
    while (!myfile.eof())
    {
        //myfile >> output;
        getline(myfile, output, ',');
        cout << endl;

        cout << output;

    }
    myfile.close();

}

//____________________________________________________________________________________

void currencynames(void)
{

    ifstream myfile;
    myfile.open("C:\\Users\\DELL\\Desktop\\currency.names.txt", ios::in);
    string output;
    if (!myfile)
    {
        cout << "File could not be opened" << endl;
        exit(0);
    }
    while (!myfile.eof())
    {
        //myfile >> output;
        getline(myfile, output, ',');
        cout << endl;

        cout << output;

    }
    myfile.close();

}
//_______________________________________________________________________________

//_________________FUNCTION  TOREMOVE FILE________________________________________
void remove()

{
    cout << "if you want to remove above given one dollar conversion press any key or if not want to remove press R ";
    char op;
    cout << endl;
    cout << "YOUR  CHOICE  IS :";
    cin >> op;

    //cout << "if you want to remove above given one dollar conversion press any key or if not want to remove press R ";
    switch (op)
    {
    case 'R':
        break;
    case 'r':
        break;
    default:
        system("CLS");
        break;
    }

}
//_____________________________________________________________________________________________________

//_____________PROTOTYPES_________
//________________HAIDER

//____________________________________________________FOR INDONASIA______________________________________.
float givenresult1(currency&);
float givenresult2(currency&);
float givenresult3(currency&);
float givenresult4(currency&);
float givenresult5(currency&);
float givenresult6(currency&);
float givenresult7(currency&);
float givenresult8(currency&);
float givenresult9(currency&);
float givenresult10(currency&);
float givenresult11(currency&);
//________________________________________FOR BANGLADES______________________________________________

float givenresult12(currency&);
float givenresult13(currency&);
float givenresult14(currency&);
float givenresult15(currency&);
float givenresult16(currency&);
float givenresult17(currency&);
float givenresult18(currency&);
float givenresult19(currency&);
float givenresult20(currency&);
float givenresult21(currency&);
float givenresult22(currency&);
///_________________________________FOR  INDIA________________________________________________________

float givenresult23(currency&);
float givenresult24(currency&);
float givenresult25(currency&);
float givenresult26(currency&);
float givenresult27(currency&);
float givenresult28(currency&);
float givenresult29(currency&);
float givenresult30(currency&);
float givenresult31(currency&);
float givenresult32(currency&);
float givenresult33(currency&);

//__________________________________FOR  PAKISTAN________________________________________
float givenresult34(currency&);
float givenresult35(currency&);
float givenresult36(currency&);
float givenresult37(currency&);
float givenresult38(currency&);
float givenresult39(currency&);
float givenresult40(currency&);
float givenresult41(currency&);
float givenresult42(currency&);
float givenresult43(currency&);
float givenresult44(currency&);

//___________________________________SHERAZ CONVERSION_____________________________________
float givenresult01(currency&);
float givenresult02(currency&);
float givenresult03(currency&);
float givenresult04(currency&);
float givenresult05(currency&);
float givenresult06(currency&);
float givenresult07(currency&);
float givenresult08(currency&);
float givenresult09(currency&);
float givenresult010(currency&);
float givenresult011(currency&);
float givenresult012(currency&);
float givenresult013(currency&);
float givenresult014(currency&);
float givenresult015(currency&);
float givenresult016(currency&);
float givenresult017(currency&);
float givenresult018(currency&);
float givenresult019(currency&);
float givenresult020(currency&);
float givenresult021(currency&);
float givenresult022(currency&);
float givenresult023(currency&);
float givenresult024(currency&);
float givenresult025(currency&);
float givenresult026(currency&);
float givenresult027(currency&);
float givenresult028(currency&);
float givenresult029(currency&);
float givenresult030(currency&);
float givenresult031(currency&);
float givenresult032(currency&);
float givenresult033(currency&);
float givenresult034(currency&);
float givenresult035(currency&);
float givenresult036(currency&);
float givenresult037(currency&);
float givenresult038(currency&);
float givenresult039(currency&);
float givenresult040(currency&);
float givenresult041(currency&);
float givenresult042(currency&);
float givenresult043(currency&);
float givenresult044(currency&);
//_________________________________________________________________________________

//__________________________Abdullah____________________________________________
float givenresultA(currency&);
float givenresultB(currency&);
float givenresultC(currency&);
float givenresultD(currency&);
float givenresultE(currency&);
float givenresultF(currency&);
float givenresultG(currency&);
float givenresultH(currency&);
float givenresultI(currency&);
float givenresultJ(currency&);
float givenresultG(currency&);
float givenresultK(currency&);
float givenresultL(currency&);
float givenresultM(currency&);
float givenresultN(currency&);
float givenresultO(currency&);
float givenresultP(currency&);
float givenresultQ(currency&);
float givenresultR(currency&);
float givenresultS(currency&);
float givenresultT(currency&);
float givenresultU(currency&);
float givenresultV(currency&);
float givenresultW(currency&);
float givenresultX(currency&);
float givenresultY(currency&);
float givenresultZ(currency&);
float givenresulta(currency&);
float givenresultb(currency&);
float givenresultc(currency&);
float givenresultd(currency&);
float givenresulte(currency&);
float givenresultf(currency&);
float givenresultg(currency&);
float givenresulth(currency&);
float givenresulti(currency&);
float givenresultj(currency&);
float givenresultk(currency&);
float givenresultl(currency&);
float givenresultm(currency&);
float givenresultn(currency&);
float givenresulto(currency&);
float givenresultp(currency&);
float givenresultq(currency&);
float givenresultr(currency&);

//___________________________________________________________________________________________
////___________________________________FUNCTION TO GET STRUCTURE POINTS_____________________
void getpoint(currency& p1)
{

    //p1.value;
    cout << endl;
check:
    cout << endl;
    //_________GETTING VALUE
    cout << "ENTER THE AMOUNT OF  CURRENCY: ";
    cin >> p1.value;

    if (p1.value < 0)
    {
        cout << endl;
        cout << "ENTRE AGAIN ";
        goto check;
    }
    cout << endl;
    //_________GETTING STRING
    cout << "ENTER THE CURRENCY NAME TO BE CONVERTED: ";
    //  p1.from;       
    cin >> p1.from;
    uppercase1(p1);
    cout << endl;
    //_________GETTING STRING
    cout << "ENTER THE CURRENCY NAME YOU WANT:";
    // p1.To;
    cin >> p1.To;  //indian
    uppercase2(p1);

}
//_______________________________________________________________________________________

void uppercase1(currency&)
{

    transform(p1.from.begin(), p1.from.end(), p1.from.begin(), ::toupper);
    //  cout << p1.from;
}
//_______________________________________________________________________________________
void uppercase2(currency&)
{
    transform(p1.To.begin(), p1.To.end(), p1.To.begin(), ::toupper);
    //   cout << p1.To;

}
//_______________________________________________________________________________________

//______________FUNCTION STRING COMPARING 
float givencurrency(currency& p1)
{

    //progressed area
label:
    getpoint(p1);

    //____________TAKING  ANSWER  AS STATIC VARIABLE_______
    float answer;

    // ____________________________FOR INDONASIA___________________
    if ((p1.from == "INDONASIA_RUPIAH") && (p1.To == "POUND_STERLING"))
    {

        cout << "YOUR ANSWER IS :";
        answer = givenresult1(p1);
        cout << answer;


    }

    else if ((p1.from == "INDONASIA_RUPIAH") && (p1.To == "AFGHAN_AFGHANI"))
    {
        cout << "YOUR ANSWER IS :";
        //1 indonesian rupiah = 0.0055 afghan afghani
        answer = givenresult2(p1);
        cout << answer;

    }
    else if ((p1.from == "INDONASIA_RUPIAH") && (p1.To == "BANGLADESHI_TAKA"))
    {
        cout << "YOUR ANSWER IS :";
        // 1 indonesian rupiah = 0.0060 bangladeshi taka
        answer = givenresult3(p1);
        cout << answer;


    }
    else if ((p1.from == "INDONASIA_RUPIAH") && (p1.To == "CHINESE_YUAN"))
    {
        cout << "YOUR ANSWER IS :";
        //1 indonesian rupiah = 0.00046 chinese yuan
        answer = givenresult4(p1);
        cout << answer;

    }
    else if ((p1.from == "INDONASIA_RUPIAH") && (p1.To == " IRAQI_DINAR"))
    {
        cout << "YOUR ANSWER IS :";
        //1 indonesian rupiah = 0.10 iraqi dinar
        answer = givenresult5(p1);
        cout << answer;


    }
    else if ((p1.from == "INDONASIA_RUPIAH") && (p1.To == "IRANIAN_RIAL"))
    {
        cout << "YOUR ANSWER IS :";
        //1 indonesian rupiah = 2.99 iranian rial
        answer = givenresult6(p1);
        cout << answer;


    }
    else if ((p1.from == "INDONASIA_RUPIAH") && (p1.To == "JAPANESE_YEN"))
    {
        cout << "YOUR ANSWER IS :";
        //1 indonesian rupiah = 0.0074 japanese yen
        answer = givenresult7(p1);
        cout << answer;

    }
    else if ((p1.from == "INDONASIA_RUPIAH ") && (p1.To == "PAKISTANI RUPEE"))
    {
        cout << "YOUR ANSWER IS :";
        //  1 indonesian rupiah = 0.011 pakistani rupee
        answer = givenresult8(p1);
        cout << answer;

    }
    else if ((p1.from == "INDONASIA_RUPIAH") && (p1.To == "SAUDI_RIYAL"))
    {
        cout << "YOUR ANSWER IS :";
        //      1 indonesian rupiah = 0.00027 saudi riyal
        answer = givenresult9(p1);
        cout << answer;


    }
    else if ((p1.from == "INDONASIA_RUPIAH") && (p1.To == "TURKISH_LIRA"))
    {
        cout << "YOUR ANSWER IS :";
        //  1 indonesian rupiah = 0.00053 turkish lira
        answer = givenresult10(p1);
        cout << answer;


    }
    else if ((p1.from == "INDONASIA_RUPIAH") && (p1.To == "INDIAN_RUPEE"))
    {
        cout << "YOUR ANSWER IS :";
        //                   1 indonesian rupiah = 0.0052 indian rupee
        answer = givenresult11(p1);
        cout << answer;


    }
    //____________________________________________FOR BANGLADESH___________________________________________
    else if ((p1.from == "BANGLADESHI_TAKA") && (p1.To == "AFGHAN_AFGHANI"))
    {
        //	1 bangladeshi taka = 0.91 afghan afghani
        cout << "YOUR ANSWER IS :";

        answer = givenresult12(p1);
        cout << answer;
    }
    else if ((p1.from == "BANGLADESHI_TAKA") && (p1.To == "INDONASIA_RUPIAH "))
    {
        //	1 bangladeshi taka = 166.52 indonesian rupiah
        cout << "YOUR ANSWER IS :";
        answer = givenresult13(p1);
        cout << answer;
    }
    else if ((p1.from == "BANGLADESHI_TAKA") && (p1.To == "CHINESE_YUAN"))
    {
        //1 bangladeshi taka = 0.076 chinese yuan

        cout << "YOUR ANSWER IS :";
        answer = givenresult14(p1);
        cout << answer;
    }
    else if ((p1.from == "BANGLADESHI_TAKA") && (p1.To == "IRAQI_DINAR"))
    {
        //1 bangladeshi taka = 17.24 iraqi dinar
        cout << "YOUR ANSWER IS :";
        answer = givenresult15(p1);
        cout << answer;
    }
    else if ((p1.from == "BANGLADESHI_TAKA") && (p1.To == "IRANIAN_RIAL"))
    {
        //1 bangladeshi taka = 495.42 iranian rial
        cout << "YOUR ANSWER IS :";
        answer = givenresult16(p1);
        cout << answer;
    }
    else if ((p1.from == "BANGLADESHI_TAKA") && (p1.To == "JAPANESE_YEN"))
    {
        // 1 bangladeshi taka = 1.22 japanese yen
        cout << "YOUR ANSWER IS :";
        answer = givenresult17(p1);
        cout << answer;
    }
    else if ((p1.from == "BANGLADESHI_TAKA") && (p1.To == "PAKISTANI_RUPEE"))
    {
        //     1 bangladeshi taka = 1.90 pakistani rupee
        cout << "YOUR ANSWER IS :";
        answer = givenresult18(p1);
        cout << answer;
    }
    else if ((p1.from == "BANGLADESHI_TAKA") && (p1.To == "SAUDI_RIYAL"))
    {
        //     1 bangladeshi taka = 0.044 saudi riyal
        cout << "YOUR ANSWER IS :";
        answer = givenresult19(p1);
        cout << answer;
    }
    else if ((p1.from == "BANGLADESHI_TAKA") && (p1.To == "TURKISH_LIRA"))
    {
        //     1 bangladeshi taka = 0.088 turkish lira
        cout << "YOUR ANSWER IS :";
        answer = givenresult20(p1);
        cout << answer;
    }
    else if ((p1.from == "BANGLADESHI_TAKA") && (p1.To == "INDIAN_RUPEE"))
    {
        //     1 bangladeshi taka = 0.86 indian rupee
        cout << "YOUR ANSWER IS :";
        answer = givenresult21(p1);
        cout << answer;
    }
    else if ((p1.from == "BANGLADESHI_TAKA") && (p1.To == "POUND_STERLING"))
    {
        //1 bangladeshi taka = 0.0087 pound sterling
        cout << "YOUR ANSWER IS :";
        answer = givenresult22(p1);
        cout << answer;
    }


    // ____________________________FOR INDIA___________________
    else if ((p1.from == "INDIAN_RUPEE") && (p1.To == "POUND_STERLING"))
    {

        cout << "YOUR ANSWER IS :";
        //1 indian rupee = 0.010 pound sterling
        answer = givenresult23(p1);
        cout << answer;

    }

    else if ((p1.from == "INDIAN_RUPEE") && (p1.To == "AFGHAN_AFGHANI"))
    {
        // 1 indian rupee = 1.06 afghan afghani
        cout << "YOUR ANSWER IS :";
        answer = givenresult24(p1);
        cout << answer;

    }
    else if ((p1.from == "INDIAN_RUPEE") && (p1.To == "BANGLADESHI_TAKA"))
    {
        cout << "YOUR ANSWER IS :";
        // 1 indian rupee = 1.16 bangladeshi taka
        answer = givenresult25(p1);
        cout << answer;

    }
    else if ((p1.from == "INDIAN_RUPEE") && (p1.To == "CHINESE_YUAN"))
    {
        cout << "YOUR ANSWER IS :";
        // 1 indian rupee = 0.089 chinese yuan
        answer = givenresult26(p1);
        cout << answer;
    }
    else if ((p1.from == "INDIAN_RUPEE") && (p1.To == " IRAQI_DINAR"))
    {
        cout << "YOUR ANSWER IS :";
        // 1 indian rupee = 20.03 iraqi dinar
        answer = givenresult27(p1);
        cout << answer;

    }
    else if ((p1.from == "INDIAN_RUPEE") && (p1.To == "IRANIAN_RIAL"))
    {
        cout << "YOUR ANSWER IS :";
        // 1 indian rupee = 575.50 iranian rial
        answer = givenresult28(p1);
        cout << answer;

    }
    else if ((p1.from == "INDIAN_RUPEE") && (p1.To == "JAPANESE_YEN"))
    {
        cout << "YOUR ANSWER IS :";
        //1 indian rupee = 1.42 japanese yen
        answer = givenresult29(p1);
        cout << answer;
    }
    else if ((p1.from == "INDIAN_RUPEE") && (p1.To == "PAKISTANI_RUPEE"))
    {
        cout << "YOUR ANSWER IS :";
        //  1 indian rupee = 2.20 pakistani rupee
        answer = givenresult30(p1);
        cout << answer;
    }
    else if ((p1.from == "INDIAN_RUPEE") && (p1.To == "SAUDI_RIYAL"))
    {
        cout << "YOUR ANSWER IS :";
        //        1 indian rupee = 0.051 saudi riyal
        answer = givenresult31(p1);
        cout << answer;


    }
    else if ((p1.from == "INDIAN_RUPEE") && (p1.To == "TURKISH_LIRA"))
    {
        cout << "YOUR ANSWER IS :";
        //   1 indian rupee = 0.10 turkish lira
        answer = givenresult32(p1);
        cout << answer;


    }
    else if ((p1.from == "INDIAN_RUPEE") && (p1.To == "INDONASIA_RUPIAH"))
    {
        cout << "YOUR ANSWER IS :";
        //                    1 indian rupee = 193.44 indonesian rupiah....."indian_rupee"
        answer = givenresult33(p1);
        cout << answer;


    }

    // ____________________________FOR PAKISTAN________________________________________
    else if ((p1.from == "PAKISTANI_RUPEE") && (p1.To == "POUND_STERLING"))
    {

        cout << "YOUR ANSWER IS :";
        // 1 PAKISTANI RUPEE = 0.0046 POUND STERLING
        answer = givenresult34(p1);
        cout << answer;

    }

    else if ((p1.from == "PAKISTANI_RUPEE") && (p1.To == "AFGHAN_AFGHANI"))
    {
        // 1 PAKISTANI RUPEE = 0.48 AFGHAN AFGHANI
        cout << "YOUR ANSWER IS :";
        answer = givenresult35(p1);
        cout << answer;

    }
    else if ((p1.from == "PAKISTANI_RUPEE") && (p1.To == "BANGLADESHI_TAKA"))
    {
        cout << "YOUR ANSWER IS :";
        //    1 PAKISTANI RUPEE = 0.53 BANGLADESHI TAKA
        answer = givenresult36(p1);
        cout << answer;

    }
    else if ((p1.from == "PAKISTANI_RUPEE") && (p1.To == "CHINESE_YUAN"))
    {
        cout << "YOUR ANSWER IS :";
        // PAKISTANI RUPEE = 0.040 CHINESE YUAN
        answer = givenresult37(p1);
        cout << answer;
    }
    else if ((p1.from == "PAKISTANI_RUPEE") && (p1.To == " IRAQI_DINAR"))
    {
        cout << "YOUR ANSWER IS :";
        // 1 PAKISTANI RUPEE = 9.09 IRAQI DINAR
        answer = givenresult38(p1);
        cout << answer;

    }
    else if ((p1.from == "PAKISTANI_RUPEE") && (p1.To == "IRANIAN_RIAL"))
    {
        cout << "YOUR ANSWER IS :";
        // 1 PAKISTANI RUPEE = 261.32 IRANIAN RIAL
        answer = givenresult39(p1);
        cout << answer;

    }
    else if ((p1.from == "PAKISTANI_RUPEE") && (p1.To == "JAPANESE_YEN"))
    {
        cout << "YOUR ANSWER IS :";
        //1 PAKISTANI RUPEE = 0.64 JAPANESE YEN
        answer = givenresult40(p1);
        cout << answer;
    }
    else if ((p1.from == "PAKISTANI_RUPEE") && (p1.To == "INDIAN_RUPEE"))
    {
        cout << "YOUR ANSWER IS :";
        //  1 pakistani rupee = 0.45 INDIAN rupee
        answer = givenresult41(p1);
        cout << answer;
    }
    else if ((p1.from == "PAKISTANI_RUPEE") && (p1.To == "SAUDI_RIYAL"))
    {
        cout << "YOUR ANSWER IS :";
        //   1 PAKISTANI RUPEE = 0.023 SAUDI RIYAL
        answer = givenresult42(p1);
        cout << answer;

    }
    else if ((p1.from == "PAKISTANI_RUPEE") && (p1.To == "TURKISH_LIRA"))
    {
        cout << "YOUR ANSWER IS :";
        //     1 PAKISTANI RUPEE = 0.046 TURKISH LIRA
        answer = givenresult43(p1);
        cout << answer;

    }
    else if ((p1.from == "PAKISTANI_RUPEE") && (p1.To == "INDONASIA_RUPIAH"))
    {
        cout << "YOUR ANSWER IS :";
        //  1 PAKISTANI RUPEE = 87.83 INDONESIAN RUPIAH.....”PAKISTANI_RUPEE”
        answer = givenresult44(p1);
        cout << answer;
    }


    // ____________________________FOR TURKEY ___________________

    else if ((p1.from == "TURKISH_LIRA") && (p1.To == "JAPANESE_YEN"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult01(p1);
        cout << answer;
    }


    else if ((p1.from == "TURKISH_LIRA") && (p1.To == "BANGLADESHI_TAKA"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult02(p1);
        cout << answer;
    }
    else if ((p1.from == "TURKISH_LIRA") && (p1.To == "IRANIAN_RIAL"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult03(p1);
        cout << answer;
    }
    else if ((p1.from == "TURKISH_LIRA") && (p1.To == "IRAQI_DINAR"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult04(p1);
        cout << answer;
    }
    else if ((p1.from == "TURKISH_LIRA") && (p1.To == "SAUDI_RIYAL"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult05(p1);
        cout << answer;
    }
    else if ((p1.from == "TURKISH_LIRA") && (p1.To == "AFGHAN_AFGHANI"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult06(p1);
        cout << answer;

    }
    else if ((p1.from == "TURKISh_LIRA") && (p1.To == "POUND_STERLING"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult07(p1);
        cout << answer;

    }
    else if ((p1.from == "TURKISH_LIRA") && (p1.To == "PAKISTANI_RUPEE"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult08(p1);
        cout << answer;

    }
    else if ((p1.from == "TURKISH_LIRA") && (p1.To == "INDIAN_RUPEE"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult09(p1);
        cout << answer;

    }
    else if ((p1.from == "TURKISH_LIRA") && (p1.To == "CHINESE_YUAN"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult010(p1);
        cout << answer;

    }
    else if ((p1.from == "TURKISH_LIRA") && (p1.To == "INDONASIA_RUPIAH"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult011(p1);
        cout << answer;

    }

    // ____________________________FOR SAUDIA ARAB _______________________

    else if ((p1.from == "SAUDI_RIYAL") && (p1.To == "JAPANESE_YEN"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult012(p1);
        cout << answer;

    }
    else if ((p1.from == "SAUDI_RIYAL") && (p1.To == "BANGLADESHI_TAKA"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult013(p1);
        cout << answer;

    }
    else if ((p1.from == "SAUDI_RIYAL") && (p1.To == "IRANIAN_RIAL"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult014(p1);
        cout << answer;

    }
    else if ((p1.from == "SAUDI_RIYAL") && (p1.To == "IRAQI_DINAR"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult015(p1);
        cout << answer;

    }
    else if ((p1.from == "SAUDI_RIYAL") && (p1.To == "TURKISH_LIRA"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult016(p1);
        cout << answer;

    }
    else if ((p1.from == "SAUDI_RIYAL") && (p1.To == "AFGHAN_AFGHANI"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult017(p1);
        cout << answer;

    }
    else if ((p1.from == "SAUDI_RIYAL") && (p1.To == "POUND_STERLING"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult018(p1);
        cout << answer;

    }
    else if ((p1.from == "SAUDI_RIYAL") && (p1.To == "PAKISTANI_RUPEE"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult019(p1);
        cout << answer;

    }
    else if ((p1.from == "SAUDI_RIYAL") && (p1.To == "INDIAN_RUPEE"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult020(p1);
        cout << answer;

    }
    else if ((p1.from == "SAUDI_RIYAL") && (p1.To == "CHINESE_YUAN"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult021(p1);
        cout << answer;
    }
    else if ((p1.from == "SAUDI_RIYAL") && (p1.To == "INDONASIA_RUPIAH"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult022(p1);
        cout << answer;
    }

    // ____________________________FOR AFGHANISTAN ____________________________

    else if ((p1.from == "AFGHAN_AFGHANI") && (p1.To == "JAPANESE_YEN"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult023(p1);
        cout << answer;
    }
    else if ((p1.from == "AFGHAN_AFGHANI") && (p1.To == "BANGLADESHI_TAKA"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult024(p1);
        cout << answer;
    }
    else if ((p1.from == "AFGHAN_AFGHANI") && (p1.To == "IRANIAN_RIAL"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult025(p1);
        cout << answer;
    }
    else if ((p1.from == "AFGHAN_AFGHANI") && (p1.To == "IRAQI_DINAR"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult026(p1);
        cout << answer;
    }
    else if ((p1.from == "AFGHAN_AFGHANI") && (p1.To == "SAUDI_RIYAL"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult027(p1);
        cout << answer;
    }
    else if ((p1.from == "AFGHAN_AFGHANI") && (p1.To == "TURKISH_LIRA"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult028(p1);
        cout << answer;
    }
    else if ((p1.from == "AFGHAN_AFGHANI") && (p1.To == "POUND_STERLING"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult029(p1);
        cout << answer;
    }
    else if ((p1.from == "AFGHAN_AFGHANI") && (p1.To == "PAKISTANI_RUPEE"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult030(p1);
        cout << answer;
    }
    else if ((p1.from == "AFGHAN_AFGHANI") && (p1.To == "INDIAN_RUPEE"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult031(p1);
        cout << answer;
    }
    else if ((p1.from == "AFGHAN_AFGHANI") && (p1.To == "CHINESE_YUAN"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult032(p1);
        cout << answer;
    }
    else if ((p1.from == "AFGHAN_AFGHANI") && (p1.To == "INDONASIA_RUPIAH"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult033(p1);
        cout << answer;
    }

    // ____________________________FOR ENGLAND ____________________________

    else if ((p1.from == "POUND_STERLING") && (p1.To == "JAPANESE_YEN"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult034(p1);
        cout << answer;
    }
    else if ((p1.from == "POUND_STERLING") && (p1.To == "BANGLADESHI_TAKA"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult035(p1);
        cout << answer;
    }
    else if ((p1.from == "POUND_STERLING") && (p1.To == "IRANIAN_RIAL"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult036(p1);
        cout << answer;
    }
    else if ((p1.from == "POUND_STERLING") && (p1.To == "IRAQI_DINAR"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult037(p1);
        cout << answer;
    }
    else if ((p1.from == "POUND_STERLING") && (p1.To == "SAUDI_RIYAL"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult038(p1);
        cout << answer;
    }
    else if ((p1.from == "POUND_STERLING") && (p1.To == "AFGHAN_AFGHANI"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult039(p1);
        cout << answer;
    }
    else if ((p1.from == "POUND_STERLING") && (p1.To == "TURKISH_LIRA"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult040(p1);
        cout << answer;
    }
    else if ((p1.from == "POUND_STERLING") && (p1.To == "PAKISTANI_RUPEE"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult041(p1);
        cout << answer;
    }
    else if ((p1.from == "POUND_STERLING") && (p1.To == "INDIAN_RUPEE"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult042(p1);
        cout << answer;
    }
    else if ((p1.from == "POUND_STERLING") && (p1.To == "CHINESE_YUAN"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult043(p1);
        cout << answer;
    }
    else if ((p1.from == "POUND_STERLING") && (p1.To == "INDONASIA_RUPIAH"))
    {
        cout << "YOUR ANSWER IS : ";
        answer = givenresult044(p1);
        cout << answer;
    }

    // ____________________________FOR JAPAN ____________________________


    else if ((p1.from == "JAPANESE_YEN") && (p1.To == "BANGLADESHI_TAKA"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultA(p1);
        cout << answer;
        // 1 japnese yen = 0.82bangdeshi takka
    }

    else if ((p1.from == "JAPANESE_YEN") && (p1.To == "IRANIAN_RIAL"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultB(p1);
        cout << answer;
        // 1 Japanese Yen equals
        //405.30 Iranian Rial
    }

    else if ((p1.from == "JAPANESE_YEN") && (p1.To == "IRAQI_DINAR"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultC(p1);
        cout << answer;
        // 1 Japanese Yen equals
       // 14.11 Iraqi Dinar
    }
    else if ((p1.from == "JAPANESE_YEN") && (p1.To == "TURKISH_LIRA"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultD(p1);
        cout << answer;
        //1 Japanese Yen equals
       // 0.072 Turkish lira
    }
    else if ((p1.from == "JAPANESE_YEN") && (p1.To == "SAUDI_RIYAL"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultE(p1);
        cout << answer;
        //1 Japanese Yen equals
       // 0.036 Saudi Riyal
    }
    else if ((p1.from == "JAPANESE_YEN") && (p1.To == "AFGHAN_AFGHANI"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultF(p1);
        cout << answer;
        //1 Japanese Yen equals
        //0.75 Afghan
    }
    else if ((p1.from == "JAPANESE_YEN") && (p1.To == "POUND_STERLING"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultG(p1);
        cout << answer;
        //1 Japanese Yen equals
        //0.0071 Pound sterling
    }
    else if ((p1.from == "JAPANESE_YEN") && (p1.To == "PAKISTANI_RUPEE"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultH(p1);
        cout << answer;
        //1 Japanese Yen equals
           // 1.55 Pakistani Rupees
    }
    else if ((p1.from == "JAPANESE_YEN") && (p1.To == "INDIAN_RUPEE"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultI(p1);
        cout << answer;
        //1 Japanese Yen equals
       // 0.70 Indian Rupee
    }
    else if ((p1.from == "JAPANESE_YEN") && (p1.To == "CHINESE_YUAN"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultJ(p1);
        cout << answer;
        //1 Japanese Yen equals
        //0.062 Chinese Yuan
    }
    else if ((p1.from == "JAPANESE_YEN") && (p1.To == "INDONASIA_RUPIAH"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultK(p1);
        cout << answer;
        //1 Japanese Yen equals
        //136.23 Indonesian Rupiah
    }

    // ____________________________FOR CHINA ____________________________

    else if ((p1.from == "CHINESE_YUAN") && (p1.To == "JAPANESE_YEN"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultL(p1);
        cout << answer;
        //1 Chinese Yuan equals
        //24.86 Pakistani Rupee
    }
    else if ((p1.from == "CHINESE_YUAN") && (p1.To == "BANGLADESHI_TAKA"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultM(p1);
        cout << answer;
        //1 Chinese Yuan equals
       // 11.29 Indian Rupee
    }

    else if ((p1.from == "CHINESE_YUAN") && (p1.To == "IRANIAN_RIAL"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultN(p1);
        cout << answer;
        //1 Chinese Yuan equals
       // 6, 496.88 Iranian Rial
    }
    else if ((p1.from == "CHINESE_YUAN") && (p1.To == "IRAQI_DINAR"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultO(p1);
        cout << answer;
        //1 Chinese Yuan equals
          //  226.10 Iraqi Dinar
    }
    else if ((p1.from == "CHINESE_YUAN") && (p1.To == "TURKISH_LIRA"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultP(p1);
        cout << answer;
        // 1 Chinese Yuan equals
            // 1.15 Turkish lira

    }
    else if ((p1.from == "CHINESE_YUAN") && (p1.To == "SAUDI_RIYAL"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultQ(p1);
        cout << answer;
        //1 Chinese Yuan equals
       // 0.58 Saudi Riyal
    }
    else if ((p1.from == "CHINESE_YUAN") && (p1.To == "AFGHAN_AFGHANI"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultR(p1);
        cout << answer;
        //1 Chinese Yuan equals
       // 11.94 Afghan Afghani
    }
    else if ((p1.from == "CHINESE_YUAN") && (p1.To == "POUND_STERLING"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultS(p1);
        cout << answer;
        //1 Chinese Yuan equals
       // 0.11 Pound sterling
    }
    else if ((p1.from == "CHINESE_YUAN") && (p1.To == "PAKISTANI_RUPEE"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultT(p1);
        cout << answer;
        //1 Chinese Yuan equals
        //24.86 Pakistani Rupee
    }
    else if ((p1.from == "CHINESE_YUAN") && (p1.To == "INDIAN_RUPEE"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultU(p1);
        cout << answer;
        //1 Chinese Yuan equals
       // 11.29 Indian Rupee
    }


    else if ((p1.from == "CHINESE_YUAN") && (p1.To == "INDONASIA_RUPIAH"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultV(p1);
        cout << answer;
        //1 Chinese Yuan equals
        //2, 171.10 Indonesian Rupiah
    }

    // ____________________________FOR IRAQ ____________________________

    else if ((p1.from == "IRAQI_DINAR") && (p1.To == "JAPANESE_YEN"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultW(p1);
        cout << answer;
        // 1 Iraqi Dinar equals
           //  0.071 Japanese Yen
    }

    else if ((p1.from == "IRAQI_DINAR") && (p1.To == "BANGLADESHI_TAKA"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultX(p1);
        cout << answer;
        //1 Iraqi Dinar equals
        //0.058 Bangladeshi Taka
    }
    else if ((p1.from == "IRAQI_DINAR") && (p1.To == "IRANIAN_RIAL"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultY(p1);
        cout << answer;
        //1 Iraqi Dinar equals
        //0.058 Bangladeshi Taka
    }
    else if ((p1.from == "IRAQI_DINAR") && (p1.To == "TURKISH_LIRA"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresultZ(p1);
        cout << answer;
        //1 Iraqi Dinar equals
        //0.0051 Turkish lira
    }
    else if ((p1.from == "IRAQI_DINAR") && (p1.To == "SAUDI_RIYAL"))
    {
        cout << "OUR ANSWER IS : ";
        answer = givenresulta(p1);
        cout << answer;
        //1 Iraqi Dinar equals
        //0.0026 Saudi Riyal
    }
    //____________________________________________________________________________________________________________________
       //ADDING MORE CURRENCIES GIVE GIVEN BELOW ERROR 

       /*  Severity	Code	Description	Project	File	Line	Suppression State
           Error	C1061	compiler limit : blocks nested too deeply	ConsoleApplication4
           C : \Users\DELL\source\repos\ConsoleApplication4\ConsoleApplication4\ConsoleApplication4.cpp	1264

     */
     //____________________________________________________________________________________________________________________
             /**
               else if ((p1.from == "IRAQI_DINAR") && (p1.To == "AFGHAN_AFGHANI"))
             {
             cout << "OUR ANSWER IS : ";
             answer = givenresultb(p1);
             cout << answer;
             //1 Iraqi Dinar equals
            // 0.053 Afghan Afghani
             }
             else if ((p1.from == "IRAQI_DINAR") && (p1.To == "POUND_STERLING"))
             {
             cout << "OUR ANSWER IS : ";
             answer = givenresultc(p1);
             cout << answer;
             //1 Iraqi Dinar equals
             //0.00050 Pound sterling
             }
             else if ((p1.from == "IRAQI_DINAR") && (p1.To == "PAKISTANI_RUPEES"))
             {
             cout << "OUR ANSWER IS : ";
             answer = givenresultd(p1);
             cout << answer;
             //1 Iraqi Dinar equals
             //0.11 Pakistani Rupee
             }
             else if ((p1.from == "IRAQI_DINAR") && (p1.To == "INDIAN_RUPEE"))
             {
             cout << "OUR ANSWER IS : ";
             answer = givenresulte(p1);
             cout << answer;
             //1 Iraqi Dinar equals
             //0.050 Indian Rupee
             }
             else if ((p1.from == "IRAQI_DINAR") && (p1.To == "CHINESE_YUAN") )
             {
             cout << "OUR ANSWER IS : ";
             answer = givenresultf(p1);
             cout << answer;
             //1 Iraqi Dinar equals
             //0.0044 Chinese Yuan
             }
             else if ((p1.from == "IRAQI_DINAR") && (p1.To == "INDONASIA_RUPIAH"))
             {
             cout << "OUR ANSWER IS : ";
             answer = givenresultg(p1);
             cout << answer;
             //1 Iraqi Dinar equals
             //9.66 Indonesian Rupiah
             }

              // ____________________________FOR IRAN ____________________________

               else if ((p1.from == "IRANIAN_RIAL") && (p1.To == "JAPANESE_YEN") )
             cout << "OUR ANSWER IS : ";
             answer = givenresulth(p1);
             cout << answer;
             //1 Iranian Rial equals
             // 0.0025 Japanese Yen
             }
             else if ((p1.from == "IRANIAN_RIAL") && (p1.To == "BANGLADESHI_TAKA"))
             {
             cout << "OUR ANSWER IS : ";
             answer = givenresulti(p1);
             cout << answer;
             //1 Iranian Rial equals
             //0.0020 Bangladeshi Taka
             }
             else if ((p1.from == "IRANIAN_RIAL") && (p1.To == "IRAQI_DINAR") )
             {
             cout << "OUR ANSWER IS : ";
             answer = givenresultj(p1);
             cout << answer;
             //1 Iranian Rial equals
             //0.035 Iraqi Dinar
             }
             else if ((p1.from == "IRANIAN_RIAL") && (p1.To == "TURKISH_LIRA") )
             {
             cout << "OUR ANSWER IS : ";
             answer = givenresultk(p1);
             cout << answer;
             //1 Iranian Rial equals
            // 0.00018 Turkish lira
             }

             else if ((p1.from == "IRANIAN_RIAL") && (p1.To == "SAUDI_RIYAL"))
             {
             cout << "OUR ANSWER IS : ";
             answer = givenresultl(p1);
             cout << answer;
             //1 Iranian Rial equals
             //0.000089 Saudi Riyal
             }
             else if ((p1.from == "IRANIAN_RIAL") && (p1.To == "AFGHAN_AFGHANI"))
             {
             cout << "OUR ANSWER IS : ";
             answer = givenresultm(p1);
             cout << answer;
             //1 Iranian Rial equals
             //0.0018 Afghan Afghani
             }
             else if ((p1.from == "IRANIAN_RIAL") && (p1.To == "POUND_STERLING") )
             {
             cout << "OUR ANSWER IS : ";
             answer = givenresultn(p1);
             cout << answer;
             //1 Iranian Rial equals
             //0.000017 Pound sterling
             }
             else if ((p1.from == "IRANIAN_RIAL") && (p1.To == "PAKISTANI_RUPEE"))
             {
             cout << "OUR ANSWER IS : ";
             answer = givenresulto(p1);
             cout << answer;
             //1 Iranian Rial equals
            // 0.0038 Pakistani Rupee
             }
             else if ((p1.from == "IRANIAN_RIAL") && (p1.To == "INDIAN_RUPEE") )
             {
             cout << "OUR ANSWER IS : ";
             answer = givenresultp(p1);
             cout << answer;
             //1 Iranian Rial equals
             //0.0017 Indian Rupee
             }
             else if ((p1.from == "IRANIAN_RIAL") && (p1.To == "CHINESE_YUAN") )
             {
             cout << "OUR ANSWER IS : ";
             answer = givenresultq(p1);
             cout << answer;
             //1 Iranian Rial equals
            // 0.00015 Chinese Yuan
             }
             else if ((p1.from == "IRANIAN_RIAL") && (p1.To == "INDONASIA_RUPIAH"))
             {
             cout << "OUR ANSWER IS : ";
             answer = givenresultr(p1);
             cout << answer;
             //1 Iranian Rial equals
             //0.34 Indonesian Rupiah
             }
             //____________________________________________________________________________________________________________________*/

    else
    {
        cout << "DEAR VALUED USER!!\n\t\tTHE CURRENCY YOU ARE ENTERING IS  EITHER NOT  AVAILABLE FOR CONVERSION   OR IS WRONG ";
        cout << endl << endl;
        cout << "IF YOU WANT TO USE CURRENCY CONVERTER AGAIN";
        cout << endl;
        cout << "PRESS key 'A' 'a':";
        char  again;
        cin >> again;
        if (again = ('A' || 'a'))
        {
            //USING LABEL TO TAKE POINTS AGAIN  FROM USER
            goto label;
        }
        else
        {
            //DISPLAYING ENDING LINE
            system("CLS");
            cout << "THANKS FOR USINF CURRENCY CONVERTER";
            exit((0));
        }

    }

    return answer;
}
//____________________________________________________________________________________________________________________

//________________________________ BASIC  CONVERSIONS METHOD _________________________________________________________

//___________________________INDONASIA_RUPIAH_________________________________________________________________________
float givenresult1(currency& p1)
{
    float x = p1.value * 0.000052;
    return x;
}

float givenresult2(currency& p1)
{
    float x = p1.value * 0.0055;
    return x;
}
float givenresult3(currency& p1)
{
    float x = p1.value * 0.0060;

    return x;
}
float givenresult4(currency& p1)
{
    float x = p1.value * 0.00046;
    return x;
}
float givenresult5(currency& p1)
{
    float x = p1.value * 0.10;
    return x;
}
float givenresult6(currency& p1)
{
    float x = p1.value * 2.99;
    return x;
}
float givenresult7(currency& p1)
{
    float x = p1.value * 0.0074;
    return x;
}
float givenresult8(currency& p1)
{
    float x = p1.value * 0.011;
    return x;
}
float givenresult9(currency& p1)
{
    float x = p1.value * 0.00027;
    return x;
}
float givenresult10(currency& p1)
{
    float x = p1.value * 0.00053;
    return x;
}

float givenresult11(currency& p1)
{
    float x = p1.value * 0.0052;
    return x;
}

//___________________________BANGLADESHI_TAKA__________________________________________________

float givenresult12(currency& p1)
{
    float x = p1.value * 0.91;
    return x;
}
float givenresult13(currency& p1)
{
    float x = p1.value * 166.52;

    return x;
}
float givenresult14(currency& p1)
{
    float x = p1.value * 0.076;
    return x;
}
float givenresult15(currency& p1)
{
    float x = p1.value * 17.24;
    return x;
}
float givenresult16(currency& p1)
{
    float x = p1.value * 495.42;
    return x;
}
float givenresult17(currency& p1)
{
    float x = p1.value * 1.22;
    return x;
}
float givenresult18(currency& p1)
{
    float x = p1.value * 1.90;
    return x;
}
float givenresult19(currency& p1)
{
    float x = p1.value * 0.044;
    return x;
}
float givenresult20(currency& p1)
{
    float x = p1.value * 0.088;
    return x;
}

float givenresult21(currency& p1)
{
    float x = p1.value * 0.86;
    return x;
}
float givenresult22(currency& p1)
{
    float x = p1.value * 0.0087;
    return x;
}

//___________________________ INDIAN_RUPEE__________________________________________________
float givenresult23(currency& p1)
{
    float x = p1.value * 0.010;

    return x;
}
float givenresult24(currency& p1)
{
    float x = p1.value * 1.06;
    return x;
}
float givenresult25(currency& p1)
{
    float x = p1.value * 1.16;
    return x;
}
float givenresult26(currency& p1)
{
    float x = p1.value * 0.089;
    return x;
}
float givenresult27(currency& p1)
{
    float x = p1.value * 20.03;
    return x;
}
float givenresult28(currency& p1)
{
    float x = p1.value * 575.50;
    return x;
}
float givenresult29(currency& p1)
{
    float x = p1.value * 1.42;
    return x;
}
float givenresult30(currency& p1)
{
    float x = p1.value * 2.20;
    return x;
}

float givenresult31(currency& p1)
{
    float x = p1.value * 0.051;
    return x;
}
float givenresult32(currency& p1)
{
    float x = p1.value * 0.10;
    return x;
}
float givenresult33(currency& p1)
{
    float x = p1.value * 193.44;
    return x;
}
//___________________________-PAKISTANI_RUPEE__________________________________________________

float givenresult34(currency& p1)
{
    float x = p1.value * 0.0046;
    return x;
}
float givenresult35(currency& p1)
{
    float x = p1.value * 0.48;
    return x;
}
float givenresult36(currency& p1)
{
    float x = p1.value * 0.53;
    return x;
}
float givenresult37(currency& p1)
{
    float x = p1.value * 0.040;
    return x;
}
float givenresult38(currency& p1)
{
    float x = p1.value * 9.09;
    return x;
}
float givenresult39(currency& p1)
{
    float x = p1.value * 261.32;
    return x;
}
float givenresult40(currency& p1)
{
    float x = p1.value * 0.64;
    return x;
}

float givenresult41(currency& p1)
{
    float x = p1.value * 0.45;
    return x;
}
float givenresult42(currency& p1)
{
    float x = p1.value * 0.023;
    return x;
}
float givenresult43(currency& p1)
{
    float x = p1.value * 0.046;
    return x;
}
float givenresult44(currency& p1)
{
    float x = p1.value * 87.83;
    return x;
}

//__________________________________________CONVERSION METHOD FOR POUND_STERLING.AFGHAN_AFGHANI,SAUDI_RIYAL,TURKISH_LIRA _______________________
float givenresult01(currency& p1)
{
    float x = p1.value * 13.89;
    return x;
}
float givenresult02(currency& p1)
{
    float x = p1.value * 11.37;
    return x;
}
float givenresult03(currency& p1)
{
    float x = p1.value * 5632.55;
    return x;
}
float givenresult04(currency& p1)
{
    float x = p1.value * 196.02;
    return x;
}
float givenresult05(currency& p1)
{
    float x = p1.value * 0.50;
    return x;
}
float givenresult06(currency& p1)
{
    float x = p1.value * 10.35;
    return x;
}
float givenresult07(currency& p1)
{
    float x = p1.value * 0.098;
    return x;
}
float givenresult08(currency& p1)
{
    float x = p1.value * 21.56;
    return x;
}
float givenresult09(currency& p1)
{
    float x = p1.value * 9.79;
    return x;
}
float givenresult010(currency& p1)
{
    float x = p1.value * 0.87;
    return x;
}
float givenresult011(currency& p1)
{
    float x = p1.value * 1893.21;
    return x;
}
float givenresult012(currency& p1)
{
    float x = p1.value * 27.68;
    return x;
}
float givenresult013(currency& p1)
{
    float x = p1.value * 22.66;
    return x;
}
float givenresult014(currency& p1)
{
    float x = p1.value * 11224.96;
    return x;
}
float givenresult015(currency& p1)
{
    float x = p1.value * 390.65;
    return x;
}
float givenresult016(currency& p1)
{
    float x = p1.value * 1.99;
    return x;
}
float givenresult017(currency& p1)
{
    float x = p1.value * 20.63;
    return x;
}
float givenresult018(currency& p1)
{
    float x = p1.value * 0.20;
    return x;
}
float givenresult019(currency& p1)
{
    float x = p1.value * 42.96;
    return x;
}
float givenresult020(currency& p1)
{
    float x = p1.value * 19.50;
    return x;
}
float givenresult021(currency& p1)
{
    float x = p1.value * 1.73;
    return x;
}
float givenresult022(currency& p1)
{
    float x = p1.value * 3772.93;
    return x;
}
float givenresult023(currency& p1)
{
    float x = p1.value * 1.34;
    return x;
}
float givenresult024(currency& p1)
{
    float x = p1.value * 1.10;
    return x;
}
float givenresult025(currency& p1)
{
    float x = p1.value * 544.02;
    return x;
}
float givenresult026(currency& p1)
{
    float x = p1.value * 18.93;
    return x;
}
float givenresult027(currency& p1)
{
    float x = p1.value * 0.048;
    return x;
}
float givenresult028(currency& p1)
{
    float x = p1.value * 0.097;
    return x;
}
float givenresult029(currency& p1)
{
    float x = p1.value * 0.0095;
    return x;
}
float givenresult030(currency& p1)
{
    float x = p1.value * 2.08;
    return x;
}
float givenresult031(currency& p1)
{
    float x = p1.value * 0.95;
    return x;
}
float givenresult032(currency& p1)
{
    float x = p1.value * 0.084;
    return x;
}
float givenresult033(currency& p1)
{
    float x = p1.value * 182.86;
    return x;
}
float givenresult034(currency& p1)
{
    float x = p1.value * 141.10;
    return x;
}
float givenresult035(currency& p1)
{
    float x = p1.value * 115.52;
    return x;
}
float givenresult036(currency& p1)
{
    float x = p1.value * 57214.34;
    return x;
}
float givenresult037(currency& p1)
{
    float x = p1.value * 1991.17;
    return x;
}
float givenresult038(currency& p1)
{
    float x = p1.value * 5.10;
    return x;
}
float givenresult039(currency& p1)
{
    float x = p1.value * 105.17;
    return x;
}
float givenresult040(currency& p1)
{
    float x = p1.value * 10.16;
    return x;
}
float givenresult041(currency& p1)
{
    float x = p1.value * 218.96;
    return x;
}
float givenresult042(currency& p1)
{
    float x = p1.value * 99.42;
    return x;
}
float givenresult043(currency& p1)
{
    float x = p1.value * 8.81;
    return x;
}
float givenresult044(currency& p1)
{
    float x = p1.value * 19230.88;
    return x;
}
//__________________________________________________________________________________________________________________________________________
//__________________________________________CONVERSION METHOD FOR JAPENSE_YEN,CHINESE_YUAN,IRAQI_DINAR,_IRANIAN_RIAL _______________________

float givenresultA(currency& p1)
{
    float x = p1.value * 0.82;
    return x;
}
float givenresultB(currency& p1)
{
    float x = p1.value * 405.83;
    return x;
}
float givenresultC(currency& p1)
{
    float x = p1.value * 14.12;
    return x;
}
float givenresultD(currency& p1)
{
    float x = p1.value * 0.072;
    return x;
}
float givenresultE(currency& p1)
{
    float x = p1.value * 0.036;
    return x;
}
float givenresultF(currency& p1)
{
    float x = p1.value * 0.75;
    return x;
}
float givenresultG(currency& p1)
{
    float x = p1.value * 0.0071;
    return x;
}
float givenresultH(currency& p1)
{
    float x = p1.value * 1.55;
    return x;
}
float givenresultI(currency& p1)
{
    float x = p1.value * 0.71;
    return x;
}
float givenresultJ(currency& p1)
{
    float x = p1.value * 0.062;
    return x;
}
float givenresultK(currency& p1)
{
    float x = p1.value * 136.63;
    return x;
}
float givenresultL(currency& p1)
{
    float x = p1.value * 16.01;
    return x;
}
float givenresultM(currency& p1)
{
    float x = p1.value * 13.12;
    return x;
}
float givenresultN(currency& p1)
{
    float x = p1.value * 6496.80;
    return x;
}
float givenresultO(currency& p1)
{
    float x = p1.value * 226.10;
    return x;
}
float givenresultP(currency& p1)
{
    float x = p1.value * 1.15;
    return x;
}
float givenresultQ(currency& p1)
{
    float x = p1.value * 0.58;
    return x;
}
float givenresultR(currency& p1)
{
    float x = p1.value * 11.94;
    return x;
}
float givenresultS(currency& p1)
{
    float x = p1.value * 0.11;
    return x;
}
float givenresultT(currency& p1)
{
    float x = p1.value * 24.86;
    return x;
}
float givenresultU(currency& p1)
{
    float x = p1.value * 11.30;
    return x;
}
float givenresultV(currency& p1)
{
    float x = p1.value * 2171.10;
    return x;
}
float givenresultW(currency& p1)
{
    float x = p1.value * 0.071;
    return x;
}
float givenresultX(currency& p1)
{
    float x = p1.value * 0.058;
    return x;
}
float givenresultY(currency& p1)
{
    float x = p1.value * 28.74;
    return x;
}
float givenresultZ(currency& p1)
{
    float x = p1.value * 0.0051;
    return x;
}
float givenresulta(currency& p1)
{
    float x = p1.value * 0.0026;
    return x;
}
float givenresultb(currency& p1)
{
    float x = p1.value * 0.053;
    return x;
}
float givenresultc(currency& p1)
{
    float x = p1.value * 0.00050;
    return x;
}
float givenresultd(currency& p1)
{
    float x = p1.value * 0.11;
    return x;
}
float givenresulte(currency& p1)
{
    float x = p1.value * 0.050;
    return x;
}
float givenresultf(currency& p1)
{
    float x = p1.value * 0.0044;
    return x;
}
float givenresultg(currency& p1)
{
    float x = p1.value * 9.61;
    return x;
}
float givenresulth(currency& p1)
{
    float x = p1.value * 0.0025;
    return x;
}
float givenresulti(currency& p1)
{
    float x = p1.value * 0.0020;
    return x;
}
float givenresultj(currency& p1)
{
    float x = p1.value * 0.035;
    return x;
}
float givenresultk(currency& p1)
{
    float x = p1.value * 0.00018;
    return x;
}
float givenresultl(currency& p1)
{
    float x = p1.value * 0.000089;
    return x;
}
float givenresultm(currency& p1)
{
    float x = p1.value * 0.0018;
    return x;
}
float givenresultn(currency& p1)
{
    float x = p1.value * 0.000017;
    return x;
}
float givenresulto(currency& p1)
{
    float x = p1.value * 0.0038;
    return x;
}
float givenresultp(currency& p1)
{
    float x = p1.value * 0.0017;
    return x;
}
float givenresultq(currency& p1)
{
    float x = p1.value * 0.00015;
    return x;
}
float givenresultr(currency& p1)
{
    float x = p1.value * 0.33;
    return x;
}

//__________________________________________________________________________________________________________________________________________
//CODE TO STORE CONTENT IN FILE
void  storecontentinfile(currency& p1, float x)

{
    // A NEW FILE  NAME AS 'result1.txt' WILL BE FROMED ON THE DESKTOP
    ofstream file("C:\\Users\\DELL\\Desktop\\result1.txt", ios::app);

    cout << "\nRECORD SAVEIN FILE";
    cout << endl;
    //  x is passed in the  function which represent the answer
     //...........DATA TO BE STORED IN  FILE
    file << "Entered currency  is" << p1.from << "\n demanded currency is:" << p1.To << "\n Entered amount is:" << p1.value << "\nconverted amount is:" << x;
    file.close();
}

//__________________________________________________THE END!________________________________________________________________________________________