#include <Tomos/util/logger/TLogger.hh>

using namespace Tomos;

int main( int argc, char **argv )
{
    TLOG_INFO() << std::format( "Hello, {}!", "Voxels" );
    
    return 0;
}
