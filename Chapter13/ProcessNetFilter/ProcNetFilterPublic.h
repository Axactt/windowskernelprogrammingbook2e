#pragma once

#include <initguid.h>

#define PROCNETFILTER_DEVICE 0x8003

#define IOCTL_PNF_BLOCK_PROCESS		CTL_CODE(PROCNETFILTER_DEVICE, 0x800, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_PNF_PERMIT_PROCESS	CTL_CODE(PROCNETFILTER_DEVICE, 0x801, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_PNF_CLEAR				CTL_CODE(PROCNETFILTER_DEVICE, 0x802, METHOD_NEITHER, FILE_ANY_ACCESS)

// {5027C277-201A-4AAF-B8EC-95C05E857059}
DEFINE_GUID(GUID_CALLOUT_PROCESS_BLOCK_V4, 0x5027c277, 0x201a, 0x4aaf, 0xb8, 0xec, 0x95, 0xc0, 0x5e, 0x85, 0x70, 0x59);

// {CF51FD24-566F-4C6D-9BC9-8013E9875E7E}
DEFINE_GUID(GUID_CALLOUT_PROCESS_BLOCK_V6, 0xcf51fd24, 0x566f, 0x4c6d, 0x9b, 0xc9, 0x80, 0x13, 0xe9, 0x87, 0x5e, 0x7e);

// {200E35C6-7182-4F9C-97DF-34028A225BEC}
DEFINE_GUID(GUID_CALLOUT_PROCESS_BLOCK_UDP_V4, 0x200e35c6, 0x7182, 0x4f9c, 0x97, 0xdf, 0x34, 0x02, 0x8a, 0x22, 0x5b, 0xec);

// {C8AF8E6D-1D0C-4547-A2A1-7593C3396BAF}
DEFINE_GUID(GUID_CALLOUT_PROCESS_BLOCK_UDP_V6, 0xc8af8e6d, 0x1d0c, 0x4547, 0xa2, 0xa1, 0x75, 0x93, 0xc3, 0x39, 0x6b, 0xaf);