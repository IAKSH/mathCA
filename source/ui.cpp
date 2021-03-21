#include "ui.h"
#include <string>
#include <windows.h>
#include <iostream>
#include <array>
using std::array;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;

CLI_UI::CLI_UI() : focusIndex(0){};

void CLI_UI::setWindowSize(int cols, int lines)
{
    string commandBufferCols{"mode con cols="};
    string commandBufferLines{"lines="};
    commandBufferCols += to_string(cols);
    commandBufferLines += to_string(lines);
    string CommandBufferFinal{commandBufferCols + " " + commandBufferLines};
    system(CommandBufferFinal.c_str());
}

// Using WIN API
int CLI_UI::checkKeyBoard()
{
    if(GetAsyncKeyState(VK_UP))
    {
        return 1;
    }

    if(GetAsyncKeyState(VK_DOWN))
    {
        return 2;
    }

    if(GetAsyncKeyState(VK_END))
    {
        return 3;
    }

    return 0;
}

const int& CLI_UI::getInputN()
{
    return inputN;
}

const int& CLI_UI::getInputM()
{
    return inputM;
}

int CLI_UI::showAndGetRoadCode()
{
    //setWindowSize(25, 9);

    const array<string, 4> UI_BUFFER_ORI
    {
        "M = ",
        "N = ",
        "Change C/A",
        "Change +/*"
    };

    array<string, 4> bu_buffer_save{UI_BUFFER_ORI};
    array<string, 4> ui_buffer{bu_buffer_save};

    while(true)
    {
        bu_buffer_save[0] = bu_buffer_save[0] + to_string(inputM);
        bu_buffer_save[1] += bu_buffer_save[1] + to_string(inputN);

        switch(checkKeyBoard())
        {
            case 1: // VK_UP
                {
                    if(focusIndex != 0)
                    {
                        --focusIndex;
                    }else
                    {
                        focusIndex = 3;
                    }

                    break;
                }

            case 2: // VK_DOWN
                {
                    if(focusIndex != 3)
                    {
                        ++focusIndex;
                    }else
                    {
                        focusIndex = 0;
                    }

                    break;
                }

            case 3: // VK_END
                {
                    switch (focusIndex)
                    {
                    case 0:
                        cout << "Set n = ";
                        cin >> inputN;
                        cout << endl;
                        cout << "set m = ";
                        cin >> inputM;
                        cout << endl;

                        break;
                    
                    default:
                        break;
                    }
                    break;
                }
            default:
                break;
        }

        switch (focusIndex)
        {
        case 0:
            ui_buffer[0] += " <-";
            ui_buffer[1] = UI_BUFFER_ORI[1];
            ui_buffer[2] = UI_BUFFER_ORI[2];
            ui_buffer[3] = UI_BUFFER_ORI[3];
            break;

        case 1:
            ui_buffer[1] += " <-";
            ui_buffer[0] = UI_BUFFER_ORI[0];
            ui_buffer[2] = UI_BUFFER_ORI[2];
            ui_buffer[3] = UI_BUFFER_ORI[3];
            break;

        case 2:
            ui_buffer[2] += " <-";
            ui_buffer[0] = UI_BUFFER_ORI[0];
            ui_buffer[1] = UI_BUFFER_ORI[1];
            ui_buffer[3] = UI_BUFFER_ORI[3];
            break;

        case 3:
            ui_buffer[3] += " <-";
            ui_buffer[0] = UI_BUFFER_ORI[0];
            ui_buffer[1] = UI_BUFFER_ORI[1];
            ui_buffer[2] = UI_BUFFER_ORI[2];

        default:
            break;
        }

        cout << "--- Auto CA [ Debug ]---" << endl; // Hint
        cout << endl;                               // Empty

        for(auto& item: ui_buffer)
        {
            cout << item << endl;
        }

        cout << endl;
        cout << "▄▄▄  NUM: 0 ▄▄▄▄▄▄▄▄  C ▄" << endl;  // State

        Sleep(100);
        ui_buffer = UI_BUFFER_ORI;
        system("cls");
    }
}