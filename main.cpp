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

	//COM���C�u�����̏�����
	HRESULT hr = CoInitializeEx(nullptr,COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//�e�N�X�`���R���o�[�^�[
	TextureConverter converter;

	//�e�N�X�`���ϊ�
	converter.ConvertTextureWICToDDS(argv[kFilePath]);

	//COM���C�u�����̏I��
	CoUninitialize();

	system("pause");
	return 0;
}