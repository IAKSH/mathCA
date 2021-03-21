#ifndef CLI_UI_H
#define CLI_UI_H

class CLI_UI
{
public:
    CLI_UI();
    ~CLI_UI() = default;

    int showAndGetRoadCode();
    const int &getInputN();
    const int &getInputM();

private:
    void setWindowSize(int, int);
    int checkKeyBoard();
    int inputN;
    int inputM;
    int focusIndex;
};

#endif
