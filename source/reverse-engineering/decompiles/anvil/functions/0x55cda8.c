// rea decompile_all
// name: FUN_0055cda8
// address: 0x55cda8
// body: available
// range: 0x55cda8-0x55cf3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x55cdc8 (push 0x55cf40 followed by fs-segment stack chaining); handler 0x55cf40 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055cda8(int param_1,uint param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_4c;
  undefined4 uVar5;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;

  puStack_38 = &stack0xfffffffc;
  local_28 = 0;
  puStack_3c = &LAB_0055cf40;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  local_c = param_3;
  local_20 = FUN_0055cd28(param_1,param_2);
  local_18 = 0;
  local_1c = 0;
  *local_c = 0;
  if (*(char *)(param_1 + 4) == '\0') {
    local_10 = FUN_0055cca8(param_1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 4) + 0xd));
    uVar4 = 0;
    local_24 = 0;
    while (cVar2 = FUN_0055cf60(param_1,&local_10,&local_14), cVar2 != '\0') {
      uVar4 = uVar4 + local_14;
      if (param_2 < uVar4) {
        if (local_24 < local_20) {
          local_18 = 0;
          local_1c = 0;
          *local_c = 0;
        }
        break;
      }
      local_24 = uVar4;
      FUN_0055cf60(param_1,&local_10,&local_14);
      local_18 = local_18 + local_14;
      FUN_0055cf60(param_1,&local_10,&local_14);
      local_1c = local_1c + local_14;
      *local_c = param_2 - uVar4;
    }
  }
  else {
    FUN_0055c924(param_1);
    iVar3 = FUN_00409c34(*(undefined4 *)(param_1 + 0x14));
    iVar1 = iVar3 + -1;
    if (-1 < iVar3 + -1) {
      do {
        local_14 = iVar1;
        uVar4 = *(uint *)(*(int *)(param_1 + 0x14) + local_14 * 0xc);
        if (uVar4 <= param_2) {
          if (local_20 <= uVar4) {
            local_18 = *(int *)(*(int *)(param_1 + 0x14) + 4 + local_14 * 0xc);
            local_1c = *(int *)(*(int *)(param_1 + 0x14) + 8 + local_14 * 0xc);
            *local_c = param_2 - *(int *)(*(int *)(param_1 + 0x14) + local_14 * 0xc);
          }
          break;
        }
        local_14 = local_14 + -1;
        iVar1 = local_14;
      } while (local_14 != -1);
    }
  }
  if (local_18 == 0) {
    uVar5 = 0x55cf2a;
    FUN_00408194(param_4,0);
  }
  else {
    uVar5 = 0x55cef1;
    FUN_0055cac8(param_1,local_18,param_4);
    if (local_1c != 0) {
      uVar5 = *param_4;
      FUN_0055cac8(param_1,local_1c,&local_28,&DAT_0055cf5c);
      uStackY_4c = local_28;
      FUN_0040875c(param_4,3);
    }
  }
  *in_FS_OFFSET = uStackY_4c;
  thunk_FUN_004072d8(&local_28,uStackY_4c,uVar5,&LAB_0055cf47);
  return;
}
