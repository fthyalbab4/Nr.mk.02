// rea decompile_all
// name: FUN_00584cec
// address: 0x584cec
// body: available
// range: 0x584cec-0x584f81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x584d09 (push 0x584f82 followed by fs-segment stack chaining); handler 0x584f82 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00584cec(ushort *param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  ushort *local_8;

  puStack_18 = (undefined1 *)0x584cfe;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_1c = &LAB_00584f82;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar3 = local_8;
  puStack_18 = &stack0xfffffffc;
  if ((local_8 != (ushort *)0x0) && (puStack_18 = &stack0xfffffffc, local_8[-5] != 2)) {
    puStack_18 = &stack0xfffffffc;
    puVar3 = (ushort *)FUN_00407488(&local_8,local_8);
  }
  iVar4 = 0;
  if (puVar3 != (ushort *)0x0) {
    iVar4 = *(int *)(puVar3 + -2);
  }
  if (iVar4 != 0) {
    puVar3 = local_8;
    if ((local_8 != (ushort *)0x0) && (local_8[-5] != 2)) {
      puVar3 = (ushort *)FUN_00407488(&local_8,local_8);
    }
    if (*puVar3 < 0x61) {
      bVar1 = true;
    }
    else {
      puVar3 = local_8;
      if ((local_8 != (ushort *)0x0) && (local_8[-5] != 2)) {
        puVar3 = (ushort *)FUN_00407488(&local_8,local_8);
      }
      bVar1 = 0x7a < *puVar3;
    }
    if (bVar1) {
      puVar3 = local_8;
      if ((local_8 != (ushort *)0x0) && (local_8[-5] != 2)) {
        puVar3 = (ushort *)FUN_00407488(&local_8,local_8);
      }
      if (*puVar3 < 0x41) {
        bVar1 = true;
      }
      else {
        puVar3 = local_8;
        if ((local_8 != (ushort *)0x0) && (local_8[-5] != 2)) {
          puVar3 = (ushort *)FUN_00407488(&local_8,local_8);
        }
        bVar1 = 0x5a < *puVar3;
      }
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      puVar3 = local_8;
      if ((local_8 != (ushort *)0x0) && (local_8[-5] != 2)) {
        puVar3 = (ushort *)FUN_00407488(&local_8,local_8);
      }
      if (*puVar3 != 0x5f) goto LAB_00584f6c;
    }
    puVar3 = local_8;
    if ((local_8 != (ushort *)0x0) && (local_8[-5] != 2)) {
      puVar3 = (ushort *)FUN_00407488(&local_8,local_8);
    }
    iVar4 = 0;
    if (puVar3 != (ushort *)0x0) {
      iVar4 = *(int *)(puVar3 + -2);
    }
    if (1 < iVar4) {
      iVar4 = iVar4 + -1;
      iVar5 = 2;
      do {
        puVar3 = local_8;
        if ((local_8 != (ushort *)0x0) && (local_8[-5] != 2)) {
          puVar3 = (ushort *)FUN_00407488(&local_8,local_8);
        }
        if (puVar3[iVar5 + -1] < 0x61) {
          bVar1 = true;
        }
        else {
          puVar3 = local_8;
          if ((local_8 != (ushort *)0x0) && (local_8[-5] != 2)) {
            puVar3 = (ushort *)FUN_00407488(&local_8,local_8);
          }
          bVar1 = 0x7a < puVar3[iVar5 + -1];
        }
        if (bVar1) {
          puVar3 = local_8;
          if ((local_8 != (ushort *)0x0) && (local_8[-5] != 2)) {
            puVar3 = (ushort *)FUN_00407488(&local_8,local_8);
          }
          if (puVar3[iVar5 + -1] < 0x41) {
            bVar1 = true;
          }
          else {
            puVar3 = local_8;
            if ((local_8 != (ushort *)0x0) && (local_8[-5] != 2)) {
              puVar3 = (ushort *)FUN_00407488(&local_8,local_8);
            }
            bVar1 = 0x5a < puVar3[iVar5 + -1];
          }
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          puVar3 = local_8;
          if ((local_8 != (ushort *)0x0) && (local_8[-5] != 2)) {
            puVar3 = (ushort *)FUN_00407488(&local_8,local_8);
          }
          if (puVar3[iVar5 + -1] < 0x30) {
            bVar1 = true;
          }
          else {
            puVar3 = local_8;
            if ((local_8 != (ushort *)0x0) && (local_8[-5] != 2)) {
              puVar3 = (ushort *)FUN_00407488(&local_8,local_8);
            }
            bVar1 = 0x39 < puVar3[iVar5 + -1];
          }
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          puVar3 = local_8;
          if ((local_8 != (ushort *)0x0) && (local_8[-5] != 2)) {
            puVar3 = (ushort *)FUN_00407488(&local_8,local_8);
          }
          if (puVar3[iVar5 + -1] != 0x5f) break;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
LAB_00584f6c:
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00584f89;
  puStack_1c = (undefined1 *)0x584f81;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar2);
  return;
}
