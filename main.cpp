#include <iostream>
#include "Converter/TextureConverter.h"
#include <cassert>

int main(int argc, char* argv[]) {
	if (argc < NumArgument) {
		//�g��������\��
		TextureConverter::OutputUsage();
		return 0;
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

	//system("pause");
	return 0;
}