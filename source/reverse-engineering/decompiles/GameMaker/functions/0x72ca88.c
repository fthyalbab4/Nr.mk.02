// rea decompile_all
// name: FUN_0072ca88
// address: 0x72ca88
// body: available
// range: 0x72ca88-0x72cc18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0072ca88(int param_1,HANDLE param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  PALETTEENTRY *pPVar3;
  HPALETTE pHVar4;
  uint uVar5;
  LOGPALETTE local_430 [128];
  undefined1 local_2c [18];
  byte local_1a;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_5;

  local_5 = param_3;
  GetObjectW(param_2,0x18,local_2c);
  FUN_0072b074(param_1);
  iVar1 = FUN_00727c2c(&PTR_LAB_00725010,1,param_1);
  FUN_0072c668(iVar1,param_2,local_2c);
  if (*(char *)(iVar1 + 0x20) == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_007273d0(&PTR_LAB_00725940,1,param_1);
  }
  if (local_5 == '\0') {
    local_14 = 0;
  }
  else {
    local_14 = FUN_007273d0(&PTR_LAB_00725b10,1,param_1);
  }
  local_c = FUN_007273d0(&PTR_LAB_00725d40,1,param_1);
  local_10 = FUN_007273d0(&PTR_LAB_00724eb0,1,param_1);
  FUN_00726ec0(*(undefined4 *)(param_1 + 0x138),iVar1);
  if (*(char *)(iVar1 + 0x20) != '\0') {
    FUN_00726ec0(*(undefined4 *)(param_1 + 0x138),iVar2);
  }
  if (local_5 != '\0') {
    FUN_00726ec0(*(undefined4 *)(param_1 + 0x138),local_14);
  }
  FUN_00726ec0(*(undefined4 *)(param_1 + 0x138),local_c);
  FUN_00726ec0(*(undefined4 *)(param_1 + 0x138),local_10);
  if (*(char *)(iVar1 + 0x20) != '\0') {
    *(int *)(iVar2 + 0x14) = 1 << (local_1a & 0x1f);
    FUN_00404f08(local_430,0x404,0);
    local_430[0].palVersion = 0x300;
    local_430[0].palNumEntries = 1 << (local_1a & 0x1f);
    uVar5 = (uint)local_430[0].palNumEntries;
    if (-1 < (int)(uVar5 - 1)) {
      iVar2 = 0;
      pPVar3 = local_430[0].palPalEntry;
      do {
        pPVar3->peRed = *(BYTE *)(iVar1 + 0x4b + iVar2 * 4);
        pPVar3->peGreen = *(BYTE *)(iVar1 + 0x4a + iVar2 * 4);
        pPVar3->peBlue = *(BYTE *)(iVar1 + 0x49 + iVar2 * 4);
        iVar2 = iVar2 + 1;
        pPVar3 = pPVar3 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    pHVar4 = CreatePalette(local_430);
    FUN_0072db20(param_1,pHVar4,0);
  }
  if (local_5 != '\0') {
    FUN_00728394(local_14,param_4);
  }
  return;
}
