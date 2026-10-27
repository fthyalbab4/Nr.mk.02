// rea decompile_all
// name: FUN_006b0164
// address: 0x6b0164
// body: available
// range: 0x6b0164-0x6b01eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b0181 (push 0x6b01ec followed by fs-segment stack chaining); handler 0x6b01ec lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b0164(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = (undefined1 *)0x6b0176;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_14 = &LAB_006b01ec;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  while( true ) {
    FUN_00407058(&local_8);
    iVar3 = FUN_00408238();
    if (iVar3 <= param_2) break;
    iVar3 = FUN_00407058(&local_8);
    cVar2 = FUN_006aff6c(*(undefined2 *)(iVar3 + param_2 * 2));
    if (cVar2 == '\0') break;
    param_2 = param_2 + 1;
  }
  do {
    FUN_00407058(&local_8);
    iVar3 = FUN_00408238();
    if (iVar3 <= param_2) {
LAB_006b01d6:
      puVar1 = puStack_10;
      *in_FS_OFFSET = uStack_18;
      puStack_10 = &LAB_006b01f3;
      puStack_14 = (undefined1 *)0x6b01eb;
      thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
      return;
    }
    iVar3 = FUN_00407058(&local_8);
    cVar2 = FUN_006aff6c(*(undefined2 *)(iVar3 + param_2 * 2));
    if (cVar2 != '\0') goto LAB_006b01d6;
    param_2 = param_2 + 1;
  } while( true );
}
