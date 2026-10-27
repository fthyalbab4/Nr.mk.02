// rea decompile_all
// name: FUN_004b9260
// address: 0x4b9260
// body: available
// range: 0x4b9260-0x4b93cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b9260(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  HWND pHVar3;
  int iVar4;

  DAT_0068f26c = param_1;
  param_1[5] = 0;
  GetCursorPos((LPPOINT)&DAT_0068f278);
  piVar1 = DAT_0068f26c;
  DAT_0068f26c[3] = DAT_0068f278;
  piVar1[4] = DAT_0068f27c;
  DAT_0068f280 = GetCursor();
  DAT_0068f274 = FUN_004b8434(DAT_0068f26c);
  DAT_0068f284 = param_3;
  cVar2 = FUN_004061f8(param_1,&LAB_004ad37c);
  if (cVar2 == '\0') {
    if (param_2 == '\0') {
      DAT_0068f288 = '\0';
    }
    else {
      DAT_0068f288 = '\x01';
    }
  }
  else {
    iVar4 = param_1[0x13];
    if (param_1[0x15] == iVar4 || param_1[0x15] - iVar4 < 0) {
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
    else {
      *(double *)(param_1 + 10) =
           (double)(param_1[3] - iVar4) / (double)(param_1[0x15] - param_1[0x13]);
    }
    if (param_1[0x16] - param_1[0x14] < 1) {
      param_1[0xc] = 0;
      param_1[0xd] = 0;
    }
    else {
      *(double *)(param_1 + 0xc) =
           (double)(param_1[4] - param_1[0x14]) / (double)(param_1[0x16] - param_1[0x14]);
    }
    if (param_2 == '\0') {
      DAT_0068f288 = '\0';
    }
    else {
      DAT_0068f288 = '\x02';
      (**(code **)(*param_1 + 0x30))();
    }
  }
  DAT_0068f28c = (**(code **)(*DAT_0068f26c + 8))();
  if (DAT_0068f28c != 0) {
    iVar4 = DAT_0068f27c;
    pHVar3 = GetDesktopWindow();
    FUN_004c6f68(DAT_0068f28c,pHVar3,DAT_0068f278,iVar4);
  }
  DAT_0068f294 = FUN_00405fac(&LAB_004b8140,1);
  if (DAT_0068f288 != '\0') {
    FUN_004b8f78(&DAT_0068f278);
  }
  return;
}
