#include <iostream>
#include "Converter/TextureConverter.h"
#include <cassert>

int main(int argc, char* argv[]) {
	printf("Hello,World!\n");

	for (int i = 0; i < argc; i++) {
		printf(argv[i]);

		printf("\n");
	}

	assert(argc >= NumArgument);

	//COMライブラリの初期化
	HRESULT hr = CoInitializeEx(nullptr,COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//テクスチャコンバーター
	TextureConverter converter;

	//テクスチャ変換
	converter.ConvertTextureWICToDDS(argv[kFilePath]);

	//COMライブラリの終了
	CoUninitialize();

	system("pause");
	return 0;
}