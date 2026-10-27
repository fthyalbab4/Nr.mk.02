// rea decompile_all
// name: FUN_004189a0
// address: 0x4189a0
// body: available
// range: 0x4189a0-0x418a74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x418a70 to 0x418c9a FUN_00418c9a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004189a0(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,byte param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int extraout_ECX;
  undefined4 extraout_EDX;
  undefined2 *puVar4;
  undefined2 *puVar5;
  byte bVar6;
  ushort local_2a [12];
  undefined1 local_12;
  undefined1 local_11;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  undefined2 *local_8;

  bVar6 = 0;
  local_c = DAT_00785c88;
  local_e = DAT_00785c90;
  local_10 = DAT_00785c8e;
  local_11 = DAT_00785c8c;
  local_12 = DAT_00785c8d;
  iVar1 = 0x13;
  if ((char)param_3 == '\0') {
    iVar1 = param_5;
    if (param_5 < 2) {
      iVar1 = 2;
    }
    if (0x12 < iVar1) {
      iVar1 = 0x12;
    }
  }
  uVar2 = 9999;
  if (1 < param_6) {
    uVar2 = param_4;
  }
  local_8 = param_1;
  FUN_00418fa4(local_2a,param_2,param_3,uVar2,iVar1);
  puVar5 = local_8;
  uVar3 = local_2a[0] - 0x7fff;
  if (uVar3 < 2) {
    FUN_00418aa0(uVar3,extraout_EDX,uVar3);
    puVar4 = (undefined2 *)(&DAT_00418a89 + extraout_ECX * 6);
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  else {
    uVar3 = (uint)param_6;
    if ((param_6 != 1) && ((4 < param_6 || (iVar1 < (short)local_2a[0])))) {
      uVar3 = 0;
    }
    (*(code *)(&PTR_LAB_00418a75)[uVar3])();
  }
  FUN_00418c9a((uint)((int)puVar5 - (int)local_8) >> 1);
  return;
}
