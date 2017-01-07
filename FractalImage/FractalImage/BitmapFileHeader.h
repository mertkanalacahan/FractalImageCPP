#ifndef BITMAPFILEHEADER_H_
#define BITMAPFILEHEADER_H_

#pragma pack(push,2)

namespace TryharderMedia {

	struct BitmapFileHeader {
		char header[2]{ 'B','M' };
		int32_t fileSize;
		int32_t reserved{ 0 };
		int32_t dataOffset;
	};

}
#pragma pack(pop)

#endif
