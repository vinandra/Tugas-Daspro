// matriks sorting
#include <iostream>
using namespace std;
int main()
{
    int MatA[4][3];
    int MatB[4][3];
    int MatC[4][3];
    int MatD[4][3];
    int x,y,wadah,z;
    x=0;
   while(x < 3)
   {
       y=0;
       do
       {
          cout << "MatrikA baris ke " << x +1 << " kolom ke " << y+1 << "  : ";
          cin >>MatA[y][x];
           y++;
       }while(y < 4);
       x++;
   }

    x=0;
    while(x < 3)
   {
       y=0;
       do
       {
          cout << "MatrikB baris ke " << x +1 << " kolom ke " << y+1 << "  : ";
          cin >>MatB[y][x];
           y++;
       }while(y < 4);
       x++;
   }

    x=0;
   while(x < 3)
   {
       y=0;
       do
       {
          cout << "MatrikC baris ke " << x +1 << " kolom ke " << y+1 << "  : ";
          cin >>MatC[y][x];
           y++;
       }while(y < 4);
       x++;
   }

    cout << "matrik An\n";
   x=0;
   while(x < 3)
   {
       y=0;
       while(y < 4)
       {
          cout << MatA[y][x] << " | ";
           y++;
       };
       cout << endl;
       x++;
   }

   cout << "matrik B\n";
   x=0;
   while(x < 3)
   {
       y=0;
       while(y < 4)
       {
          cout << MatB[y][x] << " | ";
           y++;
       };
       cout << endl;
       x++;
   }

   cout << "matrik C\n";
   x=0;
   while(x < 3)
   {
       y=0;
       while(y < 4)
       {
          cout << MatC[y][x] << " | ";
           y++;
       };
       cout << endl;
       x++;
   }


    cout << "matrik D\n";
    x=0;
   while(x < 3)
   {
       y=0;
       while(y < 4)
       {
         MatD[y][x] =  (MatA[y][x] + MatB[y][x]) - (MatA[y][x] + MatC[y][x]);
         y++;
       };
       x++;
   }

   x=0;
   while(x < 3)
   {
       y=0;
       while(y < 4)
       {
          cout << MatD[y][x] << " | ";
           y++;
       };
       cout << endl;
       x++;
   }
}