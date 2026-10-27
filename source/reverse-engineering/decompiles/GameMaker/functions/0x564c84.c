// rea decompile_all
// name: FUN_00564c84
// address: 0x564c84
// body: available
// range: 0x564c84-0x564cfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x564ca8 (push 0x564cff followed by fs-segment stack chaining); handler 0x564cff lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00564c84(int param_1,undefined4 param_2,char param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;

  puStack_1c = (undefined1 *)0x564c9d;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_20 = &LAB_00564cff;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar3 = *(int *)(param_1 + 0x24);
  puStack_1c = &stack0xfffffffc;
  if (-1 < iVar3 + -1) {
    iVar2 = 0;
    bVar4 = true;
    puStack_1c = &stack0xfffffffc;
    do {
      FUN_00408640(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + iVar2 * 4) + 4),local_8);
      if ((bVar4) &&
         ((param_3 != '\0' ||
          (*(char *)(*(int *)(*(int *)(param_1 + 0x20) + iVar2 * 4) + 0xc) == '\0')))) break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
      bVar4 = iVar3 == 0;
    } while (!bVar4);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00564d06;
  puStack_20 = (undefined1 *)0x564cfe;
  thunk_FUN_00406e5c(&local_8,uStack_24,puVar1);
  return;
}
