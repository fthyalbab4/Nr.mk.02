// rea decompile_all
// name: FUN_0056807c
// address: 0x56807c
// body: available
// range: 0x56807c-0x568260 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x56809f (push 0x568261 followed by fs-segment stack chaining); handler 0x568261 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056807c(int param_1,short param_2,ushort param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  ushort local_6;

  puStack_24 = &stack0xfffffffc;
  local_18 = 0;
  local_14 = 0;
  puStack_28 = &LAB_00568261;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar3 = &stack0xfffffffc;
  local_6 = param_3;
  if ((param_3 & 4) == 0) {
    FUN_00567b30(param_1,&local_c,&local_10);
    if ((local_6 & 1) == 0) {
      if (local_10 - local_c < 2) {
        if (param_2 == 0x25) {
          FUN_005682a8(param_1,local_c);
          puVar3 = puStack_24;
        }
        else if (local_10 == local_c) {
          FUN_00567b78(param_1,local_c);
          puVar3 = puStack_24;
        }
        else {
          FUN_00567578(param_1,&local_18);
          uVar1 = *(ushort *)(local_18 + local_c * 2);
          if ((uVar1 < 0xd800) || (0xdfff < uVar1)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_00568270(param_1,local_c,2);
            puVar3 = puStack_24;
          }
          else {
            FUN_00568270(param_1,local_c,1);
            puVar3 = puStack_24;
          }
        }
      }
      else {
        if (local_10 - local_c == 2) {
          FUN_00567578(param_1,&local_14);
          uVar1 = *(ushort *)(local_14 + local_c * 2);
          if ((uVar1 < 0xd800) || (0xdfff < uVar1)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            if (param_2 == 0x25) {
              FUN_005682a8(param_1,local_c);
              puVar3 = puStack_24;
            }
            else {
              FUN_00568270(param_1,local_c,2);
              puVar3 = puStack_24;
            }
            goto LAB_00568246;
          }
        }
        if (local_10 == *(int *)(param_1 + 0x2b0)) {
          *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + -1;
        }
        FUN_00567b78(param_1,*(undefined4 *)(param_1 + 0x2b0));
        puVar3 = puStack_24;
      }
    }
    else if (param_2 == 0x27) {
      *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + 1;
      if (local_c + 1 == local_10) {
        FUN_00567b54(param_1,local_c,local_10);
        *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + 1;
      }
      puVar3 = puStack_24;
      if (*(int *)(param_1 + 0x2a8) < *(int *)(param_1 + 0x2b0)) {
        *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2a8);
      }
    }
    else {
      *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + -1;
      if ((local_c + 2 == local_10) && (local_c < *(int *)(param_1 + 0x2b0))) {
        FUN_00567b54(param_1,local_c + 1,local_c + 1);
        *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + -1;
      }
      puVar3 = puStack_24;
      if (*(int *)(param_1 + 0x2b0) < 0) {
        *(undefined4 *)(param_1 + 0x2b0) = 0;
      }
    }
  }
LAB_00568246:
  puStack_24 = puVar3;
  puVar3 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00568268;
  puStack_28 = (undefined1 *)0x568260;
  thunk_FUN_00406e80(&local_18,2,puVar3);
  return;
}
