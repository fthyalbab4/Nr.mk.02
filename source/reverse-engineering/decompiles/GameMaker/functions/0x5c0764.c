// rea decompile_all
// name: FUN_005c0764
// address: 0x5c0764
// body: available
// range: 0x5c0764-0x5c07cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c077a (push 0x5c07cd followed by fs-segment stack chaining); handler 0x5c07cd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c0764(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_005c07cd;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar3 = FUN_0040b140(param_2);
  cVar2 = FUN_0041ef90(param_1,&DAT_005c07dc,uVar3);
  if (cVar2 == '\0') {
    FUN_0040b75c(PTR_PTR_00782960,&local_8);
    FUN_0041beb8(&PTR_LAB_005bfca8,1,local_8);
    FUN_00406618();
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005c07d4;
  puStack_18 = (undefined1 *)0x5c07cc;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
