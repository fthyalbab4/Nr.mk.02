// rea decompile_all
// name: FUN_0074cb20
// address: 0x74cb20
// body: available
// range: 0x74cb20-0x74cb9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x74cb3e (push 0x74cb9b followed by fs-segment stack chaining); handler 0x74cb9b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074cb20(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_0074cb9b;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = 0;
  iVar5 = *(int *)(param_1 + 8);
  local_8 = param_2;
  if (-1 < iVar5 + -1) {
    iVar4 = 0;
    puStack_20 = &stack0xfffffffc;
    do {
      uVar3 = FUN_0074cbac(param_1,iVar4);
      FUN_0074c8b0(uVar3,&local_10);
      cVar2 = FUN_007406c0(local_10,local_8,0);
      if (cVar2 != '\0') {
        local_c = FUN_0074cbac(param_1,iVar4);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0074cba2;
  puStack_24 = (undefined1 *)0x74cb9a;
  thunk_FUN_00406e5c(&local_10,uStack_28,puVar1);
  return;
}
