#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char name[100];
    cin.getline(name , 99);
    int length = strlen(name);
    int Capital = 0;
    int Small =0;
    for(char *ptr = name; ptr<name+length; ptr++)
    {
        switch(*ptr)
        {
        case 'A':
            case 'B':
               case 'C':
                    case 'D':
                          case 'E':
                                case 'F':
                                      case 'G':
                                            case 'H':
                                                  case 'I':
                                                        case 'J':
                                                              case 'K':
                                                                    case 'L':
                                                                          case 'M':
                                                                                case 'N':
                                                                                      case 'O':
                                                                                            case 'P':
                                                                                                  case 'Q':
                                                                                                        case 'R':
                                                                                                              case 'S':
                                                                                                                    case 'T':
                                                                                                                          case 'U':
                                                                                                                                case 'V':
                                                                                                                                      case 'W':
                                                                                                                                            case 'X':
                                                                                                                                                  case 'Y':
                                                                                                                                                        case 'Z':
                                                                                                                                                            Capital++;

        case 'a':
            case 'b':
               case 'c':
                    case 'd':
                          case 'e':
                                case 'f':
                                      case 'g':
                                            case 'h':
                                                  case 'i':
                                                        case 'j':
                                                              case 'k':
                                                                    case 'l':
                                                                          case 'm':
                                                                                case 'n':
                                                                                      case 'o':
                                                                                            case 'p':
                                                                                                  case 'q':
                                                                                                        case 'r':
                                                                                                              case 's':
                                                                                                                    case 't':
                                                                                                                          case 'u':
                                                                                                                                case 'v':
                                                                                                                                      case 'w':
                                                                                                                                            case 'x':
                                                                                                                                                  case 'y':
                                                                                                                                                        case 'z':
                                                                                                                                                            Small++;

        }
    }
    cout<< "The Entered scentence have  "<< Capital << " Capital Letters,  "<< Small << " Small letters"<<endl;
    return 0;
}
