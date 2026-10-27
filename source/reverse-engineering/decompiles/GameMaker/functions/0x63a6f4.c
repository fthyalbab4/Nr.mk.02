// rea decompile_all
// name: FUN_0063a6f4
// address: 0x63a6f4
// body: available
// range: 0x63a6f4-0x63a805 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0063a6f4(int *param_1,char param_2,int param_3)

{
  int iVar1;
  int extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00405fb0();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  (**(code **)(*param_1 + 0x2c))(param_1,0,0);
  param_1[0x33] = param_3;
  iVar1 = FUN_005b325c(&DAT_005b27dc,1);
  param_1[0x34] = iVar1;
  iVar1 = FUN_005b325c(&DAT_005b27dc,1);
  param_1[0x35] = iVar1;
  iVar1 = FUN_0062dba4(&DAT_0062d408,1);
  param_1[0x36] = iVar1;
  iVar1 = FUN_0062dba4(&DAT_0062d408,1);
  param_1[0x37] = iVar1;
  iVar1 = FUN_00701bf8(&DAT_00700d94,1);
  param_1[0x38] = iVar1;
  iVar1 = FUN_00701bf8(&DAT_00700d94,1);
  param_1[0x39] = iVar1;
  if (param_3 == 0) {
    param_1[0x1b] = 0x80244;
  }
  else {
    param_1[0x1b] = 0x80204;
  }
  FUN_00407eb8(param_1 + 0x1c,
               L"All Supported File Types|*.png;*.psp;*.cut;*.gif;*.pcd;*.pic;*.cel;*.pbm;*.pgm;*.ppm;*.pdd;*.psd;*.bw;*.rgb;*.rgba;*.sgi;*.rla;*.rpf;*.scr;*.pcc;*.pcx;*.eps;*.fax;*.tif;*.tiff;*.icb;*.tga;*.vda;*.vst;*.win;*.dib;*.rle;*.jpeg;*.jpe;*.jpg;*.jfif;*.emf;*.wmf;*.ico;*.bmp"
              );
  if (param_1[0x33] == 0) {
    FUN_004082dc(param_1 + 0x1c,L";*.gmspr|Game Maker Sprite Files|*.gmspr");
  }
  if (param_1[0x33] == 1) {
    FUN_004082dc(param_1 + 0x1c,L";*.gmbck|Game Maker Background Files|*.gmbck");
  }
  FUN_004082dc(param_1 + 0x1c,
               L"|BMP Images|*.bmp|GIF Images|*.gif|JPG Images|*.jpg|PNG Images|*.png");
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_24;
  }
  return param_1;
}
