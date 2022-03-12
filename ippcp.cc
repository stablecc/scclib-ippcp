#include <ippcp.h>

// IPP Cryptography requires no initialization. Test linkage only.
void _ippcplink()
{
	ippcpGetLibVersion();
}
