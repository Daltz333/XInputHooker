#pragma once

//
// Thanks to: https://github.com/DJm00n
// 

// {EC87F1E3-C13B-4100-B5F7-8B84D54260CB}
DEFINE_GUID(XUSB_INTERFACE_CLASS_GUID, 0xEC87F1E3, 0xC13B, 0x4100, 0xB5, 0xF7, 0x8B, 0x84, 0xD5, 0x42, 0x60, 0xCB);

// xusb22.sys IOCTLs
#define FILE_DEVICE_XUSB    0x8000
#define IOCTL_INDEX_XUSB    0x0800

#define IOCTL_XUSB_GET_INFORMATION              /*0x80006000*/ CTL_CODE(FILE_DEVICE_XUSB, IOCTL_INDEX_XUSB + 0, METHOD_BUFFERED, FILE_READ_ACCESS)
#define IOCTL_XUSB_GET_CAPABILITIES             /*0x8000A010*/ CTL_CODE(FILE_DEVICE_XUSB, IOCTL_INDEX_XUSB + 1, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_XUSB_GET_LED_STATE                /*0x8000A01C*/ CTL_CODE(FILE_DEVICE_XUSB, IOCTL_INDEX_XUSB + 2, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_XUSB_GET_STATE                    /*0x8000E004*/ CTL_CODE(FILE_DEVICE_XUSB, IOCTL_INDEX_XUSB + 3, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_XUSB_SET_STATE                    /*0x8000E008*/ CTL_CODE(FILE_DEVICE_XUSB, IOCTL_INDEX_XUSB + 4, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define IOCTL_XUSB_WAIT_GUIDE_BUTTON            /*0x8000E00C*/ CTL_CODE(FILE_DEVICE_XUSB, IOCTL_INDEX_XUSB + 5, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_XUSB_GET_BATTERY_INFORMATION      /*0x8000E014*/ CTL_CODE(FILE_DEVICE_XUSB, IOCTL_INDEX_XUSB + 6, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_XUSB_POWER_DOWN                   /*0x8000E018*/ CTL_CODE(FILE_DEVICE_XUSB, IOCTL_INDEX_XUSB + 7, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define IOCTL_XUSB_GET_AUDIO_DEVICE_INFORMATION /*0x8000E020*/ CTL_CODE(FILE_DEVICE_XUSB, IOCTL_INDEX_XUSB + 8, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_XUSB_WAIT_FOR_INPUT               /*0x8000E3AC*/ CTL_CODE(FILE_DEVICE_XUSB, IOCTL_INDEX_XUSB + 235, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_XUSB_GET_INFORMATION_EX           /*0x8000E3FC*/ CTL_CODE(FILE_DEVICE_XUSB, IOCTL_INDEX_XUSB + 255, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)