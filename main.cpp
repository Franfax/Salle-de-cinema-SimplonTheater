#include <iostream>
#include <string>


using namespace std;

void afficherRangeeX (string rangeeNumeroX)
{
    for ( int iSiege = 0 ; iSiege <9; iSiege ++)
    {
        cout << " [ " <<rangeeNumeroX[iSiege]<< " ] ";
    }
    cout << endl;

}


void afficherSalle (string rangeeNumero1,string rangeeNumero2 ,string rangeeNumero3 ,string rangeeNumero4 ,string rangeeNumero5 ,string rangeeNumero6 ,string rangeeNumero7 ,string rangeeNumero8 )

{

     cout << endl;
     cout << "0 | "; afficherRangeeX ( rangeeNumero1);
     cout << "1 | "; afficherRangeeX ( rangeeNumero2);
     cout << "2 | "; afficherRangeeX ( rangeeNumero3);
     cout << "3 | "; afficherRangeeX ( rangeeNumero4);
     cout << "4 | "; afficherRangeeX ( rangeeNumero5);
     cout << "5 | "; afficherRangeeX ( rangeeNumero6);
     cout << "6 | "; afficherRangeeX ( rangeeNumero7);
     cout << "7 | "; afficherRangeeX ( rangeeNumero8);
     cout << "       0      1      2      3      4      5      6      7      8";
     cout << endl;
}





int main()
{

    string rangee0 ="_________";
    string rangee1 ="_________";
    string rangee2 ="_________";
    string rangee3 ="_________";
    string rangee4 ="_________";
    string rangee5 ="_________";
    string rangee6 ="_________";
    string rangee7 ="_________";

    string salle[8]= { rangee0, rangee1, rangee2, rangee3, rangee4, rangee5,rangee6,rangee7};


    cout << "Combien de place voulez vous acheter ?"<< endl;
    int nbPlaces;
    cin >> nbPlaces ;

    cout << "A quelle rangee voulez vous aller ?"<< endl;
    int numRangee;
    cin >> numRangee;



    int nbPlaceslibres=0;
    do
    {
        switch (numRangee)
        {
            case 0:
                for (int iSiege=0; iSiege<9; iSiege ++)
                {
                    if (rangee0[iSiege] == '_')
                    {
                        nbPlaceslibres ++;
                    }
                }

                if ( nbPlaceslibres< nbPlaces )
                {
                    cout << "Le nombre de place disponible a cette rangee est insuffisant. Veuillez sélectioner une autre rangee."<< endl;
                    cin >> numRangee;
                }
                break;

            case 1:
                for (int iSiege=0; iSiege<9; iSiege ++)
                {
                    if (rangee1[iSiege] == '_')
                    {
                        nbPlaceslibres ++;
                    }
                }

                if ( nbPlaceslibres< nbPlaces )
                {
                    cout << "Le nombre de place disponible a cette rangee est insuffisant. Veuillez sélectioner une autre rangee."<< endl;
                    cin >> numRangee;
                }
                break;

            case 2:
                for (int iSiege=0; iSiege<9; iSiege ++)
                {
                    if (rangee2[iSiege] == '_')
                    {
                        nbPlaceslibres ++;
                    }
                }

                if ( nbPlaceslibres< nbPlaces )
                {
                    cout << "Le nombre de place disponible a cette rangee est insuffisant. Veuillez sélectioner une autre rangee."<< endl;
                    cin >> numRangee;
                }
                break;

            case 3:
                for (int iSiege=0; iSiege<9; iSiege ++)
                {
                    if (rangee3[iSiege] == '_')
                    {
                        nbPlaceslibres ++;
                    }
                }

                if ( nbPlaceslibres< nbPlaces )
                {
                    cout << "Le nombre de place disponible a cette rangee est insuffisant. Veuillez sélectioner une autre rangee."<< endl;
                    cin >> numRangee;
                }
                break;

            case 4:
                for (int iSiege=0; iSiege<9; iSiege ++)
                {
                    if (rangee4[iSiege] == '_')
                    {
                        nbPlaceslibres ++;
                    }
                }

                if ( nbPlaceslibres< nbPlaces )
                {
                    cout << "Le nombre de place disponible a cette rangee est insuffisant. Veuillez sélectioner une autre rangee."<< endl;
                    cin >> numRangee;
                }
                break;

            case 5:
                for (int iSiege=0; iSiege<9; iSiege ++)
                {
                    if (rangee5[iSiege] == '_')
                    {
                        nbPlaceslibres ++;
                    }
                }

                if ( nbPlaceslibres< nbPlaces )
                {
                    cout << "Le nombre de place disponible a cette rangee est insuffisant. Veuillez sélectioner une autre rangee."<< endl;
                    cin >> numRangee;
                }
                break;

            case 6:
                for (int iSiege=0; iSiege<9; iSiege ++)
                {
                    if (rangee6[iSiege] == '_')
                    {
                        nbPlaceslibres ++;
                    }
                }

                if ( nbPlaceslibres< nbPlaces )
                {
                    cout << "Le nombre de place disponible a cette rangee est insuffisant. Veuillez sélectioner une autre rangee."<< endl;
                    cin >> numRangee;
                }
                break;

            case 7:
                for (int iSiege=0; iSiege<9; iSiege ++)
                {
                    if (rangee7[iSiege] == '_')
                    {
                        nbPlaceslibres ++;
                    }
                }

                if ( nbPlaceslibres< nbPlaces )
                {
                    cout << "Le nombre de place disponible a cette rangee est insuffisant. Veuillez sélectioner une autre rangee."<< endl;
                    cin >> numRangee;
                }
                break;


        }
    }
    while (nbPlaceslibres< nbPlaces);




    switch (numRangee)
    {
        case 0:
            for ( int iNbPlace=0; iNbPlace < nbPlaces ; iNbPlace ++ )
            {
                cout << "Quel siege voulez vous reserver ?"<< endl;
                int siege;
                cin >> siege;

                while ( rangee0[siege] == 'X')
                {
                    cout << "Malheureusement le siege selectione est deja pris. Le plan de la salle est le suivant : "<< endl<< endl;
                    afficherSalle ( rangee0,rangee1 ,rangee2 ,rangee3 ,rangee4 ,rangee5 ,rangee6 ,rangee7 );
                    cout << endl;
                    cout << "Quel siege de la rangee voulez vous reserver ?"<< endl;
                    cin >> siege;
                }

                rangee0[siege]= 'X';
                cout << "Le siege demande a bien ete reserve"<< endl ;
                afficherSalle ( rangee0 ,rangee1 ,rangee2 ,rangee3 ,rangee4 ,rangee5 ,rangee6 ,rangee7 );
            }
            break;

        case 1:
            for ( int iNbPlace=0; iNbPlace < nbPlaces ; iNbPlace ++ )
            {
                cout << "Quel siege voulez vous reserver ?"<< endl;
                int siege;
                cin >> siege;

                while ( rangee1[siege] == 'X')
                {
                    cout << "Malheureusement le siege selectione est deja pris. Le plan de la salle est le suivant : "<< endl<< endl;
                    afficherSalle ( rangee0,rangee1 ,rangee2 ,rangee3 ,rangee4 ,rangee5 ,rangee6 ,rangee7 );
                    cout << endl;
                    cout << "Quel siege de la rangee voulez vous reserver ?"<< endl;
                    cin >> siege;
                }

                rangee1[siege]= 'X';
                cout << "Le siege demande a bien ete reserve"<< endl;
                afficherSalle ( rangee0 ,rangee1 ,rangee2 ,rangee3 ,rangee4 ,rangee5 ,rangee6 ,rangee7 );
            }
            break;

        case 2:
            for ( int iNbPlace=0; iNbPlace < nbPlaces ; iNbPlace ++ )
            {
                cout << "Quel siege voulez vous reserver ?"<< endl;
                int siege;
                cin >> siege;

                while ( rangee2[siege] == 'X')
                {
                    cout << "Malheureusement le siege selectione est deja pris. Le plan de la salle est le suivant : "<< endl<< endl;
                    afficherSalle ( rangee0,rangee1 ,rangee2 ,rangee3 ,rangee4 ,rangee5 ,rangee6 ,rangee7 );
                    cout << endl;
                    cout << "Quel siege de la rangee voulez vous reserver ?"<< endl;
                    cin >> siege;
                }

                rangee2[siege]= 'X';
                cout << "Le siege demande a bien ete reserve"<< endl ;
                afficherSalle ( rangee0 ,rangee1 ,rangee2 ,rangee3 ,rangee4 ,rangee5 ,rangee6 ,rangee7 );
            }
            break;

        case 3:
            for ( int iNbPlace=0; iNbPlace < nbPlaces ; iNbPlace ++ )
            {
                cout << "Quel siege voulez vous reserver ?"<< endl;
                int siege;
                cin >> siege;

                while ( rangee3[siege] == 'X')
                {
                    cout << "Malheureusement le siege selectione est deja pris. Le plan de la salle est le suivant : "<< endl<< endl;
                    afficherSalle ( rangee0,rangee1 ,rangee2 ,rangee3 ,rangee4 ,rangee5 ,rangee6 ,rangee7 );
                    cout << endl;
                    cout << "Quel siege de la rangee voulez vous reserver ?"<< endl;
                    cin >> siege;
                }

                rangee3[siege]= 'X';
                cout << "Le siege demande a bien ete reserve"<< endl ;
                afficherSalle ( rangee0 ,rangee1 ,rangee2 ,rangee3 ,rangee4 ,rangee5 ,rangee6 ,rangee7 );
            }
            break;

        case 4:
            for ( int iNbPlace=0; iNbPlace < nbPlaces ; iNbPlace ++ )
            {
                cout << "Quel siege voulez vous reserver ?"<< endl;
                int siege;
                cin >> siege;

                while ( rangee4[siege] == 'X')
                {
                    cout << "Malheureusement le siege selectione est deja pris. Le plan de la salle est le suivant : "<< endl<< endl;
                    afficherSalle ( rangee0,rangee1 ,rangee2 ,rangee3 ,rangee4 ,rangee5 ,rangee6 ,rangee7 );
                    cout << endl;
                    cout << "Quel siege de la rangee voulez vous reserver ?"<< endl;
                    cin >> siege;
                }

                rangee4[siege]= 'X';
                cout << "Le siege demande a bien ete reserve"<< endl ;
                afficherSalle ( rangee0 ,rangee1 ,rangee2 ,rangee3 ,rangee4 ,rangee5 ,rangee6 ,rangee7 );
            }
            break;

        case 5:
            for ( int iNbPlace=0; iNbPlace < nbPlaces ; iNbPlace ++ )
            {
                cout << "Quel siege voulez vous reserver ?"<< endl;
                int siege;
                cin >> siege;

                while ( rangee5[siege] == 'X')
                {
                    cout << "Malheureusement le siege selectione est deja pris. Le plan de la salle est le suivant : "<< endl<< endl;
                    afficherSalle ( rangee0,rangee1 ,rangee2 ,rangee3 ,rangee4 ,rangee5 ,rangee6 ,rangee7 );
                    cout << endl;
                    cout << "Quel siege de la rangee voulez vous reserver ?"<< endl;
                    cin >> siege;
                }

                rangee5[siege]= 'X';
                cout << "Le siege demande a bien ete reserve"<< endl ;
                afficherSalle ( rangee0 ,rangee1 ,rangee2 ,rangee3 ,rangee4 ,rangee5 ,rangee6 ,rangee7 );
            }
            break;

        case 6:
            for ( int iNbPlace=0; iNbPlace < nbPlaces ; iNbPlace ++ )
            {
                cout << "Quel siege voulez vous reserver ?"<< endl;
                int siege;
                cin >> siege;

                while ( rangee6[siege] == 'X')
                {
                    cout << "Malheureusement le siege selectione est deja pris. Le plan de la salle est le suivant : "<< endl<< endl;
                    afficherSalle ( rangee0,rangee1 ,rangee2 ,rangee3 ,rangee4 ,rangee5 ,rangee6 ,rangee7 );
                    cout << endl;
                    cout << "Quel siege de la rangee voulez vous reserver ?"<< endl;
                    cin >> siege;
                }

                rangee6[siege]= 'X';
                cout << "Le siege demande a bien ete reserve"<< endl ;
                afficherSalle ( rangee0 ,rangee1 ,rangee2 ,rangee3 ,rangee4 ,rangee5 ,rangee6 ,rangee7 );
            }
            break;

        case 7:
            for ( int iNbPlace=0; iNbPlace < nbPlaces ; iNbPlace ++ )
            {
                cout << "Quel siege voulez vous reserver ?"<< endl;
                int siege;
                cin >> siege;

                while ( rangee7[siege] == 'X')
                {
                    cout << "Malheureusement le siege selectione est deja pris. Le plan de la salle est le suivant : "<< endl<< endl;
                    afficherSalle ( rangee0,rangee1 ,rangee2 ,rangee3 ,rangee4 ,rangee5 ,rangee6 ,rangee7 );
                    cout << endl;
                    cout << "Quel siege de la rangee voulez vous reserver ?"<< endl;
                    cin >> siege;
                }

                rangee7[siege]= 'X';
                cout << "Le siege demande a bien ete reserve"<< endl ;
                afficherSalle ( rangee0 ,rangee1 ,rangee2 ,rangee3 ,rangee4 ,rangee5 ,rangee6 ,rangee7 );
            }
            break;

    }






    afficherSalle ( rangee0 ,rangee1 ,rangee2 ,rangee3 ,rangee4 ,rangee5 ,rangee6 ,rangee7 );




}
