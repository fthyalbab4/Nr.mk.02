// rea decompile_all
// name: FUN_005687b0
// address: 0x5687b0
// body: available
// range: 0x5687b0-0x5689c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5687d3 (push 0x5689c7 followed by fs-segment stack chaining); handler 0x5689c7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005687b0(int param_1,undefined4 param_2,int *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_FS_OFFSET;
  undefined4 uVar6;
  undefined4 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  int local_20;
  char local_19;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  puStack_34 = &stack0xfffffffc;
  local_24 = 0;
  local_8 = 0;
  puStack_38 = &LAB_005689c7;
  puStack_3c = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_3c;
  local_14 = 1;
  local_c = param_1;
  FUN_00407eb8(param_3,param_2);
  iVar4 = 0;
  if (*(int *)(local_c + 0x2a0) != 0) {
    iVar4 = *(int *)(*(int *)(local_c + 0x2a0) + -4);
  }
  if (0 < iVar4) {
    local_18 = 1;
    do {
      local_19 = FUN_00565bb8(*(undefined4 *)(local_c + 0x2a0),local_18);
      if ((byte)(local_19 - 1U) < 2) {
        uVar6 = 0x568836;
        FUN_004086a8(*param_3,1,local_14 + -1,&local_8);
        local_20 = *param_3;
        iVar5 = 0;
        if (local_20 != 0) {
          iVar5 = *(int *)(local_20 + -4);
        }
        puStack_3c = &local_24;
        FUN_004086a8(*param_3,local_14 + 1,iVar5 - local_14,uVar6);
        FUN_0040839c(param_3,local_8,local_24);
      }
      if ((byte)(local_19 - 4U) < 2) {
        local_14 = local_14 + 1;
      }
      local_18 = local_18 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar2 = FUN_00565f20(*(undefined4 *)(local_c + 0x2a0),1);
  if ((uVar2 & 1) == 0) {
    local_20 = *param_3;
    iVar4 = 0;
    if (local_20 != 0) {
      iVar4 = *(int *)(local_20 + -4);
    }
    local_10 = iVar4;
    if (0 < iVar4) {
      iVar5 = 1;
      do {
        if (*(short *)(*param_3 + (local_10 - iVar5) * 2) != *(short *)(local_c + 0x2a4)) break;
        local_20 = *param_3;
        iVar3 = 0;
        if (local_20 != 0) {
          iVar3 = *(int *)(local_20 + -4);
        }
        FUN_00408244(param_3,iVar3 + -1);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    local_14 = 1;
    local_20 = *param_3;
    iVar4 = 0;
    if (local_20 != 0) {
      iVar4 = *(int *)(local_20 + -4);
    }
    if (0 < iVar4) {
      iVar5 = 1;
      do {
        if (*(short *)(*param_3 + -2 + iVar5 * 2) != *(short *)(local_c + 0x2a4)) break;
        local_14 = local_14 + 1;
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (local_14 != 1) {
      local_20 = *param_3;
      iVar4 = 0;
      if (local_20 != 0) {
        iVar4 = *(int *)(local_20 + -4);
      }
      FUN_004086a8(*param_3,local_14,(iVar4 - local_14) + 1,param_3);
    }
  }
  if (*(short *)(local_c + 0x2a4) != 0x20) {
    local_20 = *param_3;
    iVar4 = 0;
    if (local_20 != 0) {
      iVar4 = *(int *)(local_20 + -4);
    }
    local_10 = iVar4;
    if (0 < iVar4) {
      iVar5 = 1;
      do {
        if (*(short *)(*param_3 + -2 + iVar5 * 2) == *(short *)(local_c + 0x2a4)) {
          iVar3 = thunk_FUN_004089c0(param_3);
          *(undefined2 *)(iVar3 + -2 + iVar5 * 2) = 0x20;
        }
        if (local_10 < iVar5) break;
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = (int)puStack_3c;
  puStack_34 = &LAB_005689ce;
  puStack_38 = (undefined1 *)0x5689be;
  thunk_FUN_00406e5c(&local_24,puStack_3c,puVar1);
  puStack_38 = (undefined1 *)0x5689c6;
  thunk_FUN_00406e5c(&local_8);
  return;
}
