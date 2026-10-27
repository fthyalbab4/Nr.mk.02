// rea decompile_all
// name: FUN_004d0234
// address: 0x4d0234
// body: available
// range: 0x4d0234-0x4d02a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d0259 (push 0x4d02a8 followed by fs-segment stack chaining); handler 0x4d02a8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d0234(undefined4 param_1,HGLOBAL param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  ushort *puVar3;
  undefined1 *puStack_24;
  undefined1 *puStack_20;

  puStack_20 = (undefined1 *)0x4d024c;
  puVar1 = GlobalLock(param_2);
  puStack_20 = &LAB_004d02a8;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_24;
  puVar3 = puVar1 + puVar1[2];
  uVar2 = FUN_00488540();
  FUN_00487a04(uVar2,puVar1 + puVar1[1],puVar1 + *puVar1,param_1,puVar3);
  *in_FS_OFFSET = param_1;
  puStack_24 = &LAB_004d02af;
  GlobalUnlock(param_2);
  GlobalFree(param_2);
  return;
}
