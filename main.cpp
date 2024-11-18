#include <iostream>
#include "Converter/TextureConverter.h"
#include <cassert>

int main(int argc, char* argv[]) {
	if (argc < NumArgument) {
		//�g��������\��
		TextureConverter::OutputUsage();
		return 0;
	}

	//�I�v�V�����̐�
	int numOptions = argc - NumArgument;
	//�I�v�V�����z��(�_�u���|�C���^)
	char** options = argv + NumArgument;

	assert(argc >= NumArgument);

	//COM���C�u�����̏�����
	HRESULT hr = CoInitializeEx(nullptr,COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//�e�N�X�`���R���o�[�^�[
	TextureConverter converter;

	//�e�N�X�`���ϊ�
	converter.ConvertTextureWICToDDS(argv[kFilePath],numOptions,options);

	//COM���C�u�����̏I��
	CoUninitialize();

	//system("pause");
	return 0;
}