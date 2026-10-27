// rea decompile_all
// name: FUN_006408bc
// address: 0x6408bc
// body: available
// range: 0x6408bc-0x640af2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6408db (push 0x640af3 followed by fs-segment stack chaining); handler 0x640af3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006408bc(int param_1)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  bool bVar8;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  int local_30;
  int local_20;
  int local_8;

  puStack_44 = (undefined1 *)0x6408d0;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_48 = &LAB_00640af3;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  local_30 = 0;
  bVar3 = false;
  bVar2 = false;
  local_20 = 1;
  iVar5 = local_8;
  puStack_44 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_44 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_44 = &stack0xfffffffc;
    iVar5 = FUN_00407488(&local_8,local_8);
  }
  iVar7 = 0;
  if (iVar5 != 0) {
    iVar7 = *(int *)(iVar5 + -4);
  }
  if (0 < iVar7) {
    iVar5 = 1;
    do {
      iVar6 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar6 = FUN_00407488(&local_8,local_8);
      }
      if (*(short *)(iVar6 + -2 + iVar5 * 2) == 0x2e) {
        bVar8 = true;
      }
      else {
        iVar6 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar6 = FUN_00407488(&local_8,local_8);
        }
        bVar8 = *(short *)(iVar6 + -2 + iVar5 * 2) == 0x2c;
      }
      if (bVar8) {
        if (bVar3 || bVar2) break;
        bVar3 = true;
      }
      else {
        iVar6 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar6 = FUN_00407488(&local_8,local_8);
        }
        if (*(short *)(iVar6 + -2 + iVar5 * 2) == 0x45) {
          bVar8 = true;
        }
        else {
          iVar6 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            iVar6 = FUN_00407488(&local_8,local_8);
          }
          bVar8 = *(short *)(iVar6 + -2 + iVar5 * 2) == 0x65;
        }
        if (bVar8) {
          if (bVar2) break;
          bVar2 = true;
        }
        else {
          iVar6 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            iVar6 = FUN_00407488(&local_8,local_8);
          }
          if (*(short *)(iVar6 + -2 + iVar5 * 2) == 0x2d) {
            if (bVar2) {
              local_20 = -local_20;
            }
          }
          else {
            uVar1 = *(ushort *)(local_8 + -2 + iVar5 * 2);
            if (9 < (ushort)(uVar1 - 0x30)) break;
            if (bVar2) {
              local_30 = (uint)uVar1 + local_30 * 10 + -0x30;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_004101f8((int)((longlong)local_20 * (longlong)local_30),
               (int)((ulonglong)((longlong)local_20 * (longlong)local_30) >> 0x20));
  puVar4 = puStack_44;
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &LAB_00640afa;
  puStack_48 = (undefined1 *)0x640af2;
  thunk_FUN_004072d8(&local_8,uStack_4c,puVar4);
  return;
}
