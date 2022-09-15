#pragma once
#if defined (_WIN32)
#include <windows.h>
#  ifdef CY_SDKDLL
#    define CY_SDK_IMPORT_EXPORT __declspec(dllexport)
#  elif CY_SDKLIB 
#    define CY_SDK_IMPORT_EXPORT 
#  else
#    define CY_SDK_IMPORT_EXPORT __declspec(dllimport)
#  endif
#else
#    define CY_SDK_IMPORT_EXPORT 
#    define WINAPI
#    define DWORD unsigned int
#    define BYTE unsigned char
#    define UINT64 unsigned int
#    define WORD unsigned short
#    define UINT unsigned int
#endif

#define CY_NET_STATUS_SUCCESS        0x0000

// CP Status Codes
#define CY_CP_SUCCESS             0x0000
#define CY_CP_NOT_IMPLEMENTED     0x8001
#define CY_CP_INVALID_PARAMETER   0x8002
#define CY_CP_INVALID_ADDRESS		  0x8003
#define CY_CP_WRITE_PROTECT		    0x8004
#define CY_CP_BAD_ALIGNMENT       0x8005
#define CY_CP_ACCESS_DENIED       0x8006
#define CY_CP_BUSY                0x8007
#define CY_CP_MSG_TIMEOUT         0x800B
#define CY_CP_INVALID_HEADER      0x800E
#define CY_CP_WRONG_CONFIG        0x800F
#define CY_CP_ERROR               0x8FFF

// Net Status Codes
#define CY_NET_STATUS_RESEND_NOT_SUPPORTED          0xA001
#define CY_NET_STATUS_DSI_ENDPOINT_HALTED           0xA002
#define CY_NET_STATUS_SI_PAYLOAD_SIZE_NOT_ALIGNED   0xA003
#define CY_NET_STATUS_SI_REGISTERS_INCONSISTENT     0xA004
#define CY_NET_STATUS_DATA_DISCARDED                0xA100
#define CY_NET_STATUS_DATA_OVERRUN                  0xA101

// Device Specific Status Codes
#define CY_DS_STATUS_ERROR_USB_OPEN                    0xC001
#define CY_DS_STATUS_ERROR_CONFIG_DESCRIPTOR           0xC002
#define CY_DS_STATUS_NO_INTERFACES                     0xC003
#define CY_DS_STATUS_ERROR_GET_DESCRIPTOR              0xC004
#define CY_DS_STATUS_ERROR_STRING_DESCRIPTOR           0xC005
#define CY_DS_STATUS_ERROR_OPEN_CONTROL_INTERFACE      0xC006
#define CY_DS_STATUS_CONTROL_INTERFACE_NOT_OPEN        0xC007
#define CY_DS_STATUS_WRONG_CONTROL_PREFIX              0xC008
#define CY_DS_STATUS_WRONG_ACK                         0xC009
#define CY_DS_STATUS_WRONG_REQUEST_ID                  0xC00A
#define CY_DS_STATUS_XML_SIZE_IS_0                     0xC00B
#define CY_DS_STATUS_XML_READ_MEM_ERROR                0xC00C
#define CY_DS_STATUS_ERROR_OPEN_XML_FILE               0xC00D
#define CY_DS_STATUS_XML_WRITE_MEM_ERROR               0xC00E
#define CY_DS_STATUS_WRITE_MANTFEST_TABLE_ERROR        0xC00F
#define CY_DS_STATUS_NO_EVENT_INTERFACE_AVAILABLE      0xC010
#define CY_DS_STATUS_ERROR_OPEN_EVENT_INTERFACE        0xC011
#define CY_DS_STATUS_EVENT_INTERFACE_NOT_OPEN          0xC012
#define CY_DS_STATUS_NO_EVENT_SUPPORTED                0xC013
#define CY_DS_STATUS_NO_STREAM_INTERFACE_AVAILABLE     0xC014
#define CY_DS_STATUS_ERROR_OPEN_STREAM_INTERFACE       0xC015
#define CY_DS_STATUS_STREAM_INTERFACE_NOT_OPEN         0xC016
#define CY_DS_STATUS_NO_IMAGE_AVAILABLE                0xC017
#define CY_DS_STATUS_IMAGE_TIMEOUT                     0xC018
#define CY_DS_STATUS_IMAGE_MISSING_PACKETS             0xC019
#define CY_DS_STATUS_INVALID_HANDLE                    0xC01A
#define CY_DS_STATUS_ERROR_CALL_FUNCTION               0xC01B
#define CY_DS_STATUS_DEVICE_NOT_FOUND                  0xC01C
#define CY_DS_STATUS_XML_UNZIP_ERROR                   0xC01D

// Pixel Format
#define CY_Mono1p       0x01010037
#define CY_Mono2p       0x01020038
#define CY_Mono4p       0x01040039
#define CY_Mono8        0x01080001
#define CY_Mono10       0x01100003
#define CY_Mono10p      0x010a0046
#define CY_Mono12       0x01100005
#define CY_Mono12p      0x010c0047
#define CY_Mono14       0x01100025
#define CY_Mono16       0x01100007

#define CY_BayerGR8     0x01080008
#define CY_BayerGR10    0x0110000C
#define CY_BayerGR10p   0x010A0056
#define CY_BayerGR12    0x01100010
#define CY_BayerGR12p   0x010C0057
#define CY_BayerGR16    0x0110002E

#define CY_BayerRG8     0x01080009
#define CY_BayerRG10    0x0110000D
#define CY_BayerRG10p   0x010A0058
#define CY_BayerRG12    0x01100011
#define CY_BayerRG12p   0x010C0059
#define CY_BayerRG16    0x0110002F

#define CY_BayerGB8     0x0108000A
#define CY_BayerGB10    0x0110000E
#define CY_BayerGB10p   0x010A0054
#define CY_BayerGB12    0x01100012
#define CY_BayerGB12p   0x010C0055
#define CY_BayerGB16    0x01100030

#define CY_BayerBG8     0x0108000B
#define CY_BayerBG10    0x0110000F
#define CY_BayerBG10p   0x010A0052
#define CY_BayerBG12    0x01100013
#define CY_BayerBG12p   0x010C0053
#define CY_BayerBG16    0x01100031

#define CY_BGR8         0x02180015
#define CY_BGR10        0x02300019
#define CY_BGR10p       0x021E0048
#define CY_BGR12        0x0230001B
#define CY_BGR12p       0x02240049
#define CY_BGR14        0x0230004A
#define CY_BGR16        0x0230004B
#define CY_BGRa8        0x02200017
#define CY_BGRa10       0x0240004C
#define CY_BGRa10p      0x0228004D
#define CY_BGRa12       0x0240004E
#define CY_BGRa12p      0x0230004F
#define CY_BGRa14       0x02400050
#define CY_BGRa16       0x02400051

#define CY_YCbCr8       0x0218005B
#define CY_YCbCr422_8   0x0210003B
#define CY_YCbCr411_8   0x020C005A

#define CY_EFFECTIVE_PIXEL_SIZE_MASK  0x00FF0000
#define CY_EFFECTIVE_PIXEL_SIZE_SHIFT 16  

typedef WORD CY_NET_ERROR;

// Handles 
typedef void * CY_DISCOVERY_HANDLE;         // Discovery handle
typedef void * CY_DEVICE_HANDLE;            // Device handle
typedef void * CY_CONTROL_HANDLE;           // Device control handle
typedef void * CY_EVENT_HANDLE;             // Event handle
typedef void * CY_STREAM_HANDLE;            // Stream handle

                                            //#ifndef U3VDLL

#pragma pack(push,1)

typedef struct
{
    DWORD  HwVersion;                       // version
    DWORD  SfVersion;                       // Vision version
    char   DeviceGUID[16];                  // Index to Vision GUID string.
    char   VendorName[64];                  // Index to Vendor Name string.
    char   ModelName[64];                   // Index to Model Name string
    char   FamilyName[64];                  // Index to Family Name string
    char   DeviceVersion[64];               // Index to Device Version string
    char   ManufacturerInfo[64];            // Index to Manufacturer Info string
    char   SerialNumber[64];                // Index to Serial Number string
    char   UserDefinedName[64];             // Index to Defined Name string
    BYTE   SpeedSupport;                    // Bitmask indicating the bus speeds supported
    BYTE   OpenStatus;                      // Status if device is already opened
} CY_NET_DEVICE_INFO, *PCY_NET_DEVICE_INFO;

typedef struct
{
    UINT64 FrameCounter;
    UINT64 Timestamp;
    DWORD  PixelFormat;
    DWORD  SizeX;
    DWORD  SizeY;
    DWORD  OffsetX;
    DWORD  OffsetY;
    WORD   PaddingX;
    DWORD  MissingPackets;
}CY_IMAGE_HEADER, *PCY_IMAGE_HEADER;

#pragma pack(pop)

//#endif

#define CY_DEVICE_NOT_OPEN     0
#define CY_DEVICE_OPEN         1

#define CY_DETAILED_LOG_OFF       0
#define CY_DETAILED_LOG_INFO      1
#define CY_DETAILED_LOG_WARNING   2
#define CY_DETAILED_LOG_ERROR     4

typedef BYTE(WINAPI *CY_LOG_CALLBACK_FUNC)(BYTE uDetailedLog, const char *pLogString);
typedef BYTE(WINAPI *CY_EVENT_CALLBACK_FUNC)(WORD uEventId, UINT64 uTimestamp, int uDataLength, BYTE *pData);
typedef BYTE(WINAPI *CY_SAVE_XML_CALLBACK_FUNC)(int uCount);


#ifdef __cplusplus
extern "C" {
#endif

    // Discovery
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_DiscoveryDevices(WORD *uNumberOfDevices);
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_GetDeviceInfo(WORD uDevice, PCY_NET_DEVICE_INFO pDeviceInfo);

    // Device
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_OpenDevice(char *pDeviceGUID, CY_DEVICE_HANDLE *pDevice, CY_LOG_CALLBACK_FUNC pCallbackFunction, BYTE uDetailedLog);
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_CloseDevice(CY_DEVICE_HANDLE hDevice);
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_SetDetailedLog(CY_DEVICE_HANDLE hDevice, BYTE uDetailedLog);
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_GetDetailedLog(CY_DEVICE_HANDLE hDevice, BYTE *uDetailedLog);

    // Control
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_OpenControl(CY_DEVICE_HANDLE hDevice, CY_CONTROL_HANDLE *pControl);
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_CloseControl(CY_CONTROL_HANDLE hControl);
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_ReadMem(CY_CONTROL_HANDLE hControl, UINT64 uAddress, WORD uLength, void *pData);
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_WriteMem(CY_CONTROL_HANDLE hControl, UINT64 uAddress, WORD uLength, void *pData);
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_ReadXml(CY_CONTROL_HANDLE hControl, BYTE **pXmlBuffer, DWORD *pXmlSize, BYTE nSaveXml);
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_WriteXml(CY_CONTROL_HANDLE hControl, char *pXmlName, DWORD nXmlAddress, DWORD nEepromAddress, DWORD nFileVersion, WORD nSchemaVersion, CY_SAVE_XML_CALLBACK_FUNC pCallback);
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_WriteParamTable(CY_CONTROL_HANDLE hControl, char *pXmlName);

    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_MaximumDeviceResponseTime(CY_CONTROL_HANDLE hControl, DWORD *nMaximumDeviceResponseTime);

    // Event
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_OpenEvent(CY_DEVICE_HANDLE hDevice, CY_CONTROL_HANDLE hControl, CY_EVENT_HANDLE *pEvent, CY_EVENT_CALLBACK_FUNC pCallbackFunction, DWORD uTimeout);
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_CloseEvent(CY_EVENT_HANDLE hEvent);

    // Stream
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_OpenStream(CY_DEVICE_HANDLE hDevice, CY_CONTROL_HANDLE hControl, CY_STREAM_HANDLE *pStream, UINT uTimeout);
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_CloseStream(CY_STREAM_HANDLE hStream);
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_AcquisitionStart(CY_STREAM_HANDLE hStream, DWORD nNumberImagesToAcquire);
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_AcquisitionStop(CY_STREAM_HANDLE hStream, UINT64 *pNumImagesAcquired, UINT64 *pNumImagesLostQueueUnderrun);
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_GetImage(CY_STREAM_HANDLE hStream, void *pBuffer, DWORD uTimeout, PCY_IMAGE_HEADER pImageHeader);

    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_GetTransferSize(CY_STREAM_HANDLE hStream, DWORD *uTransferSize);
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_SetTransferSize(CY_STREAM_HANDLE hStream, DWORD uTransferSize);

    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_GetBufferCount(CY_STREAM_HANDLE hStream, DWORD *uBufferCount);
    CY_SDK_IMPORT_EXPORT CY_NET_ERROR WINAPI CY_NET_SetBufferCount(CY_STREAM_HANDLE hStream, DWORD uBufferCount);


#ifdef __cplusplus
}
#endif


