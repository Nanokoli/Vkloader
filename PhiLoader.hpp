#pragma once
#include <map>
#include <string>
#include <string_view>
#include <vector>
#include <iostream>

typedef void* LIBHANNLE;
//template<size_t bytes>
struct LONGBITSET {
	using LONGBITSETbasic = uint8_t;
	size_t bytes;
	uint16_t bits = 0;
	LONGBITSET(size_t sizec, uint16_t bitsize):bytes(sizec- sizeof(LONGBITSET)), bits(bitsize){
	}
	inline LONGBITSETbasic* GetNextExtendClassPointer()const {
		if (bytes == 0)throw "bytes==0";
		unsigned char* pointer = (unsigned char*)this;
		pointer += sizeof(LONGBITSET);
		return (LONGBITSETbasic*)pointer;
	}
	inline void AllSetTrue() {
		memset(GetNextExtendClassPointer(), 255, bytes);
	}
	inline void AllSetFalse() {
		memset(GetNextExtendClassPointer(), 0, bytes);
	}
	inline bool IsAllTrue()const {
		LONGBITSETbasic* ancp = GetNextExtendClassPointer();
		LONGBITSETbasic mask;
		for (size_t i = 0; i < bits; i++)
		{
			mask = 1 << ((i) % (sizeof(LONGBITSETbasic) * 8));
			if (((*(ancp+((i) / (sizeof(LONGBITSETbasic) * 8))) & mask) == 0))
			{
				return false;
			}
		}
		return true;
	}
	inline bool IsAllFalse()const {
		LONGBITSETbasic* ancp = GetNextExtendClassPointer();
		LONGBITSETbasic mask;
		for (size_t i = 0; i < bits; i++)
		{
			mask = 1 << ((i) % (sizeof(LONGBITSETbasic) * 8));
			if (((*(ancp + ((i) / (sizeof(LONGBITSETbasic) * 8))) & mask) != 0))
			{
				return false;
			}
		}
		return true;
	}
	inline void SetBit(size_t bit, bool var) {
		LONGBITSETbasic* ancp = GetNextExtendClassPointer();
		ancp += ((bit) / (sizeof(LONGBITSETbasic) * 8));
		LONGBITSETbasic mask = 1 << ((bit) % (sizeof(LONGBITSETbasic) * 8));
		*ancp =( var ? (*ancp | mask) : (*ancp & ~mask));
	}
	inline bool GetBit(size_t bit) const {
		LONGBITSETbasic* ancp = GetNextExtendClassPointer();
		LONGBITSETbasic mask = 1 << ((bit) % (sizeof(LONGBITSETbasic) * 8));
		return ((*(ancp + ((bit) / (sizeof(LONGBITSETbasic) * 8))) & mask) != 0);
	}
};
typedef void (*APIProc)(void);
extern APIProc GetPtrFrom_handle(LIBHANNLE handle, std::string_view name);
template<typename TYPE1, typename TYPE2, typename TYPE3>
class ExtendsMap {
public:
	struct Element
	{
		TYPE1 type1;
		TYPE2 type2;
		TYPE3 type3;
	};
	std::map<TYPE1, Element*> TYPE1map;
	std::map<TYPE3, Element*> TYPE3map;
	std::vector<Element> dates;
	ExtendsMap(const std::vector<Element>& asdasd) {
		size_t i = 0;
		dates.resize(asdasd.size());
		for ( auto& ele : asdasd)
		{
			dates[i]=ele;
			TYPE1map[ele.type1] = &dates[i];
			TYPE3map[ele.type3] = &dates[i];
			i++;
		}
	
	}
};
