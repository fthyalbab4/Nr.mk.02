// rea decompile_all
// name: FUN_00565f20
// address: 0x565f20
// body: available
// range: 0x565f20-0x566034 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x565f42 (push 0x566035 followed by fs-segment stack chaining); handler 0x566035 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00565f20(int param_1,int param_2)

{
  short sVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_8;

  puStack_1c = (undefined1 *)0x565f37;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_20 = &LAB_00566035;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar3 = local_8;
  puStack_1c = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_1c = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_1c = &stack0xfffffffc;
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
      sVar1 = *(short *)(iVar4 + -2 + iVar3 * 2);
      if ((((sVar1 != 0x21) && (sVar1 == 0x3e)) && (iVar3 < param_2)) &&
         (((1 < iVar3 && (local_8 != 0)) && (*(short *)(local_8 + -10) != 2)))) {
        FUN_00407048(&local_8,local_8);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00565bb8(local_8,param_2);
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0056603c;
  puStack_20 = (undefined1 *)0x566034;
  thunk_FUN_00406e5c(&local_8,uStack_24,puVar2);
  return;
}
