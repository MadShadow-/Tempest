#pragma once

#include <dxgi1_6.h>
#include <d3d12.h>

namespace Tempest {
namespace Detail {

template<class T>
GUID uuid();

template<>
inline GUID uuid<ID3D12Debug>(){
  return GUID{0x344488B7, 0x6846, 0x474B, {0xb9,0x89,0xf0,0x27,0x44,0x82,0x45,0xe0}};
  }

template<>
inline GUID uuid<IDXGIFactory4>(){
  return GUID{0x1BC6EA02, 0xEF36, 0x464F, {0xbf,0x0c,0x21,0xca,0x39,0xe5,0x16,0x8a}};
  }

template<>
inline GUID uuid<ID3D12Device>(){
  return GUID{0x189819F1, 0x1DB6, 0x4B57, {0xbe,0x54,0x18,0x21,0x33,0x9b,0x85,0xf7}};
  }

template<>
inline GUID uuid<ID3D12CommandQueue>(){
  return GUID{0xEC870A6,  0x5D7E, 0x4C22, {0x8c,0xfc,0x5b,0xaa,0xe0,0x76,0x16,0xed}};
  }

template<>
inline GUID uuid<ID3D12Resource>(){
  return GUID{0x696442BE, 0xA72E, 0x4059, {0xbc,0x79,0x5b,0x5c,0x98,0x04,0x0f,0xad}};
  }

template<>
inline GUID uuid<ID3D12PipelineState>(){
  return GUID{0x765A30F3, 0xF624, 0x4C6F, {0xa8,0x28,0xac,0xe9,0x48,0x62,0x24,0x45}};
  }

template<>
inline GUID uuid<ID3D12RootSignature>(){
  return GUID{0xC54A6B66, 0x72DF, 0x4EE8, {0x8b,0xe5,0xa9,0x46,0xa1,0x42,0x92,0x14}};
  }
}
}
