// rea decompile_all
// name: FUN_005b3c40
// address: 0x5b3c40
// body: available
// range: 0x5b3c40-0x5b3df4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b3c68 (push 0x5b3df5 followed by fs-segment stack chaining); handler 0x5b3df5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b3c40(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  local_c = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_30 = (undefined1 *)0x5b3c5d;
  local_10 = param_1;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_34 = &LAB_005b3df5;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_004173d8(local_8,&local_14);
  iVar3 = FUN_00415924(local_14,L".gmspr");
  if (iVar3 == 0) {
    FUN_005b3e58(local_10,local_8);
  }
  else {
    FUN_004173d8(local_8,&local_18);
    iVar3 = FUN_00415924(local_18,L".gif");
    if (iVar3 == 0) {
      FUN_005b3020(local_10,local_8);
    }
    else {
      FUN_00417398(local_8,&local_20);
      FUN_00417288(local_20,0,&local_1c);
      FUN_00415690(local_1c,&local_c);
      iVar3 = local_c;
      if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
        iVar3 = FUN_00407048(&local_c,local_c);
      }
      iVar5 = 0;
      if (iVar3 != 0) {
        iVar5 = *(int *)(iVar3 + -4);
      }
      iVar3 = FUN_00408a68(L"_STRIP",local_c);
      if (iVar3 < 1) {
        FUN_005b3b20(local_10,local_8,1);
      }
      else {
        iVar3 = iVar3 + 6;
        iVar6 = 0;
        if (iVar3 <= iVar5) {
          iVar5 = (iVar5 - iVar3) + 1;
          do {
            iVar4 = local_c;
            if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
              iVar4 = FUN_00407048(&local_c,local_c);
            }
            if (*(ushort *)(iVar4 + -2 + iVar3 * 2) < 0x30) {
              bVar1 = true;
            }
            else {
              iVar4 = local_c;
              if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
                iVar4 = FUN_00407048(&local_c,local_c);
              }
              bVar1 = 0x39 < *(ushort *)(iVar4 + -2 + iVar3 * 2);
            }
            if (bVar1) break;
            iVar6 = (uint)*(ushort *)(local_c + -2 + iVar3 * 2) + iVar6 * 10 + -0x30;
            iVar3 = iVar3 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (iVar6 == 0) {
          iVar6 = 1;
        }
        FUN_005b3b20(local_10,local_8,iVar6);
      }
    }
  }
  puVar2 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_005b3dfc;
  puStack_34 = (undefined1 *)0x5b3de7;
  thunk_FUN_00406e80(&local_20,4,puVar2);
  puStack_34 = (undefined1 *)0x5b3df4;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
