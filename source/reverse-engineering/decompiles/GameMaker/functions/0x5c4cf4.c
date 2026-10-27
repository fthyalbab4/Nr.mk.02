// rea decompile_all
// name: FUN_005c4cf4
// address: 0x5c4cf4
// body: available
// range: 0x5c4cf4-0x5c4e76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c4d1a (push 0x5c4e77 followed by fs-segment stack chaining); handler 0x5c4e77 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c4cf4(int param_1,short param_2,byte param_3,int *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18;
  int local_14;
  int local_8;

  puStack_28 = (undefined1 *)0x5c4d0f;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_2c = &LAB_005c4e77;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  local_14 = FUN_00409a18(*param_4);
  local_18 = 0;
  iVar6 = 1;
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407048(&local_8,local_8);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if (0 < iVar3) {
    iVar5 = 1;
    iVar2 = iVar3;
    do {
      iVar4 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar4 = FUN_00407048(&local_8,local_8);
      }
      if (*(short *)(iVar4 + -2 + iVar5 * 2) == param_2) {
        if ((iVar6 < iVar5) || ((param_3 & 2) == 0)) {
          if (local_18 == local_14) {
            local_14 = local_14 * 2 + 8;
            FUN_00409be0(param_4,&DAT_005c4cc0,1,local_14);
          }
          FUN_00407ff4(*param_4 + local_18 * 4,local_8 + -2 + iVar6 * 2,iVar5 - iVar6);
          local_18 = local_18 + 1;
        }
        iVar6 = iVar5 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((iVar3 < iVar6) && ((param_3 & 2) != 0)) {
    if (local_18 != local_14) {
      FUN_00409be0(param_4,&DAT_005c4cc0,1,local_18);
    }
  }
  else {
    if (local_18 + 1 != local_14) {
      FUN_00409be0(param_4,&DAT_005c4cc0,1,local_18 + 1);
    }
    FUN_00407ff4(*param_4 + local_18 * 4,local_8 + -2 + iVar6 * 2,(iVar3 - iVar6) + 1);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_005c4e7e;
  puStack_2c = (undefined1 *)0x5c4e76;
  thunk_FUN_00406e5c(&local_8,uStack_30,puVar1);
  return;
}
