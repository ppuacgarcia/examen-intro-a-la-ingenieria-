#include <iostream>
using namespace std;

int main() 
{   string enc;
	cout << "ingrense el codigo a encriptar " << endl;
            cin.ignore();
		    getline(cin, enc);
            for(int i=0;i<enc.length();i++)
            {
            	if (enc[i]=='A')
            	{
            		enc[i]='Q';
				}
				else if (enc[i]=='B')
            	{
            		enc[i]='W';
				}	
				else if (enc[i]=='C')
            	{
            		enc[i]='E';
				}
					
					else if (enc[i]=='D')
            	{
            		enc[i]='R';
				}
					
					else if (enc[i]=='E')
            	{
            		enc[i]='T';
				}
				
					else if (enc[i]=='F')
            	{
            		enc[i]='Y';
				}
					
					else if (enc[i]=='G')
            	{
            		enc[i]='U';
				}
					
					else if (enc[i]=='H')
            	{
            		enc[i]='I';
				}
				
					else if (enc[i]=='I')
            	{
            		enc[i]='O';
				}
					
					else if (enc[i]=='J')
            	{
            		enc[i]='P';
				}
				
					else if (enc[i]=='K')
            	{
            		enc[i]='A';
				}
					
					else if (enc[i]=='L')
            	{
            		enc[i]='S';
				}
				
					else if (enc[i]=='M')
            	{
            		enc[i]='D';
				}
				
					else if (enc[i]=='N')
            	{
            		enc[i]='F';
				}
				
					else if (enc[i]=='G')
            	{
            	
					enc[i]='H';
				}
					else if (enc[i]=='P')
            	{
            		
					enc[i]='J';
				}
					else if (enc[i]=='Q')
            	{
            	
					enc[i]='K';
				}
					else if (enc[i]=='R')
            	{
            	
					enc[i]='L';
				}
					else if (enc[i]=='S')
            	{
            	
					enc[i]='Z';
				}
					else if (enc[i]=='T')
            	{
            	
					enc[i]='X';
				}
					else if (enc[i]=='U')
            	{
            	
					enc[i]='C';
				}
					
					else if (enc[i]=='V')
            	{
            	
				enc[i]='V';
				}
					
					else if (enc[i]=='W')
            	{
            	
					enc[i]='B';
				}
					else if (enc[i]=='X')
            	{
            		enc[i]='N';
				}
				
					else if (enc[i]=='Y')
            	{
            		enc[i]='M';
				}
					else if (enc[i]=='Z')
            	{
            		enc[i]='G';
				}
				else if (enc[i]==' ')
				{
					enc[i]==' ';
				}
					if (enc[i]=='a')
            	{
            		enc[i]='q';
				}
				else if (enc[i]=='b')
            	{
            		enc[i]='w';
				}	
				else if (enc[i]=='c')
            	{
            		enc[i]='e';
				}
					
					else if (enc[i]=='d')
            	{
            		enc[i]='r';
				}
					
					else if (enc[i]=='e')
            	{
            		enc[i]='t';
				}
				
					else if (enc[i]=='f')
            	{
            		enc[i]='y';
				}
					
					else if (enc[i]=='g')
            	{
            		enc[i]='u';
				}
					
					else if (enc[i]=='h')
            	{
            		enc[i]='i';
				}
				
					else if (enc[i]=='i')
            	{
            		enc[i]='o';
				}
					
					else if (enc[i]=='j')
            	{
            		enc[i]='p';
				}
				
					else if (enc[i]=='k')
            	{
            		enc[i]='a';
				}
					
					else if (enc[i]=='l')
            	{
            		enc[i]='s';
				}
				
					else if (enc[i]=='m')
            	{
            		enc[i]='d';
				}
				
					else if (enc[i]=='n')
            	{
            		enc[i]='f';
				}
				
					else if (enc[i]=='g')
            	{
            	
					enc[i]='h';
				}
					else if (enc[i]=='p')
            	{
            		
					enc[i]='j';
				}
					else if (enc[i]=='q')
            	{
            	
					enc[i]='k';
				}
					else if (enc[i]=='l')
            	{
            	
					enc[i]='l';
				}
					else if (enc[i]=='s')
            	{
            	
					enc[i]='z';
				}
					else if (enc[i]=='t')
            	{
            	
					enc[i]='x';
				}
					else if (enc[i]=='u')
            	{
            	
					enc[i]='c';
				}
					
					else if (enc[i]=='v')
            	{
            	
				enc[i]='v';
				}
					
					else if (enc[i]=='w')
            	{
            	
					enc[i]='b';
				}
					else if (enc[i]=='x')
            	{
            		enc[i]='n';
				}
				
					else if (enc[i]=='y')
            	{
            		enc[i]='m';
				}
					else if (enc[i]=='z')
            	{
            		enc[i]='g';
				}
				else if (enc[i]==' ')
				{
					enc[i]==' ';
				}
				
			}
         cout<<"la encriptacion es "<<enc<<endl;
				return 0;
}
