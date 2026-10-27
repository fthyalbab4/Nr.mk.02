// rea decompile_all
// name: FUN_004c1090
// address: 0x4c1090
// body: available
// range: 0x4c1090-0x4c114c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004c1090(int param_1,undefined4 *param_2)

{
  HWND pHVar1;
  HWND pHVar2;
  int iVar3;
  undefined4 uVar4;
  short local_20;
  short sStack_1e;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;

  pHVar1 = (HWND)FUN_004c45dc(param_1);
  pHVar2 = GetCapture();
  if (pHVar1 == pHVar2) {
    if ((DAT_006818fc == 0) || (iVar3 = DAT_006818fc, param_1 != *(int *)(DAT_006818fc + 0x34))) {
      iVar3 = 0;
    }
  }
  else {
    local_20 = (short)param_2[2];
    local_1c = (int)local_20;
    sStack_1e = (short)((uint)param_2[2] >> 0x10);
    local_18 = (int)sStack_1e;
    iVar3 = FUN_004c0fcc(param_1,&local_1c,0,0,0);
  }
  if (iVar3 != 0) {
    local_14 = (int)*(short *)(param_2 + 2) - *(int *)(iVar3 + 0x40);
    local_10 = (int)*(short *)((int)param_2 + 10) - *(int *)(iVar3 + 0x44);
    uVar4 = FUN_004bcb48(iVar3,*param_2,param_2[1],local_14 & 0xffff | local_10 * 0x10000);
    param_2[3] = uVar4;
  }
  return iVar3 != 0;
}
