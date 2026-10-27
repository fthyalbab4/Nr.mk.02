// rea decompile_all
// name: FUN_005903e0
// address: 0x5903e0
// body: available
// range: 0x5903e0-0x590734 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x590401 (push 0x590735 followed by fs-segment stack chaining); handler 0x590735 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005903e0(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;

  puStack_1c = (undefined1 *)0x5903f6;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_20 = &LAB_00590735;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  sVar5 = 0;
  iVar3 = local_8;
  puStack_1c = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_1c = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_1c = &stack0xfffffffc;
    iVar3 = FUN_00407488(&local_8,local_8);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4);
  }
  if (param_2 <= iVar4) {
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407488(&local_8,local_8);
    }
    sVar5 = *(short *)(iVar3 + -2 + param_2 * 2);
  }
  iVar3 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar3 = FUN_00407488(&local_8,local_8);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4);
  }
  if ((param_2 <= iVar4) && (cVar2 = FUN_0041d068(local_8,param_2), cVar2 == '\0')) {
    if (param_2 < 2) {
      bVar6 = false;
    }
    else {
      iVar3 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar3 = FUN_00407488(&local_8,local_8);
      }
      bVar6 = *(short *)(iVar3 + -4 + param_2 * 2) == 0x5c;
    }
    if (bVar6) {
      cVar2 = FUN_0041d068(local_8,param_2 + -1);
      bVar6 = cVar2 == '\0';
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      if (param_2 < 3) {
        bVar6 = false;
      }
      else {
        iVar3 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar3 = FUN_00407488(&local_8,local_8);
        }
        bVar6 = *(short *)(iVar3 + -6 + param_2 * 2) == 0x5c;
      }
      if (bVar6) {
        cVar2 = FUN_0041d068(local_8,param_2 + -2);
        bVar6 = cVar2 == '\0';
      }
      else {
        bVar6 = false;
      }
      bVar6 = (bool)(bVar6 ^ 1);
    }
    else {
      bVar6 = false;
    }
    if (!bVar6) {
      if (sVar5 == DAT_00686b68) {
        iVar3 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar3 = FUN_00407488(&local_8,local_8);
        }
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = *(int *)(iVar3 + -4);
        }
        bVar6 = 3 < iVar4;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        iVar3 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar3 = FUN_00407488(&local_8,local_8);
        }
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = *(int *)(iVar3 + -4);
        }
        bVar6 = iVar4 + -4 < param_2;
      }
      else {
        bVar6 = false;
      }
      if (!bVar6) {
        iVar3 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar3 = FUN_00407488(&local_8,local_8);
        }
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = *(int *)(iVar3 + -4);
        }
        if (iVar4 < 4) {
          bVar6 = false;
        }
        else {
          iVar3 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            iVar3 = FUN_00407488(&local_8,local_8);
          }
          iVar4 = 0;
          if (iVar3 != 0) {
            iVar4 = *(int *)(iVar3 + -4);
          }
          bVar6 = iVar4 + -4 < param_2;
        }
        if (bVar6) {
          iVar3 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            iVar3 = FUN_00407488(&local_8,local_8);
          }
          bVar6 = *(short *)(iVar3 + -4 + param_2 * 2) == DAT_00686b68;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) {
          if (param_2 < 3) {
            bVar6 = false;
          }
          else {
            local_c = local_8;
            if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
              local_c = FUN_00407488(&local_8,local_8);
            }
            bVar6 = *(short *)(local_c + -6 + param_2 * 2) == 0x5c;
          }
          if (bVar6) {
            FUN_0041d068(local_8,param_2 + -2);
          }
        }
      }
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0059073c;
  puStack_20 = (undefined1 *)0x590734;
  thunk_FUN_004072d8(&local_8,uStack_24,puVar1);
  return;
}
