#include <iostream>
#include <cstring>
#include "ca_math.hpp"
#include "ca_datatype.hpp"

void showHelp()
{
    static const char *HELP_INFO
    {
        "\t-comp\t设置为组合\n"\
        "\t-arra\t设置为排列\n"\
        "\t-n\t设置n值\n"\
        "\t-m\t设置m值\n"
    };

    std::cout << HELP_INFO << std::endl;
}

int main(int argn, char *args[])
{
    static const char *const INFO
    {
        "+----------------------------+\n"\
        "|        Comp & Arra         |\n"\
        "| ========================== |\n"\
        "| version: 0.0.2             |\n"\
        "| source opened on GPL v3.   |\n"\
        "+----------------------------+\n"
    };


    static const char *const ARGS[][2]
    {
        // comp or arra
        {
            "-comp",
            "-arra"
        },

        // set numbers
        {
            "-n",
            "-m",
        },

        {
            "-help"
        }
    };

    bool roadSignal_comp {false};
    int n {1};
    int m {1};
    long long result {0};

    while(argn --> 0)
    {
        if(std::strcmp(args[argn],ARGS[0][0]) == 0)
        {
            roadSignal_comp = true;
        }

        else if(std::strcmp(args[argn],ARGS[0][1]) == 0)
        {
            roadSignal_comp = false;
        }

        else if(std::strcmp(args[argn],ARGS[1][0]) == 0)
        {
            n = std::atoi(args[argn + 1]);
        }

        else if(std::strcmp(args[argn],ARGS[1][1]) == 0)
        {
            m = std::atoi(args[argn + 1]);
        }

        else if(std::strcmp(args[argn],ARGS[2][0]) == 0)
        {
            showHelp();
            return 1;
        }

        else
        {
            showHelp();
            return 1;
        }
    }

    try
    {
        if(roadSignal_comp)
        {
            result = ca::math::comb(m, n);
        }
        else
        {
            result = ca::math::arra(m, n);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "exception occured: " << e.what() << '\n';
        return -1;
    }

    std::cout << INFO << "result = " << result << std::endl;

    return 0;
}