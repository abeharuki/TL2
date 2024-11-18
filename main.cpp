#include <iostream>
#include "Converter/TextureConverter.h"
#include <cassert>

int main(int argc, char* argv[]) {
	if (argc < NumArgument) {
		//使いかたを表示
		TextureConverter::OutputUsage();
		return 0;
	}

	//オプションの数
	int numOptions = argc - NumArgument;
	//オプション配列(ダブルポインタ)
	char** options = argv + NumArgument;

	assert(argc >= NumArgument);

	//COMライブラリの初期化
	HRESULT hr = CoInitializeEx(nullptr,COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//テクスチャコンバーター
	TextureConverter converter;

	//テクスチャ変換
	converter.ConvertTextureWICToDDS(argv[kFilePath],numOptions,options);

	//COMライブラリの終了
	CoUninitialize();

	//system("pause");
	return 0;
}