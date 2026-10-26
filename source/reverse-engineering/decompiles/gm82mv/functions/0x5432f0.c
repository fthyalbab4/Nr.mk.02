// rea decompile_all
// name: FUN_005432f0
// address: 0x5432f0
// body: available
// range: 0x5432f0-0x5434fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x543320 (push 0x5434fe followed by fs-segment stack chaining); handler 0x5434fe lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005432f0(int param_1,int param_2,int param_3,char param_4,int param_5)

{
  undefined1 *puVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  int local_c;
  int local_8;

  puStack_24 = (undefined1 *)0x54330d;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_24 = (undefined1 *)0x543315;
  thunk_FUN_00407ad0(local_c);
  puStack_28 = &LAB_005434fe;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  if (local_8 == local_c) {
    puStack_24 = &stack0xfffffffc;
    if ((param_5 < 1) && (puStack_24 = &stack0xfffffffc, local_8 != 0)) {
      puStack_24 = &stack0xfffffffc;
    }
  }
  else {
    puStack_24 = &stack0xfffffffc;
    if (((local_8 != 0) && (puStack_24 = &stack0xfffffffc, local_c != 0)) &&
       (puStack_24 = &stack0xfffffffc, 0 < param_5)) {
      iVar4 = local_8;
      puStack_24 = &stack0xfffffffc;
      if ((local_8 != 0) && (puStack_24 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
        puStack_24 = &stack0xfffffffc;
        iVar4 = FUN_00407488(&local_8,local_8);
      }
      iVar6 = 0;
      if (iVar4 != 0) {
        iVar6 = *(int *)(iVar4 + -4);
      }
      iVar4 = local_c;
      if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
        iVar4 = FUN_00407488(&local_c,local_c);
      }
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar5 = *(int *)(iVar4 + -4);
      }
      iVar4 = param_3 + -1 + param_5;
      if (iVar4 <= iVar6) {
        if (iVar5 < iVar4) {
          param_5 = iVar5 - (param_3 + -1);
        }
        local_14 = param_5;
        if (param_4 == '\0') {
          if (-1 < param_5 + -1) {
            iVar4 = 0;
            do {
              iVar6 = local_8;
              if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
                iVar6 = FUN_00407488(&local_8,local_8);
              }
              sVar2 = *(short *)(iVar6 + -2 + (param_3 + iVar4) * 2);
              iVar6 = local_c;
              if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
                iVar6 = FUN_00407488(&local_c,local_c);
              }
              sVar3 = *(short *)(iVar6 + -2 + (param_3 + iVar4) * 2);
              if (sVar3 != sVar2) {
                sVar2 = FUN_005438b8(sVar2);
                sVar3 = FUN_005438b8(sVar3);
                if (sVar3 != sVar2) break;
              }
              iVar4 = iVar4 + 1;
              local_14 = local_14 + -1;
            } while (local_14 != 0);
          }
        }
        else if (-1 < param_5 + -1) {
          iVar4 = 0;
          do {
            iVar6 = local_8;
            if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
              iVar6 = FUN_00407488(&local_8,local_8);
            }
            sVar2 = *(short *)(iVar6 + -2 + (param_3 + iVar4) * 2);
            iVar6 = local_c;
            if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
              iVar6 = FUN_00407488(&local_c,local_c);
            }
            if (*(short *)(iVar6 + -2 + (param_3 + iVar4) * 2) != sVar2) break;
            iVar4 = iVar4 + 1;
            local_14 = local_14 + -1;
          } while (local_14 != 0);
        }
      }
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00543505;
  puStack_28 = (undefined1 *)0x5434fd;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
