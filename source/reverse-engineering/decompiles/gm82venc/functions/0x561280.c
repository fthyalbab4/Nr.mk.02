// rea decompile_all
// name: FUN_00561280
// address: 0x561280
// body: available
// range: 0x561280-0x5613cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5612a9 (push 0x5613cd followed by fs-segment stack chaining); handler 0x5613cd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00561280(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *in_FS_OFFSET;
  bool bVar4;
  undefined4 uVar5;
  undefined4 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;

  local_18 = 0;
  local_14 = 0;
  puStack_28 = (undefined1 *)0x56129e;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_2c = &LAB_005613cd;
  puStack_30 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_30;
  uVar5 = 0x5612b5;
  puStack_28 = &stack0xfffffffc;
  FUN_00408194(param_2,0);
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    uVar5 = 0x5612d2;
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if (0 < iVar3) {
    iVar2 = 1;
    local_c = iVar3;
    do {
      iVar3 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        uVar5 = 0x561308;
        iVar3 = FUN_00407488(&local_8,local_8);
      }
      if (*(short *)(iVar3 + -2 + iVar2 * 2) == 0x23) {
        if (iVar2 < 2) {
          bVar4 = false;
        }
        else {
          iVar3 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            uVar5 = 0x561332;
            iVar3 = FUN_00407488(&local_8,local_8);
          }
          bVar4 = *(short *)(iVar3 + -4 + iVar2 * 2) == 0x5c;
        }
        if (bVar4) {
          local_10 = *param_2;
          iVar3 = 0;
          if (local_10 != 0) {
            iVar3 = *(int *)(local_10 + -4);
          }
          puStack_30 = &local_14;
          FUN_00408984(*param_2,1,iVar3 + -1,uVar5);
          FUN_00408678(param_2,local_14,&DAT_005613e8);
        }
        else {
          uVar5 = 0x561384;
          FUN_004085b8(param_2,&DAT_005613f8);
        }
      }
      else {
        FUN_00408310(&local_18,*(undefined2 *)(local_8 + -2 + iVar2 * 2));
        uVar5 = 0x5613a0;
        FUN_004085b8(param_2,local_18);
      }
      iVar2 = iVar2 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = (int)puStack_30;
  puStack_28 = &LAB_005613d4;
  puStack_2c = (undefined1 *)0x5613c4;
  thunk_FUN_004072fc(&local_18,2,puVar1);
  puStack_2c = (undefined1 *)0x5613cc;
  thunk_FUN_004072d8(&local_8);
  return;
}
