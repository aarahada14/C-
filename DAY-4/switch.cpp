#include<iostream>
using namespace std;
int main(){

    int a;

    cout << "menu:" << endl;
    cout << "press 1 for Pizza: " << endl;
    cout << "press 2 for Burger: " << endl;
    cout << "press 3 for Sandwitch: " << endl;
    cout << "press 4 for pasta: " << endl << endl;
    cout << "Enter your choice: ";
    cin >> a;

    cout << endl;

     switch(a){
        case 1 :
            cout << "your Ordered Pizza now choose the type:" << endl;
                cout << "press 1 for onion Pizza" << endl;
                cout << "press 2 for  Margaritta" << endl;
                cout << "press 3 for  Cheese bursth" << endl;
                cout << "press 4 for  sweet corn pizza" << endl;
                int b;
                cout << "Enter pizza type:";
                cin >> b;

                cout << endl;

                        switch(b){
                            case 1:
                                cout << "you ordered oninon pizza" << endl;
                                break;
                            case 2:
                                cout << "you ordered Margaritta" << endl;
                                break;
                            case 3:
                                cout << "you ordered Cheese bursth" << endl;
                                break;
                            case 4:
                                cout << "you ordered sweet corn pizza" << endl;
                                break;
                            default:
                                cout << "this pizza type is not available" << endl;
                                break;
                        }


            break;
        case 2 :
            cout << "your Ordered Burger";
                cout << "press 1 for Burger" << endl;
                cout << "press 2 for veg Burger" << endl;
                cout << "press 3 for chees Burger" << endl;
                cout << "press 4 for double chees Burger" << endl;
                int c;
                cout << "Enter pizza type:";
                cin >> c;

                cout << endl;

                     switch(c){
                            case 1:
                                cout << "you ordered Burger" << endl;
                                break;
                            case 2:
                                cout << "you ordered veg Burger" << endl;
                                break;
                            case 3:
                                cout << "you ordered chees Burger" << endl;
                                break;
                            case 4:
                                cout << "you ordered double chees Burger" << endl;
                                break;
                            default:
                                cout << "this Burger type is not available" << endl;
                                break;
                        }


            break;

        case 3 :
            cout << "your Ordered Sandwitch";
             cout << "press 1 for grill Sandwitch" << endl;
                cout << "press 2 for vegitable Sandwitch" << endl;
                cout << "press 3 for chees Sandwitch" << endl;
                cout << "press 4 for double chees Sandwitch" << endl;
                int d;
                cout << "Enter pizza type:";
                cin >> d;

                cout << endl;

                     switch(d){
                            case 1:
                                cout << "you ordered grill Sandwitch" << endl;
                                break;
                            case 2:
                                cout << "you ordered vegitable Sandwitchr" << endl;
                                break;
                            case 3:
                                cout << "you ordered chees Sandwitch" << endl;
                                break;
                            case 4:
                                cout << "you ordered double chees Sandwitch" << endl;
                                break;
                            default:
                                cout << "this Sandwitch type is not available" << endl;
                                break;
                        }
            break;
        case 4 :
            cout << "your Ordered pasta";
             cout << "press 1 for pasta" << endl;
                cout << "press 2 for masala pasta" << endl;
                cout << "press 3 for chees pasta" << endl;
                cout << "press 4 for white chees pastar" << endl;
                int e;
                cout << "Enter pizza type:";
                cin >> e;

                cout << endl;

                     switch(e){
                            case 1:
                                cout << "you ordered pasta" << endl;
                                break;
                            case 2:
                                cout << "you ordered masala pasta" << endl;
                                break;
                            case 3:
                                cout << "you ordered chees pasta" << endl;
                                break;
                            case 4:
                                cout << "you ordered white chees pastar" << endl;
                                break;
                            default:
                                cout << "this pasta type is not available" << endl;
                                break;
                        }
            break;
        default :
            cout << "your order is not on menu";
            break;
    }



    return 0;

}