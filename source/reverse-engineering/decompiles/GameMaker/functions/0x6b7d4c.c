// rea decompile_all
// name: FUN_006b7d4c
// address: 0x6b7d4c
// body: available
// range: 0x6b7d4c-0x6b7f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b7d76 (push 0x6b7f2c followed by fs-segment stack chaining); handler 0x6b7f2c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b7d4c(int param_1,int param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_18 = 0;
  local_c = 0;
  puStack_28 = (undefined1 *)0x6b7d6b;
  local_10 = param_1;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_2c = &LAB_006b7f2c;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_006b79cc(local_10);
  FUN_00407f0c(&local_c,0);
  local_14 = 0;
  iVar3 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar3 = FUN_00407048(&local_8,local_8);
  }
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar3 + -4);
  }
  if (0 < iVar5) {
    iVar3 = 1;
    do {
      iVar4 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar4 = FUN_00407048(&local_8,local_8);
      }
      if (*(short *)(iVar4 + -2 + iVar3 * 2) == 0xd) {
        bVar6 = true;
      }
      else {
        iVar4 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar4 = FUN_00407048(&local_8,local_8);
        }
        if (*(short *)(iVar4 + -2 + iVar3 * 2) == 10) {
          if (iVar3 == 1) {
            bVar6 = true;
          }
          else {
            iVar4 = local_8;
            if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
              iVar4 = FUN_00407048(&local_8,local_8);
            }
            bVar6 = *(short *)(iVar4 + -4 + iVar3 * 2) != 0xd;
          }
        }
        else {
          bVar6 = false;
        }
      }
      if (bVar6) {
        FUN_006b7a68(local_10,local_14,local_c);
        *(undefined1 *)(*(int *)(local_10 + 0x2d8) + 0xc + local_14 * 0x10) = 0;
        FUN_00407f0c(&local_c,0);
        local_14 = local_14 + 1;
      }
      else {
        uVar1 = *(ushort *)(local_8 + -2 + iVar3 * 2);
        if (0x1f < uVar1) {
          FUN_00408034(&local_18,uVar1);
          FUN_004082dc(&local_c,local_18);
        }
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (local_14 == 0) {
    bVar6 = true;
  }
  else {
    iVar3 = local_c;
    if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
      iVar3 = FUN_00407048(&local_c,local_c);
    }
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + -4);
    }
    bVar6 = 0 < iVar5;
  }
  if (bVar6) {
    FUN_006b7a68(local_10,local_14,local_c);
    *(undefined1 *)(*(int *)(local_10 + 0x2d8) + 0xc + local_14 * 0x10) = 0;
  }
  puVar2 = puStack_28;
  *(undefined1 *)(local_10 + 0x304) = 0;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_006b7f33;
  puStack_2c = (undefined1 *)0x6b7f1e;
  thunk_FUN_00406e5c(&local_18,uStack_30,puVar2);
  puStack_2c = (undefined1 *)0x6b7f2b;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
