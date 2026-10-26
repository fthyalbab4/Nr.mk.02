// rea decompile_all
// name: FUN_0053cc38
// address: 0x53cc38
// body: available
// range: 0x53cc38-0x53cd0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0053cc38(int param_1,char param_2,HPALETTE param_3)

{
  byte *pbVar1;
  LPPALETTEENTRY pPalEntries;
  UINT UVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  HPALETTE extraout_ECX;
  char extraout_DL;
  char cVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;

  cVar6 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    cVar6 = extraout_DL;
  }
  FUN_0053cc00(param_1,0,param_3);
  pPalEntries = (LPPALETTEENTRY)FUN_0040431c(0x400);
  *(LPPALETTEENTRY *)(param_1 + 8) = pPalEntries;
  UVar2 = GetPaletteEntries(param_3,0,0x100,pPalEntries);
  *(UINT *)(param_1 + 4) = UVar2;
  uVar3 = FUN_0040431c(0x10000);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  iVar4 = 0;
  do {
    *(undefined2 *)(*(int *)(param_1 + 0xc) + iVar4 * 2) = 0xffff;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x8000);
  iVar4 = *(int *)(param_1 + 4);
  if ((0 < iVar4) && (-1 < iVar4 + -1)) {
    iVar5 = 0;
    do {
      pbVar1 = (byte *)(*(int *)(param_1 + 8) + iVar5 * 4);
      uVar7 = (uint)(pbVar1[1] & 0xf8) * 4 | (uint)(*pbVar1 >> 3) | (uint)(pbVar1[2] & 0xf8) << 7;
      if (*(short *)(*(int *)(param_1 + 0xc) + uVar7 * 2) == -1) {
        *(short *)(*(int *)(param_1 + 0xc) + uVar7 * 2) = (short)iVar5;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (cVar6 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_24;
  }
  return param_1;
}
