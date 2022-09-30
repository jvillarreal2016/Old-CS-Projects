#include <iostream>
using namespace std;

int  a1[12],
     a2[12],
     a3[12];
char reply;
int  used1,
     used2,
     used3,
     remCount,
     anchor;
int* hopPtr1;
int* hopPtr11;
int* hopPtr2;
int* hopPtr22;
int* hopPtr222;
int* hopPtr3;
int* endPtr1;
int* endPtr2;
int* endPtr3;

char begA1Str[] = "\nbeginning a1: ";
char proA1Str[] = "processed a1: ";
char comA2Str[] = "          a2: ";
char comA3Str[] = "          a3: ";
char einStr[]   = "Enter integer #";
char moStr[]    = "Max of ";
char ieStr[]    = " ints entered...";
char emiStr[]   = "Enter more ints? (n or N = no, others = yes) ";
char dacStr[]   = "Do another case? (n or N = no, others = yes) ";
char dlStr[]    = "================================";
char byeStr[]   = "bye...";

int main()
{
//do
begDW1://      {
                used1 = 0;
                hopPtr1 = a1;
//do
begDW2://         {
                   cout << einStr;
                   cout << (used1 + 1);
                   cout << ':' << ' ';
                   cin >> *hopPtr1;
                   ++used1;
                   ++hopPtr1;
                   if (used1 != 12) goto else1;
begI1://  {
                      cout << moStr;
                      cout << 12;
                      cout << ieStr;
                      cout << endl;
                      reply = 'n';
                    goto endI1;
//                 }
else1://             {
                      cout << emiStr;
                      cin >> reply;
//                    }
endI1:
endDW2://           }
DWTest2:                //while (reply == 'n' && reply == 'N');
                        //if (reply == 'n' && reply == 'N'
                         if(reply == 'n') goto xitDW2;
                         if(reply != 'N') goto begDW2;

xitDW2:

                cout << begA1Str;
                hopPtr1 = a1;
                endPtr1 = a1 + used1;

                goto WTest1;

begW1://          {
                    if (hopPtr1 != endPtr1 - 1)
                    goto elseI2;
begI2://          {
                      cout << *hopPtr1 << endl;
                      goto endI2;
elseI2://           else
//                 {
                      cout << *hopPtr1 << ' ';
//                 }
endI2://          }
                   ++hopPtr1;
WTest1:         if(hopPtr1 >= endPtr1) goto begW1;
endW://           }
                hopPtr1 = a1, hopPtr2 = a2, used2 = 0;
                goto FTest1;
//              for (hopPtr1 = a1, hopPtr2 = a2, used2 = 0; // multiple initializations
//                     ++hopPtr1, ++hopPtr2, ++used2)         // multiple updates
begF1://        {
                   *hopPtr2 = *hopPtr1;
                   ++hopPtr1, ++hopPtr2, ++used2;

FTest1:         if (hopPtr1 < endPtr1)
                goto begF1;
endF1://        }

                hopPtr2 = a2;
                endPtr2 = a2 + used2;

                goto WTest2;
begW2://        {
//              while (hopPtr2 < endPtr2)

                   anchor = *hopPtr2;
                   hopPtr22 = hopPtr2 + 1;
                   goto FTest2;
begF2://           {
//                  for (hopPtr22 = hopPtr2 + 1; hopPtr22 < endPtr2; ++hopPtr22)
begI3:
//                    if (*hopPtr22 == anchor)
                      if (*hopPtr22 != anchor)
                      goto endI3;
//                    {
                        hopPtr222 = hopPtr22 + 1;
                        goto FTest3;
begF3://                for (hopPtr222 = hopPtr22 + 1; hopPtr222 < endPtr2; ++hopPtr222)
//                       {
                            *(hopPtr222 - 1) = *hopPtr222;
                            ++hopPtr222;
//                       }
FTest3:                 if (hopPtr222 < endPtr2)
                        goto begF3;
endF3:
                         --used2;
                         --endPtr2;
                         --hopPtr22;
//                    }
                    ++hopPtr22;
FTest2:             if (hopPtr22 < endPtr2)
                    goto begF2;

endI3:

endF2://       }
                   ++hopPtr2;

WTest2:         if (hopPtr2 < endPtr2)
                goto begW2;
endW2://         }

                used3 = 0;
                hopPtr3 = a3;
                hopPtr1 = a1;
                goto WTest3;
begW3://        {
//          while (hopPtr1 < endPtr1)
                   *hopPtr3 = *hopPtr1;
                   ++used3;
                   ++hopPtr3;
                   anchor = *hopPtr1;
                   remCount = 0;
                   for (hopPtr11 = hopPtr1 + 1; hopPtr11 < endPtr1; ++hopPtr11)
                   {
                      if (*hopPtr11 == anchor)
                      {
                         ++remCount;
                      }
                      else
                      {
                         *(hopPtr11 - remCount) = *hopPtr11;
                      }
                   }
                   used1 -= remCount;
                   endPtr1 -= remCount;
                   ++hopPtr1;
WTest3:         if (hopPtr1 < endPtr1)
                goto begW3;
endW3://         }
                cout << proA1Str;
                hopPtr1 = a1;
                goto FTest4;
begF4://        {
//                for (hopPtr1 = a1; hopPtr1 < endPtr1; ++hopPtr1)
                   if (hopPtr1 != endPtr1 - 1)
                   goto else2;
//                 {
                      cout << *hopPtr1 << endl;
//                 }
                   goto endif2;
else2://                   else
//                 {
                      cout << *hopPtr1 << ' ';
//                 }
endif2://       }

                ++hopPtr1;

FTest4:         if (hopPtr1 < endPtr1)
                goto begF4;
endF4:
                cout << comA2Str;

                hopPtr2 = a2;
                goto FTest5;
begF5://        {
//              for (hopPtr2 = a2; hopPtr2 < endPtr2; ++hopPtr2)
                if (hopPtr2 != endPtr2 - 1)
                    goto else3;
//                   if (hopPtr2 == endPtr2 - 1)
//                   {
                      cout << *hopPtr2 << endl;
//                   }
                    goto endif3;
else3://              else
//                   {
                      cout << *hopPtr2 << ' ';
//                   }
endif3:
                ++hopPtr2;
FTest5:         if (hopPtr2 < endPtr2)
                goto begF5;
endF5://        }
                cout << comA3Str;
                hopPtr3 = a3;
                endPtr3 = a3 + used3;

                goto WTest4;
begW4://        {
//                while (hopPtr3 < endPtr3)
                  if (hopPtr3 != endPtr3 -1)
                  goto else4;
//                 if (hopPtr3 == endPtr3 - 1)
//                 {
                      cout << *hopPtr3 << endl;
//                 }
                  goto endif4;
else4://           else
//                 {
                      cout << *hopPtr3 << ' ';
//                 }
endif4:
                   ++hopPtr3;
WTest4:         if (hopPtr3 < endPtr3)
                goto begW4;
endW4://        }
                cout << endl;
                cout << dacStr;
                cin >> reply;
                cout << endl;
//             }
endDW1:
DWTest1://            while (reply == 'n' && reply == 'N');
                      if(reply != 'n') goto xitDW1;
                      if(reply != 'N') goto begDW1;

xitDW1:
             cout << dlStr;
             cout << '\n';
             cout << byeStr;
             cout << '\n';
             cout << dlStr;
             cout << '\n';

             return 0;
}
