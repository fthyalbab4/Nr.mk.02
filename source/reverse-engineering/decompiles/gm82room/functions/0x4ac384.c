// rea decompile_all
// name: FUN_004ac384
// address: 0x4ac384
// body: available
// range: 0x4ac384-0x4ac4ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ac3a6 (push 0x4ac4af followed by fs-segment stack chaining); handler 0x4ac4af lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ac384(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  int local_8;

  puStack_24 = (undefined1 *)0x4ac39b;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_28 = &LAB_004ac4af;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_00408194(param_2,0);
  iVar4 = 1;
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if (0 < iVar3) {
    do {
      iVar2 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar2 = FUN_00407488(&local_8,local_8);
      }
      if ((*(ushort *)(iVar2 + -2 + iVar4 * 2) < 0xd800) ||
         (0xdfff < *(ushort *)(iVar2 + -2 + iVar4 * 2))) {
        iVar2 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar2 = FUN_00407488(&local_8,local_8);
        }
        if ((*(short *)(iVar2 + -2 + iVar4 * 2) == 0x26) && (0 < iVar3 - iVar4)) {
          iVar4 = iVar4 + 1;
          local_14 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            local_14 = FUN_00407488(&local_8,local_8);
          }
          if (*(short *)(local_14 + -2 + iVar4 * 2) != 0x26) {
            FUN_00408310(param_2,*(undefined2 *)(local_8 + -2 + iVar4 * 2));
          }
        }
      }
      else {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= iVar3);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004ac4b6;
  puStack_28 = (undefined1 *)0x4ac4ae;
  thunk_FUN_004072d8(&local_8,uStack_2c,puVar1);
  return;
}
