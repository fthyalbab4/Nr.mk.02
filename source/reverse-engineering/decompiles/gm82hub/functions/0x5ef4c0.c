// rea decompile_all
// name: FUN_005ef4c0
// address: 0x5ef4c0
// body: available
// range: 0x5ef4c0-0x5ef565 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ef4d9 (push 0x5ef566 followed by fs-segment stack chaining); handler 0x5ef566 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ef4c0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_005ef566;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_004081e8(&local_8,*(undefined4 *)(param_1 + 8));
  FUN_004bb440(param_1,param_2);
  if (*(int *)(param_1 + 0x288) != 0) {
    (**(code **)(**(int **)(param_1 + 0x288) + 0x14))();
    uVar1 = *(uint *)(*(int *)(param_1 + 0x270) + 0x2c);
    if ((uVar1 & 0x30) != 0) {
      uVar4 = (uVar1 & 0x10) == 0;
      if ((bool)uVar4) {
        uVar3 = 0xfffffdfb;
      }
      else {
        uVar3 = 0xfffffdfa;
      }
      FUN_005eec90(param_1,uVar3,&local_c);
      FUN_0040891c(local_8,local_c);
      if ((bool)uVar4) {
        FUN_005ef954(param_1,uVar3,param_2);
      }
    }
  }
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005ef56d;
  puStack_20 = (undefined1 *)0x5ef565;
  thunk_FUN_004072fc(&local_c,2,puVar2);
  return;
}
