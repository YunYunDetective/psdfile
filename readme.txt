Title: psd plugin
Author: �킽�Ȃׂ����A��[��

������͂ȂɁH

PSD�𑀍삷��N���X�ł�

���r���h�ɂ���

�{�v���O�C���ł́A�r���h��boost C++ ���C�u������K�v�Ƃ��܂��B
�ȉ����擾���ă��C�u�������r���h���AVisualStudio��
�C���N���[�h�ƃ��C�u�����̃p�X��ݒ肵�Ă����Ă��������B

http://www.boost.org/

�Ȃ��Aiostreams::mapped_file_source���g�p���Ă��邽�߁A�w�b�_�����ł͂Ȃ�
�r���h������Ԃ�boost���K�v�ł��B

VS2015�ł�NuGet�p�̃p�b�P�[�W���(packages.config)��p�ӂ��Ă���̂�
�p�b�P�[�W�̕����ŕK�v�ȃt�@�C���������c��������܂���B
�茳�Ŋm�F�������ł͈ȉ��̃p�b�P�[�W�𓱓����ăr���h���m�F���Ă��܂��B
- boost / 1.66.0.0
- boost_filesystem-vc140 / 1.66.0.0
- boost_iostreams-vc140 / 1.66.0.0
- boost_system-vc140 / 1.66.0.0

��XP�T�|�[�g

VS2012�ł́A�ȉ���URL���Q�l��Update�𓱓����ĉ������B
http://blogs.msdn.com/b/jpvsblog/archive/2013/04/17/visual-studio-2012-windows-xp-visual-c.aspx

VS2015�ł́A�C���X�g�[��(�v���O�����Ƌ@�\����Ăяo���܂�)����
Visual-C++��C++�Ɋւ���Windows XP�T�|�[�g��ǉ����Ă��������B

���r���h���ʕ�

plugin/ �f�B���N�g���� psd.dll ����������܂��B

���g����

�ڍׂ� manual.tjs �Q��

�E�摜�`���ɂ���
���݁A�}���`�`�����l���ADuoTone�ALab�ȊO�̌`���̓ǂݍ��݂ɑΉ����Ă��܂����A
�ꕔ�̌`���ɂ��Ă͊ȈՓI�Ȃ��̂Ȃ̂Œ��ӂ��Ă��������B

  �v���t�@�C���ɑΉ����Ă��Ȃ����߁A�ȉ��̃t�@�C���ɂ��ẮA
  Photoshop�ł̉�ʕ\���Ƃ͐F���قȂ�܂��B

	CMYK(16/32bpp)�ARGB(32bpp)

  �ȉ��̃��[�h�ł̓��C�������݂��Ȃ����߁A�摜�f�[�^�̎擾�ɂ�
  getBlend() ���g�p���Ă�������

	2�l�r�b�g�}�b�v�A�C���f�b�N�X�J���[

�E�}�X�N�ɂ���
���C���}�X�N�����݂���ꍇ�́A�摜�ǂݍ��ݎ��ɃA���t�@�`���l����
�}�X�N�����J�荞��ł��܂��B
���̂Ƃ���v���O�C������̓}�X�N�摜��Ɨ����Ď��o�����@�͂���܂���B
�܂��N���b�s���O�}�X�N�ɂ͑Ή����Ă��܂���B

�EPSD���C���t�@�C���V�X�e��

�ȉ��̃p�X����PSD�t�@�C���̃��C���摜�𒼐ڃt�@�C���Ƃ��ă��[�h�ł��܂�

psd://PSD�t�@�C����/root/�t�H���_��/.../���C����.bmp
psd://PSD�t�@�C����/id/���C��ID.bmp

�EPSD�t�@�C�����̓x�[�X���݂̂ŏ������Ő��K������܂�
�E�t�H���_���A���C�����͑S�ď������Ő��K������Ċ܂܂��"/" �� "_" �ɒu������܂�
�E���O���d������ꍇ�͌�ɂ�����̂��D��ɂȂ�܂�

�����C�Z���X

���̃v���O�C���̃��C�Z���X�͋g���g���{�̂ɏ������Ă��������B
(zlib����������)
