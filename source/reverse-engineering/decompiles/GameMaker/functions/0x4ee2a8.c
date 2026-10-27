// rea decompile_all
// name: FUN_004ee2a8
// address: 0x4ee2a8
// body: available
// range: 0x4ee2a8-0x4ee45c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ee2a8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int local_14;

  if (param_2 != param_3) {
    if ((*(byte *)(param_1 + 7) & 1) == 0) {
      bVar4 = 0x1f;
    }
    else {
      bVar4 = *(byte *)(param_1 + 0x22);
    }
    if ((bVar4 & 1) == 0) {
      iVar1 = param_1[0x10];
    }
    else {
      iVar1 = MulDiv(param_1[0x10],param_2,param_3);
    }
    if ((bVar4 & 2) == 0) {
      iVar2 = param_1[0x11];
    }
    else {
      iVar2 = MulDiv(param_1[0x11],param_2,param_3);
    }
    if (((bVar4 & 4) == 0) || ((*(byte *)((int)param_1 + 0x51) & 1) != 0)) {
      iVar3 = param_1[0x12];
    }
    else if ((bVar4 & 1) == 0) {
      iVar3 = MulDiv(param_1[0x12],param_2,param_3);
    }
    else {
      iVar3 = MulDiv(param_1[0x10] + param_1[0x12],param_2,param_3);
      iVar3 = iVar3 - iVar1;
    }
    if (((bVar4 & 8) == 0) || ((*(byte *)((int)param_1 + 0x51) & 2) != 0)) {
      local_14 = param_1[0x13];
    }
    else if ((bVar4 & 2) == 0) {
      local_14 = MulDiv(param_1[0x13],param_2,param_3);
    }
    else {
      local_14 = MulDiv(param_1[0x11] + param_1[0x13],param_2,param_3);
      local_14 = local_14 - iVar2;
    }
    FUN_004ee0c8(param_1,param_2,param_3,param_3,iVar2,iVar3);
    FUN_004ee14c(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x98))(param_1,iVar1,iVar2,local_14,iVar3);
    if ((bVar4 & 5) != 0) {
      iVar1 = MulDiv(param_1[99],param_2,local_14);
      param_1[99] = iVar1;
    }
    if ((bVar4 & 10) != 0) {
      iVar1 = MulDiv(param_1[100],param_2,local_14);
      param_1[100] = iVar1;
    }
    if ((*(char *)((int)param_1 + 0x5b) == '\0') && ((bVar4 & 0x10) != 0)) {
      iVar1 = param_1[0x19];
      iVar2 = FUN_0045b450(iVar1);
      iVar2 = MulDiv(iVar2,param_2,local_14);
      FUN_0045b46c(iVar1,iVar2);
    }
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  return;
}
