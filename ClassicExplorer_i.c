

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 20:14:07 2038
 */
/* Compiler settings for ClassicExplorer.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IAddressBarHostBand,0x31371D7C,0xE550,0x4870,0xA3,0xD2,0x6C,0x3A,0x1A,0x55,0x31,0x68);


MIDL_DEFINE_GUID(IID, IID_IThrobberBand,0x3E0BC6FD,0xA487,0x4438,0xB6,0x69,0x85,0x9D,0x38,0xF5,0x94,0xA2);


MIDL_DEFINE_GUID(IID, IID_IBrowserHelperObject,0x1D09EB49,0x083A,0x4679,0xA1,0xD5,0x2F,0x15,0xCA,0xD4,0xD8,0x8F);


MIDL_DEFINE_GUID(IID, LIBID_AddressBarLib,0x205F9779,0x62D5,0x4E06,0x8D,0xAD,0x8E,0x15,0x0F,0xFA,0x38,0xDB);


MIDL_DEFINE_GUID(CLSID, CLSID_AddressBarHostBand,0xFC5A7312,0xCFFE,0x4BF1,0x83,0xE8,0x22,0xD4,0x4C,0x04,0x05,0x68);


MIDL_DEFINE_GUID(CLSID, CLSID_ThrobberBand,0x9F7E1105,0xEB11,0x4A41,0x85,0x7A,0xF7,0xE1,0x49,0x4D,0x38,0x18);


MIDL_DEFINE_GUID(CLSID, CLSID_BrowserHelperObject,0x844CFA4E,0x7D74,0x4C80,0xB1,0x34,0xD2,0x14,0xC9,0x69,0x9F,0x98);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



