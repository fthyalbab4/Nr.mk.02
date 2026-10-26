// rea decompile_all
// name: FUN_0049d750
// address: 0x49d750
// body: available
// range: 0x49d750-0x49d946 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0049d750(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  HGLOBAL local_4c;
  HGLOBAL local_48 [2];
  uint local_40;
  ushort local_3c;
  ushort local_3a;
  undefined2 local_38;
  undefined2 local_36;
  short local_34;
  int local_32;
  undefined1 *local_2a;
  undefined1 *local_26;
  int local_22;

  FUN_00404f38(&local_54,0x42,0);
  local_54 = 0x42;
  local_32 = DAT_0068cc40;
  FUN_0049d4fc(&local_58,local_48);
  local_4c = (HGLOBAL)FUN_0049d6a4(local_58);
  local_40 = *(uint *)(&DAT_006814f8 + (uint)*(byte *)((int)param_1 + 0x73) * 4) | 0x3000;
  if ((char)param_1[0x1c] != '\0') {
    local_40 = local_40 + 0x10;
  }
  if ((*(byte *)((int)param_1 + 0x71) & 1) == 0) {
    local_40 = local_40 + 0x100000;
  }
  if ((*(byte *)((int)param_1 + 0x71) & 2) == 0) {
    local_40 = local_40 + 8;
  }
  if ((*(byte *)((int)param_1 + 0x71) & 4) == 0) {
    local_40 = local_40 + 4;
  }
  if ((*(byte *)((int)param_1 + 0x71) & 0x20) != 0) {
    local_40 = local_40 + 0x80000;
  }
  if (*(char *)((int)param_1 + 0x72) != '\0') {
    local_40 = local_40 + 0x20;
  }
  if ((*(byte *)((int)param_1 + 0x71) & 0x10) != 0) {
    local_40 = local_40 + 0x800;
  }
  if ((*(byte *)((int)param_1 + 0x71) & 8) == 0) {
    local_40 = local_40 + 0x80;
  }
  iVar1 = param_1[0x18];
  if (iVar1 != 0) {
    local_40 = local_40 | 0x4000;
    local_22 = iVar1;
    if (param_1[0x11] != 0) {
      local_32 = param_1[0x11];
    }
  }
  local_3c = *(ushort *)(param_1 + 0x1a);
  local_3a = *(ushort *)(param_1 + 0x1b);
  local_38 = (undefined2)param_1[0x1d];
  local_36 = (undefined2)param_1[0x1e];
  local_2a = &LAB_0049b60c;
  local_26 = &LAB_0049b60c;
  if (*(char *)(*(int *)PTR_DAT_0068917c + 0xd0) == '\0') {
    local_50 = FUN_0049b520();
  }
  else {
    iVar1 = FUN_004be9cc(&PTR_LAB_0049b6cc,1,0);
    param_1[0x10] = iVar1;
    *(int **)(iVar1 + 0x270) = param_1;
    *(undefined4 *)(iVar1 + 0x274) = param_2;
    local_50 = FUN_004c45dc(param_1[0x10]);
  }
  iVar1 = (**(code **)(*param_1 + 0x3c))(param_1,&DAT_0047f204,&local_54);
  if (iVar1 != 0) {
    FUN_0049d620(local_4c,local_48[0]);
    *(bool *)(param_1 + 0x1c) = (local_40 & 0x10) != 0;
    *(bool *)((int)param_1 + 0x72) = (local_40 & 0x20) != 0;
    if ((local_40 & 1) == 0) {
      if ((local_40 & 2) == 0) {
        *(undefined1 *)((int)param_1 + 0x73) = 0;
      }
      else {
        *(undefined1 *)((int)param_1 + 0x73) = 2;
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0x73) = 1;
    }
    param_1[0x1a] = (uint)local_3c;
    param_1[0x1b] = (uint)local_3a;
    if (local_34 == 1) {
      FUN_00480fc8();
      uVar2 = FUN_004807c8();
      FUN_0049d73c(param_1,uVar2);
    }
    else {
      FUN_0049d73c(param_1,local_34);
    }
  }
  else {
    if (local_4c != (HGLOBAL)0x0) {
      GlobalFree(local_4c);
      local_4c = (HGLOBAL)0x0;
    }
    if (local_48[0] != (HGLOBAL)0x0) {
      GlobalFree(local_48[0]);
    }
  }
  return iVar1 != 0;
}
