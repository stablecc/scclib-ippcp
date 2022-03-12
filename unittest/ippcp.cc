#include <gtest/gtest.h>
#include <cstdio>
#include <iostream>
#include <ippcp.h>

TEST(ipp_tests, ipp_features)
{
	const IppLibraryVersion *lib;
	IppStatus status;
	Ipp64u mask, emask;

	/* Get Intel IPP Cryptography library version info */
	lib = ippcpGetLibVersion();
	ASSERT_NE(lib->Name, nullptr);
	ASSERT_NE(lib->Version, nullptr);
	std::cout << "Name: " << lib->Name << " Version: " << lib->Version << std::endl;

	/* Get CPU features and features enabled with selected library level */
	status = ippcpGetCpuFeatures( &mask );

	ASSERT_EQ(status, ippStsNoErr);

	if( ippStsNoErr == status ) {
		emask = ippcpGetEnabledCpuFeatures();
		printf("Features supported by CPU\tby IPP\n");
		printf("-----------------------------------------\n");
		printf("  ippCPUID_MMX        = ");
		printf("%c\t%c\t",( mask & ippCPUID_MMX ) ? 'Y':'N',( emask & ippCPUID_MMX ) ? 'Y':'N');
		printf("Intel(R) Architecture MMX technology supported\n");
		printf("  ippCPUID_SSE        = ");
		printf("%c\t%c\t",( mask & ippCPUID_SSE ) ? 'Y':'N',( emask & ippCPUID_SSE ) ? 'Y':'N');
		printf("Intel(R) Streaming SIMD Extensions\n");
		printf("  ippCPUID_SSE2       = ");
		printf("%c\t%c\t",( mask & ippCPUID_SSE2 ) ? 'Y':'N',( emask & ippCPUID_SSE2 ) ? 'Y':'N');
		printf("Intel(R) Streaming SIMD Extensions 2\n");
		printf("  ippCPUID_SSE3       = ");
		printf("%c\t%c\t",( mask & ippCPUID_SSE3 ) ? 'Y':'N',( emask & ippCPUID_SSE3 ) ? 'Y':'N');
		printf("Intel(R) Streaming SIMD Extensions 3\n");
		printf("  ippCPUID_SSSE3      = ");
		printf("%c\t%c\t",( mask & ippCPUID_SSSE3 ) ? 'Y':'N',( emask & ippCPUID_SSSE3 ) ? 'Y':'N');
		printf("Intel(R) Supplemental Streaming SIMD Extensions 3\n");
		printf("  ippCPUID_MOVBE      = ");
		printf("%c\t%c\t",( mask & ippCPUID_MOVBE ) ? 'Y':'N',( emask & ippCPUID_MOVBE ) ? 'Y':'N');
		printf("The processor supports MOVBE instruction\n");
		printf("  ippCPUID_SSE41      = ");
		printf("%c\t%c\t",( mask & ippCPUID_SSE41 ) ? 'Y':'N',( emask & ippCPUID_SSE41 ) ? 'Y':'N');
		printf("Intel(R) Streaming SIMD Extensions 4.1\n");
		printf("  ippCPUID_SSE42      = ");
		printf("%c\t%c\t",( mask & ippCPUID_SSE42 ) ? 'Y':'N',( emask & ippCPUID_SSE42 ) ? 'Y':'N');
		printf("Intel(R) Streaming SIMD Extensions 4.2\n");
		printf("  ippCPUID_AVX        = ");
		printf("%c\t%c\t",( mask & ippCPUID_AVX ) ? 'Y':'N',( emask & ippCPUID_AVX ) ? 'Y':'N');
		printf("Intel(R) Advanced Vector Extensions instruction set\n");
		printf("  ippAVX_ENABLEDBYOS  = ");
		printf("%c\t%c\t",( mask & ippAVX_ENABLEDBYOS ) ? 'Y':'N',( emask & ippAVX_ENABLEDBYOS ) ? 'Y':'N');
		printf("The operating system supports Intel(R) AVX\n");
		printf("  ippCPUID_AES        = ");
		printf("%c\t%c\t",( mask & ippCPUID_AES ) ? 'Y':'N',( emask & ippCPUID_AES ) ? 'Y':'N');
		printf("Intel(R) AES instruction\n");
		printf("  ippCPUID_SHA        = ");
		printf("%c\t%c\t",( mask & ippCPUID_SHA ) ? 'Y':'N',( emask & ippCPUID_SHA ) ? 'Y':'N');
		printf("Intel(R) SHA new instructions\n");
		printf("  ippCPUID_CLMUL      = ");
		printf("%c\t%c\t",( mask & ippCPUID_CLMUL ) ? 'Y':'N',( emask & ippCPUID_CLMUL ) ? 'Y':'N');
		printf("PCLMULQDQ instruction\n");
		printf("  ippCPUID_RDRAND     = ");
		printf("%c\t%c\t",( mask & ippCPUID_RDRAND ) ? 'Y':'N',( emask & ippCPUID_RDRAND ) ? 'Y':'N');
		printf("Read Random Number instructions\n");
		printf("  ippCPUID_F16C       = ");
		printf("%c\t%c\t",( mask & ippCPUID_F16C ) ? 'Y':'N',( emask & ippCPUID_F16C ) ? 'Y':'N');
		printf("Float16 instructions\n");
		printf("  ippCPUID_AVX2       = ");
		printf("%c\t%c\t",( mask & ippCPUID_AVX2 ) ? 'Y':'N',( emask & ippCPUID_AVX2 ) ? 'Y':'N');
		printf("Intel(R) Advanced Vector Extensions 2 instruction set\n");
		printf("  ippCPUID_AVX512F    = ");
		printf("%c\t%c\t",( mask & ippCPUID_AVX512F ) ? 'Y':'N',( emask & ippCPUID_AVX512F ) ? 'Y':'N');
		printf("Intel(R) Advanced Vector Extensions 3.1 instruction set\n");
		printf("  ippCPUID_AVX512CD   = ");
		printf("%c\t%c\t",( mask & ippCPUID_AVX512CD ) ? 'Y':'N',( emask & ippCPUID_AVX512CD ) ? 'Y':'N');
		printf("Intel(R) Advanced Vector Extensions CD (Conflict Detection) instruction set\n");
		printf("  ippCPUID_AVX512ER   = ");
		printf("%c\t%c\t",( mask & ippCPUID_AVX512ER ) ? 'Y':'N',( emask & ippCPUID_AVX512ER ) ? 'Y':'N');
		printf("Intel(R) Advanced Vector Extensions ER instruction set\n");
		printf("  ippCPUID_ADCOX      = ");
		printf("%c\t%c\t",( mask & ippCPUID_ADCOX ) ? 'Y':'N',( emask & ippCPUID_ADCOX ) ? 'Y':'N');
		printf("ADCX and ADOX instructions\n");
		printf("  ippCPUID_RDSEED     = ");
		printf("%c\t%c\t",( mask & ippCPUID_RDSEED ) ? 'Y':'N',( emask & ippCPUID_RDSEED ) ? 'Y':'N');
		printf("The RDSEED instruction\n");
		printf("  ippCPUID_PREFETCHW  = ");
		printf("%c\t%c\t",( mask & ippCPUID_PREFETCHW ) ? 'Y':'N',( emask & ippCPUID_PREFETCHW ) ? 'Y':'N');
		printf("The PREFETCHW instruction\n");
		printf("  ippCPUID_KNC        = ");
		printf("%c\t%c\t",( mask & ippCPUID_KNC ) ? 'Y':'N',( emask & ippCPUID_KNC ) ? 'Y':'N');
		printf("Intel(R) Xeon Phi(TM) Coprocessor instruction set\n");
	}
}
