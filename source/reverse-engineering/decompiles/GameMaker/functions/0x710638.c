// rea decompile_all
// name: FUN_00710638
// address: 0x710638
// body: available
// range: 0x710638-0x7106b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x71064d (push 0x7106ba followed by fs-segment stack chaining); handler 0x7106ba lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00710638(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_007106ba;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  iVar2 = FUN_00710538(param_1);
  if (iVar2 == 0) {
    iVar2 = 0;
    do {
      FUN_00407eb8(param_1 + 0x4c + iVar2 * 4,&DAT_007106d4);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 8);
  }
  else {
    iVar3 = 0;
    do {
      FUN_00561cd4(iVar2,iVar3,&local_8);
      FUN_00407eb8(param_1 + 0x4c + iVar3 * 4,local_8);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 8);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_007106c1;
  puStack_1c = (undefined1 *)0x7106b9;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
