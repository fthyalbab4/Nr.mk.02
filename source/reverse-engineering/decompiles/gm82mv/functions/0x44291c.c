// rea decompile_all
// name: FUN_0044291c
// address: 0x44291c
// body: available
// range: 0x44291c-0x44297b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x442930 (push 0x44297c followed by fs-segment stack chaining); handler 0x44297c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044291c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  code *pcVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0044297c;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcVar3 = (code *)FUN_00438600();
  if (pcVar3 != (code *)0x0) {
    cVar2 = (*pcVar3)(param_2,&local_8);
    if (cVar2 != '\0') {
      FUN_00441df8(*(undefined4 *)(param_4 + -8),local_8);
      goto LAB_00442966;
    }
  }
  FUN_00441edc(*(undefined4 *)(param_4 + -8),param_2);
LAB_00442966:
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00442983;
  puStack_18 = (undefined1 *)0x44297b;
  thunk_FUN_004072d8(&local_8,uStack_1c,puVar1);
  return;
}
