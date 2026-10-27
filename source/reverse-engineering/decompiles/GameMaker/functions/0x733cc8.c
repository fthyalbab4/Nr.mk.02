// rea decompile_all
// name: FUN_00733cc8
// address: 0x733cc8
// body: available
// range: 0x733cc8-0x733da6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x733cf5 (push 0x733da7 followed by fs-segment stack chaining); handler 0x733da7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00733cc8(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  puStack_24 = (undefined1 *)0x733cdf;
  local_c = param_2;
  local_8 = param_1;
  FUN_00407660(param_1);
  if (local_c != (undefined4 *)0x0) {
    *local_c = 0;
  }
  puStack_28 = &LAB_00733da7;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  if (local_8 == 0) {
    puStack_24 = &stack0xfffffffc;
    FUN_00407a78(local_c);
  }
  else {
    iVar2 = local_8;
    puStack_24 = &stack0xfffffffc;
    if ((local_8 != 0) && (puStack_24 = &stack0xfffffffc, *(short *)(local_8 + -10) != 1)) {
      puStack_24 = &stack0xfffffffc;
      iVar2 = FUN_00407078(&local_8,local_8,0);
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4);
    }
    FUN_00407e04(local_c,iVar3);
    local_10 = 1;
    local_14 = 1;
    if (0 < iVar3) {
      do {
        uVar4 = FUN_007331a8(local_8,&local_10);
        if (local_10 == -1) {
          FUN_00407a78(local_c);
          goto LAB_00733d91;
        }
        FUN_00733b1c(local_c,&local_14,uVar4);
      } while (local_10 <= iVar3);
    }
    FUN_00407e04(local_c,local_14 + -1);
  }
LAB_00733d91:
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00733dae;
  puStack_28 = (undefined1 *)0x733da6;
  FUN_00406e5c(&local_8,uStack_2c,puVar1);
  return;
}
