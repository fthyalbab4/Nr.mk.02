// rea decompile_all
// name: FUN_004ec8a8
// address: 0x4ec8a8
// body: available
// range: 0x4ec8a8-0x4ec9c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ec8a8(int param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  int local_48;
  tagPOINT local_44;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined1 local_14 [8];

  local_24 = *param_3;
  uStack_20 = param_3[1];
  local_1c = param_3[2];
  uStack_18 = param_3[3];
  local_3c._0_2_ = (short)local_1c;
  local_38 = (int)(short)local_3c;
  local_3c._2_2_ = (short)((uint)local_1c >> 0x10);
  local_34 = (int)local_3c._2_2_;
  local_3c = local_1c;
  FUN_004bb054(param_2,&local_38,local_14);
  FUN_004b996c(local_14,1);
  iVar4 = thunk_FUN_004e95a9();
  if ((iVar4 == 0) || (*(char *)(iVar4 + 0x89) == '\0')) {
    FUN_004eca78(param_1);
  }
  else {
    if (iVar4 == *(int *)(param_1 + 0x60)) {
      local_30 = local_1c;
      uVar2 = local_30;
      local_30._0_2_ = (short)local_1c;
      local_2c = (int)(short)local_30;
      local_30._2_2_ = (short)((uint)local_1c >> 0x10);
      local_28 = (int)local_30._2_2_;
      local_30 = uVar2;
      FUN_004bb054(param_2,&local_2c,local_14);
      bVar3 = FUN_0040c39c(param_1 + 100,local_14);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 1;
    }
    if (bVar3 != 0) {
      cVar1 = *(char *)(param_1 + 0x58);
      if (cVar1 == '\0') {
        local_48 = *(int *)(param_1 + 0x78);
      }
      else {
        local_48 = *(int *)(param_1 + 0x80);
      }
      FUN_004bcb48(iVar4,0xb041,cVar1,&local_48);
      if ((cVar1 == '\0') || (local_48 != 0)) {
        FUN_004eca78(param_1);
        *(char *)(param_1 + 0x58) = cVar1;
        *(int *)(param_1 + 0x60) = iVar4;
        FUN_004ec83c(param_1,local_48,0);
      }
      else {
        *(char *)(param_1 + 0x58) = cVar1;
        *(int *)(param_1 + 0x60) = iVar4;
        GetCursorPos(&local_44);
        FUN_004ecd4c(param_1,&local_44);
      }
    }
  }
  return;
}
