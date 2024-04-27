#include <iostream>
#include "Utils.hpp"
#include "PolygonalMesh.hpp"


using namespace std;
using namespace PolygonalLibrary;


int main()
{
    PolygonalMesh mesh;

    string filepath = "PolygonalMesh";

    if(!ImportMesh(filepath,
                    mesh))
    {
        return 1;
    }


    return 0;
}

