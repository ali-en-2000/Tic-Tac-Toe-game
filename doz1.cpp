#include <iostream>
#include<conio.h>
#include <windows.h>
#include<cstdlib>
using namespace std;

char khane[10] = {'0','1','2','3','4','5','6','7','8','9'};

int checkwin();
void gadval();

int main()
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE );

	int player =1,i,entekhab;

    char neshane;
    do
    {
       	system("color f2");
	    gadval();
        player=(player%2)?1:2;
        if(player==2){
        system("color 0e");	
        	
		}
        
        cout << "Player " << player << ", enter a number:  ";
        cin >>entekhab ;
        neshane=(player == 1) ? 'A' : 'M';

        if (entekhab == 1 && khane[1] == '1')

            khane[1] = neshane;
        else if (entekhab == 2 && khane[2] == '2')

            khane[2] = neshane;
        else if (entekhab == 3 && khane[3] == '3')

            khane[3] = neshane;
        else if (entekhab == 4 && khane[4] == '4')

            khane[4] = neshane;
        else if (entekhab == 5 && khane[5] == '5')

            khane[5] = neshane;
        else if (entekhab == 6 && khane[6] == '6')

            khane[6] = neshane;
        else if (entekhab == 7 && khane[7] == '7')

            khane[7] = neshane;
        else if (entekhab == 8 && khane[8] == '8')

            khane[8] = neshane;
        else if (entekhab == 9 && khane[9] == '9')

            khane[9] = neshane;
        else
        {
  
			cout<<"                                 dorost bazi kon                                ";
 
            player--;
         //   cin.ignore();
            getch ();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    gadval();
    if(i==1)

        cout<<"      ==> Player "<<--player<<" win <== ";
    else 
        cout<<"                                        ==>  mosavi  <==                      ";
    cout<<endl<<endl<<endl<<endl<<"                                    {mohammadi*2}";
	cin.ignore();
	getch();
    return 0;
}



int checkwin()
{
    if (khane[1] == khane[2] && khane[2] == khane[3])

        return 1;
    else if (khane[4] == khane[5] && khane[5] == khane[6])

        return 1;
    else if (khane[7] == khane[8] && khane[8] == khane[9])

        return 1;
    else if (khane[1] == khane[4] && khane[4] == khane[7])

        return 1;
    else if (khane[2] == khane[5] && khane[5] == khane[8])

        return 1;
    else if (khane[3] == khane[6] && khane[6] == khane[9])

        return 1;
    else if (khane[1] == khane[5] && khane[5] == khane[9])

        return 1;
    else if (khane[3] == khane[5] && khane[5] == khane[7])

        return 1;
    else if (khane[1] != '1' && khane[2] != '2' && khane[3] != '3' 
                    && khane[4] != '4' && khane[5] != '5' && khane[6] != '6' 
                  && khane[7] != '7' && khane[8] != '8' && khane[9] != '9')

        return 0;
    else
        return -1;
}


void gadval()
{
    system("cls");
    cout << "\tDOZ"<<endl;

    cout << "Player1(A):Player2(M)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << khane[1] << "  |  " << khane[2] << "  |  " << khane[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << khane[4] << "  |  " << khane[5] << "  |  " << khane[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << khane[7] << "  |  " << khane[8] << "  |  " << khane[9] << endl;

    cout << "     |     |     " << endl << endl;
    
}
